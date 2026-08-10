#include <iostream>

using namespace std;

class Rectangle {
private:
    int w;
    int h;
public:
    Rectangle(int i1, int i2)
            : w(i1), h(i2) {}

    void Area() {
        cout << "area: " << w*h << endl;
    }
};

class Square : public Rectangle {
public:
    Square(int i1)
            : Rectangle(i1, i1) {}
};

int main(void){
    Rectangle rec(4, 3);
    rec.Area();

    Square sqr(7);
    sqr.Area();

    return 0;
}