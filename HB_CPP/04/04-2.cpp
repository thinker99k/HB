#include <iostream>

using namespace std;

class Point{
private:
    int xpos;
    int ypos;
public:
    void Init(int x, int y){
        xpos = x;
        ypos = y;
    }
    void Show() const{
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    };
};

class Circle{
private:
    Point pos;
    int radius;
public:
    void Init(int x1, int y1, int r){
        pos.Init(x1, y1);
        radius = r;
    }
    void Show() const{
        cout << "radius: " << radius << endl;
        pos.Show();
    }
};

class Ring{
private:
    Circle c1;
    Circle c2;
public:
    void Init(int x1, int y1, int r1, int x2, int y2, int r2){
        c1.Init(x1, y1, r1);
        c2.Init(x2, y2, r2);
    }
    void Show() const{
        cout << "Inner Circle Info..." << endl;
        c1.Show();
        cout << "Outer Circle Info..." << endl;
        c2.Show();
    }
};


int main(void){
    Ring r;
    r.Init(1, 1, 4, 2, 2, 9);
    r.Show();

    return 0;
}