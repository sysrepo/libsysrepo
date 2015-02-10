/*
 * Copyright (C) 2015 Cisco Systems, Inc.
 *
 * Author: Luka Perkov <luka.perkov@sartura.hr>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __TCP_H__
#define __TCP_H__

#include <stdbool.h>

extern char *u_tcp_host;
extern char *u_tcp_port;
extern struct uloop_fd ufd;

void u_tcp_connect();
int u_tcp_write(const char *buf, int len, bool more);
int u_tcp_printf(const char *format, ...);

#endif /* __TCP_H__ */
