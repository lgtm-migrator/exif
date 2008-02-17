/* actions.h
 *
 * Copyright � 2002 Lutz M�ller <lutz@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details. 
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include <libexif/exif-data.h>

typedef struct {
	ExifTag tag;
	ExifIfd ifd;

	unsigned int machine_readable;
	unsigned int use_ids;

	const char *fin;
	char fout[1024];
} ExifParams;

void action_extract_thumb    (ExifData *, ExifLog *, ExifParams);
void action_show_tag         (ExifData *, ExifLog *, ExifParams);

void action_tag_table        (ExifData *, ExifParams);
void action_tag_list         (ExifData *, ExifParams);
void action_tag_list_machine (ExifData *, ExifParams);
void action_tag_list_xml     (ExifData *, ExifParams);

void action_mnote_list       (ExifData *, ExifParams);

#endif /* __ACTIONS_H__ */
