#include "mlm_cluster.h"

typedef struct {
	char*			endpoint;
	char*			hashkey;
	zsock_t*		dealer;
} s_remote_server_t;

typedef struct {
	zloop_t*		loop;
	zsock_t*		cmdpipe;
	zsock_t*		msgpipe;
	zsock_t*		route;
	zframe_t*		routing_id;
	zhashx_t*		servers;			// alive remote servers
	zhashx_t*		zombies;			// zombie servers
	zhashx_t*		services;			// holds services by name
	zhashx_t*		streams;			// holes stream instances by name
	zhashx_t*		clients;			// holds clients by address
} s_cluster_t;

static s_cluster_t* s_cluster_new(zsock_t* cmdpipe,zsock_t* msgpipe)
{
}

static void s_cluster_destroy(s_cluster_t** p_self) {
}

void mlm_cluster(zsock_t* pipe,void *args)
{
	s_cluster_t* self = s_cluster_new(pipe,(zsock_t*) args);
	zsock_signal(pipe,0);

	zloop_start(self->loop);

	s_cluster_destroy(&self);
}

