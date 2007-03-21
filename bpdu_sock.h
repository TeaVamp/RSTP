/*****************************************************************************
  Copyright (c) 2006 EMC Corporation.

  This program is free software; you can redistribute it and/or modify it 
  under the terms of the GNU General Public License as published by the Free 
  Software Foundation; either version 2 of the License, or (at your option) 
  any later version.
  
  This program is distributed in the hope that it will be useful, but WITHOUT 
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for 
  more details.
  
  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc., 59 
  Temple Place - Suite 330, Boston, MA  02111-1307, USA.
  
  The full GNU General Public License is included in this distribution in the
  file called LICENSE.

  Authors: Srinivas Aji <Aji_Srinivas@emc.com>

******************************************************************************/

#ifndef BPDU_SOCK_H
#define BPDU_SOCK_H

#include "epoll_loop.h"

struct ifdata;

void bpdu_send(struct epoll_event_handler *h, unsigned char *data, int len);

int bpdu_sock_create(struct epoll_event_handler *h,
                     int if_index, char *name, struct ifdata *ifdata);

void bpdu_sock_delete(struct epoll_event_handler *h);

/* Externally provided, we call it */
void bpdu_rcv(struct ifdata *ifdata, unsigned char *data, int len);

#endif
