#include <iostream>

using namespace std;

namespace ns1 {
    class Pos {
    private:
        int xpos;
        int ypos;

    public:
        Pos(int x, int y)
                : xpos(x), ypos(y) {}

        Pos operator-(const Pos &ref) const {
            Pos ret(xpos - ref.xpos, ypos - ref.ypos);

            return ret;
        }

        void show() const {
            cout << xpos << " " << ypos << endl;
        }
    };
}

namespace ns2 {
    class Pos {
    private:
        int xpos;
        int ypos;

    public:
        Pos(int x, int y)
                : xpos(x), ypos(y) {}

        friend Pos operator-(const Pos &p1, const Pos &p2);

        void show() const {
            cout << xpos << " " << ypos << endl;
        }
    };

    Pos operator-(const Pos &p1, const Pos &p2) {
        Pos ret(p1.xpos - p2.xpos, p1.ypos - p2.ypos);

        return ret;
    }
}


int main(void) {
    ns1::Pos p11(1, 2);
    ns1::Pos p12(3, 4);
    ns1::Pos p13 = p11 - p12;

    ns2::Pos p21(1, 2);
    ns2::Pos p22(3, 4);
    ns2::Pos p23 = p21 - p22;

    cout << "member function: ";
    p13.show();

    cout << "global function: ";
    p23.show();


    return 0;

}
