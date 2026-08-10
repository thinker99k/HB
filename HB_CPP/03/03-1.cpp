#include <iostream>

using namespace std;

struct pos{
    int xpos;
    int ypos;

    void MovePos(int x, int y){
        xpos += x;
        ypos += y;
    }

    void AddPoint(const pos &p){
        xpos += p.xpos;
        ypos += p.ypos;
    }

    void Show(void){
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

int main(void){
    pos p1 = {12, 4};
    pos p2 = {20, 30};

    p1.MovePos(-7, 10);
    p1.Show();

    p1.AddPoint(p2);
    p1.Show();

    return 0;
}