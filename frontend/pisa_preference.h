/* 
   SANE EPSON backend
   Copyright (C) 2001, 2008  SEIKO EPSON CORPORATION

   Date		Author		Reason
   06/13/2001	N.Sasaki	New
   
   This file is part of the `iscan' program.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   As a special exception, the copyright holders give permission
   to link the code of this program with the esmod library and
   distribute linked combinations including the two.  You must obey
   the GNU General Public License in all respects for all of the
   code used other then esmod.
*/


#ifndef ___PISA_PREFERENCE_H
#define ___PISA_PREFERENCE_H

typedef enum
{
  CFG_BOOL,
  CFG_LONG,
  CFG_ULONG,
  CFG_DOUBLE,
  CFG_STRING
} cfg_value_type;

typedef enum
{
  CFG_PARAM,
  CFG_VALUE
} cfg_key_type;

typedef enum
{
  CFG_QUOTE_NO,
  CFG_QUOTE_SINGLE,
  CFG_QUOTE_DOUBLE
} cfg_quote_type;

typedef struct
{
  const char		* name;
  cfg_value_type	type;
  void			* value;
} cfg_struct;

void get_cfg ( char * file, cfg_struct * cfg, int num );
void set_cfg ( char * file, cfg_struct * cfg, int num );

#endif // ___PISA_PREFERENCE_H

