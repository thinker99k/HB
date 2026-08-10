#include <iostream>

using namespace std;

class pos {
public:
    int xpos;
    int ypos;
public:
    pos(int x, int y)
            : xpos(x), ypos(y) {}

    void show() const {
        cout << xpos << " " << ypos << endl;
    }
};

int main() {
    pos p1(1, 2);
    pos p2(3, 4);

    pos p3(p1.xpos + p2.xpos, p1.ypos + p2.ypos);
    cout << "p3: ";
    p3.show();

    return 0;

}
