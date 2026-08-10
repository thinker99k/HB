#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point (*p_pos1), Point (*p_pos2))
{
	Point tmppos;
	tmppos = *(p_pos1);
	*(p_pos1) = *(p_pos2);
	*(p_pos2) = tmppos;
}

int main(void)
{
	Point pos1 = {2, 4};
	Point pos2 = {5, 7};
	printf("SwapPoint 이전\npos1 : (%d, %d) / pos2 : (%d, %d)\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	
	SwapPoint(&pos1, &pos2);
	printf("SwapPoint 이후\npos1 : (%d, %d) / pos2 : (%d, %d)\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}