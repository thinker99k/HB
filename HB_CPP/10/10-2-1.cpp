#include <iostream>

using namespace std;

class Pos {
private:
    int xpos;
    int ypos;

public:
    Pos(int x, int y)
            : xpos(x), ypos(y) {}

    Pos& operator-(){
        Pos ret(-xpos, -ypos);

        return ret;
    }

    void Show() const{
        cout << xpos << " " << ypos << endl;
    }
};

int main() {
    Pos p1(1, 2);

    Pos p2 = -p1;

    cout << "p1: "; p1.Show();
    cout << "p2: "; p2.Show();

    return 0;

}