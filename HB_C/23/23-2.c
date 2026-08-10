#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point SW;
	Point NE;
} Rectangle;

void showarea(Rectangle Rec)
{
	printf("직사각형의 넓이는 %d\n",(Rec.NE.xpos-Rec.SW.xpos)*(Rec.NE.ypos-Rec.SW.ypos));
}

void showpoint(Rectangle Rec)
{
	printf("NW: (%d, %d), NE: (%d, %d)\nSW: (%d, %d), SE:(%d, %d)\n",
		  Rec.SW.xpos, Rec.NE.ypos, Rec.NE.xpos, Rec.NE.ypos,
		  Rec.SW.xpos, Rec.SW.ypos, Rec.NE.xpos, Rec.SW.ypos);
}

int main(void)
{
	Rectangle Rec1 = {
		{0,0}, 
		{100,100}
	};
	showarea(Rec1);
	showpoint(Rec1);
}