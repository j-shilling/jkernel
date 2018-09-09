/*
 * Copyright (C) 2018 Jake Shilling <shilling.jake@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * File:   gdt.h
 * Author: Jake Shilling <shilling.jake@gmail.com>
 *
 * Created on June 11, 2018, 11:54 AM
 */

#pragma once

/* Descriptor Privilege Levels */
#define DPL_KERNEL (0)
#define DPL_SERVER (1)
#define DPL_MODULE (2)
#define DPL_USER (3)

#define GDT_KERNEL_CODE (8)
#define GDT_KERNEL_DATA (16)
#define GDT_SERVER_CODE (24)
#define GDT_SERVER_DATA (32)
#define GDT_MODULE_CODE (40)
#define GDT_MODULE_DATA (48)
#define GDT_USER_CODE (56)
#define GDT_USER_DATA (64)
#define GDT_TSS (72)

#ifndef ASM_FILE

#include <sys/cdefs.h>

__BEGIN_DECLS

void gdt_init(void);

__END_DECLS

#endif
