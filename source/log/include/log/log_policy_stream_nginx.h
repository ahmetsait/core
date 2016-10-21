/*
 *	Logger Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A generic logger library providing application execution reports.
 *
 */

#ifndef LOG_POLICY_STREAM_NGINX_H
#define LOG_POLICY_STREAM_NGINX_H 1

/* -- Headers -- */

#include <log/log_api.h>

#include <log/log_policy.h>

#ifdef __cplusplus
extern "C" {
#endif

/* -- Headers -- */

#include <stdint.h>
#include <stdarg.h>

/* -- Forward Declarations -- */

struct ngx_log_s;

struct log_policy_stream_nginx_ctor_type;

/* -- Type Definitions -- */

typedef void (*log_policy_stream_nginx_error)(uintptr_t, struct ngx_log_s *, int, const char *, ...);

typedef struct log_policy_stream_nginx_ctor_type * log_policy_stream_nginx_ctor;

/* -- Member Data -- */

struct log_policy_stream_nginx_ctor_type
{
	struct ngx_log_s * ngx_log_ptr;
	log_policy_stream_nginx_error ngx_error_ptr;
};

/* -- Methods -- */

LOG_API log_policy_interface log_policy_stream_nginx_interface(void);

#ifdef __cplusplus
}
#endif

#endif /* LOG_POLICY_STREAM_NGINX_H */
