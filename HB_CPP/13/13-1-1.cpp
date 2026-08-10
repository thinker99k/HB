#include <iostream>

using namespace std;

class Pos {
private:
    int x;
    int y;
public:
    Pos(int x = 0, int y = 0)
            : x(x), y(y) {}
    
    void Show() const {
        cout << '[' << x << ", " << y << ']' << endl;
    }
};

template <typename T>
void Swap(T &s1, T &s2){
    T temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(void) {
    Pos p1(1, 2);
    Pos p2(3, 4);
    
    Swap(p1, p2);
    
    p1.Show();
    p2.Show();
    
    return 0;
}