#include <iostream>

using namespace std;

class Pos {
private:
    int xpos;
    int ypos;

public:
    Pos(int x, int y)
            : xpos(x), ypos(y) {}

    friend bool operator==(const Pos &p1, const Pos &p2);

    friend bool operator!=(const Pos &p1, const Pos &p2);
};

// 완전 동일하면 true, 아니면 (하나라도 다른게 있으면) false
bool operator==(const Pos &p1, const Pos &p2) {
    if (p1.xpos == p2.xpos && p1.ypos == p2.ypos) {
        return true;
    } else {
        return false;
    }
}

// 완전 동일하면 false, 아니면 (하나라도 같은게 있으면) true
bool operator!=(const Pos &p1, const Pos &p2) {
    return !operator==(p1, p2);
}

int main() {
    Pos a00(0, 0);
    Pos a01(0, 1);

    Pos b00(0, 0);
    Pos b01(0, 1);

    cout << "00 == 00 ? " << operator==(a00, b00) << endl; // 전부 같음 -> true
    cout << "00 == 01 ? " << operator==(a00, b01) << endl; // 하나라도 다른게 있음 -> false
    cout << "00 != 00 ? " << operator!=(a00, b00) << endl; // 전부 같음 -> false
    cout << "00 != 01 ? " << operator!=(a00, b01) << endl; // 하나라도 같은게 있음 -> true

    return 0;

}