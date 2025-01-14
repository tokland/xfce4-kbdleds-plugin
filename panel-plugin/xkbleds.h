/*  xfce4-kbdleds-plugin - panel plugin for keyboard LEDs
 *
 *  Copyright (c) 2011-2021 OCo <oco2000@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __XKBLEDS_H__
#define __XKBLEDS_H__

G_BEGIN_DECLS

#define NUM_LEDS 2
extern int xkb_leds[NUM_LEDS];
extern int xkb_state;
extern int old_xkb_state;
extern char short_lock_names[NUM_LEDS];
extern char *lock_names[NUM_LEDS];

int xkbleds_init();
void xkbleds_finish();
void refresh();

G_END_DECLS

#endif /* !__XKBLEDS_H__ */
