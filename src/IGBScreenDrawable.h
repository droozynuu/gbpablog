/*
 This file is part of gbpablog.
 
 gbpablog is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 gbpablog is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with gbpablog.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IGBSCREENDRAWABLE_H__
#define __IGBSCREENDRAWABLE_H__

class IGBScreenDrawable
{
public:
	virtual void OnPreDraw() = 0;
	virtual void OnPostDraw() = 0;
	virtual void OnDrawPixel(int idColor, int x, int y) = 0;
	virtual void OnRefreshScreen() = 0;
	virtual void OnClear() = 0;
};

#endif