/* RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *
 * RetroArch is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Found-
 * ation, either version 3 of the License, or (at your option) any later version.
 *
 * RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with RetroArch.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <boolean.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include <windows.h>

#include "../../ui_companion_driver.h"

static enum ui_msg_window_response ui_msg_window_win32_response(ui_msg_window_state *state, UINT response)
{
	switch (response)
	{
	   case IDOK:
		return UI_MSG_RESPONSE_OK;
	   case IDCANCEL:
		return UI_MSG_RESPONSE_CANCEL;
	   case IDYES:
	    return UI_MSG_RESPONSE_YES;
	   case IDNO:
        return UI_MSG_RESPONSE_NO;
	}

	return UI_MSG_RESPONSE_NA;
}

static enum ui_msg_window_response ui_msg_window_win32_error(ui_msg_window_state *state)
{
   return UI_MSG_RESPONSE_CANCEL;
}

static enum ui_msg_window_response ui_msg_window_win32_information(ui_msg_window_state *state)
{
   return UI_MSG_RESPONSE_CANCEL;
}

static enum ui_msg_window_response ui_msg_window_win32_question(ui_msg_window_state *state)
{
   return UI_MSG_RESPONSE_CANCEL;
}

static enum ui_msg_window_response ui_msg_window_win32_warning(ui_msg_window_state *state)
{
   return UI_MSG_RESPONSE_CANCEL;
}

const ui_msg_window_t ui_msg_window_win32 = {
   ui_msg_window_win32_error,
   ui_msg_window_win32_information,
   ui_msg_window_win32_question,
   ui_msg_window_win32_warning,
   "win32"
};
