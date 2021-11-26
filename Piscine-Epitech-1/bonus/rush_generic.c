/*
** EPITECH PROJECT, 2021
** RUSH_BONUS
** File description:
** 
*/

void    rush1(int x, int y, char *str);
void    rush2(int x, int y);
void    rush3(int x, int y);
void    rush4(int x, int y);
void    rush5(int x, int y);

void    rush_generic(int x, int y, int mode, char *str)
{
	if (mode == 1)
        	rush1(x, y, str);
		if (mode == 2)
        	rush2(x, y);
		if (mode == 3)
        	rush3(x, y);
		if (mode == 4)
        	rush4(x, y);
		if (mode == 5)
        	rush5(x, y);
}

void    rush(int x, int y, int mode, char *str)
{
    rush_generic(x, y, mode, str);
}
