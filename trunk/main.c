/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <stdio.h>
int main()
{

	int enterloop;
	int a;
	int y;
	int x;
    
    puts("Please enter the puzzles numbers from left to right, top to bottom.");
    puts("After entering a number, press return then enter the next number.");
    puts("Contine until all 81 numbers have been entered.");
    puts("If a space is blank (has no number) then enter a 0 (thats a zero).");
    puts("This works for 9*9 puzzles ONLY!\n");
    puts("Enter 1st value:");
    
	getvalues();
    for (a=0;a=81;a++)
	{
	numelim(a);
	}
}
