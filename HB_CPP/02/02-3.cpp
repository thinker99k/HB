#include <iostream>

using namespace std;

typedef struct{
    int xpos;
    int ypos;
} Pos;

Pos & PosAdder(Pos & p1, Pos & p2){
    Pos * ret = new Pos;

    ret->xpos = p1.xpos + p2.xpos;
    ret->ypos = p1.ypos + p2.ypos;

    return *ret;
}

int main(void){
    Pos* p1 = new Pos;
    Pos* p2 = new Pos;

    p1->xpos = 10;
    p1->ypos = 20;

    p2->xpos = 30;
    p2->ypos = 40;

    Pos & rsum = PosAdder(*p1, *p2); //

    cout << rsum.xpos << rsum.ypos << endl;

    delete p1;
    delete p2;
}