#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point current, char tofill)
{
	if ((current.y < 0) || (current.y < 0) || (current.y >= size.y)
		|| (current.x >= size.x) || (tab[current.y][current.x] != tofill))
		return ;
	tab[current.y][current.x] = 'F';
	fill(tab, size, (t_point){current.x - 1, current.y}, tofill);
	fill(tab, size, (t_point){current.x + 1, current.y}, tofill);
	fill(tab, size, (t_point){current.x, current.y - 1}, tofill);
	fill(tab, size, (t_point){current.x, current.y + 1}, tofill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
