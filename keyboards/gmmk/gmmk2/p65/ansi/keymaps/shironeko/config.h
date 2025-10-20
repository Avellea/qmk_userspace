/* Copyright 2025 Avellea
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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


#pragma once

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINDOWS, UNICODE_MODE_LINUX

// #define TAPPING_TERM 150

/* Send up to 4 key press events per scan */
#define QMK_KEYS_PER_SCAN 12

// /* Set debounce time to 2ms */
#define DEBOUNCE 2
#define USB_POLLING_INTERVAL_MS 1 /* 1000hz polling rate - 2 = 500hz, etc. */