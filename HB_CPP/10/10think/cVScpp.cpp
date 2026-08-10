#include <iostream>

using namespace std;

typedef struct {
    int xpos;
    int ypos;
} sPos;

class cPos {
public:
    int xpos;
    int ypos;

public:
    cPos(int x, int y)
            : xpos(x), ypos(y) {}

    cPos operator+(const cPos &ref) const {
        cPos ret(xpos + ref.xpos, ypos + ref.ypos);

        return ret;
    }
};

int main(void) {
    // c style
    sPos sp1 = {1, 2};
    sPos sp2 = {3, 4};

    sPos sp3 = {sp1.xpos + sp2.xpos, sp1.ypos + sp2.ypos};
    cout << "sp3: " << sp3.xpos << " " << sp3.ypos << endl;


    // c++ operator overload
    cPos cp1(1, 2);
    cPos cp2(3, 4);

    cPos cp3 = cp1 + cp2;
    cout << "cp3: " << cp3.xpos << " " << cp3.ypos << endl;

    cPos cp4 = cp1.operator+(cp2);
    cout << "cp4: " << cp4.xpos << " " << cp4.ypos << endl;


    return 0;

}
