/*
 *  A Win32 UDP flooding utility for penetration testing
 *  Copyright (C) 2011  unixunited@live.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PORTSCAN_H__
#define __PORTSCAN_H__

#include "udpunicorn.h"

#define PORT_END    65535
#define MAX_CON     99

struct scan_t{
    unsigned short port;
};

BOOL CALLBACK   PsOpProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
void            register_ps_class   (void);
VOID WINAPI     _ps                 (void);

#endif
