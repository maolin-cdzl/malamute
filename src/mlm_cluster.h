
#ifndef MLM_CLUSTER_H_INCLUDED
#define MLM_CLUSTER_H_INCLUDED

#include <czmq.h>

#ifdef __cplusplus
extern "C" {
#endif

MLM_EXPORT void mlm_cluster(zsock_t* pipe,void* args);

#ifdef __cplusplus
}
#endif

#endif

