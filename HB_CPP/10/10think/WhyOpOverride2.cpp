#include <iostream>

using namespace std;

class pos {
private:
    int xpos;
    int ypos;
public:
    pos(int x, int y)
            : xpos(x), ypos(y) {}

    void show() const {
        cout << xpos << " " << ypos << endl;
    }

    friend pos addpos(const pos &r1, const pos &r2);
};

pos addpos(const pos &r1, const pos &r2) {
    return pos(r1.xpos + r2.xpos, r1.ypos + r2.ypos);
}


int main() {
    pos p1(1, 2);
    pos p2(3, 4);

    pos p3 = addpos(p1, p2);
    cout << "p3: ";
    p3.show();

    return 0;

}
