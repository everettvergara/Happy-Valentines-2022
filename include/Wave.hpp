/*
 *  Wave defaults and constants
 *  Copyright (C) 2022 Everett Gaius S. Vergara
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
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *	
 */

#ifndef _WAVE_HPP_
#define _WAVE_HPP_

#include "Image.h"

namespace g80 {
    constexpr int SZ_WAVE_COLORS = 15; 
    Color WAVE_PALETTE[SZ_WAVE_COLORS] {0, 0, 0, 0, 0, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6};
    Text WAVE_TEXT[SZ_WAVE_COLORS] {' ', ' ', ' ', ' ', ' ', '.', '.', '^', '^', '*', '#', '#', '#', '#', '#'};
}

#endif 