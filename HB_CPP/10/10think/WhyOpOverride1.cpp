#include <iostream>

using namespace std;

class pos {
private:
    int xpos;
    int ypos;
public:
    pos(int x, int y)
            : xpos(x), ypos(y) {}

    pos operator+(const pos &ref) {
        xpos += ref.xpos;
        ypos += ref.ypos;

        return *this;
    }

    void show() const {
        cout << xpos << " " << ypos << endl;
    }
};


int main() {
    pos p1(1, 2);
    pos p2(3, 4);

    pos p3 = p1 + p2;
    cout << "p3: ";p3.show();

    return 0;

}
