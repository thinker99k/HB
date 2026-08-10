#include <iostream>

/** this, reference, pointer 내용 일부러 섞음 */

using namespace std;

class Pos {
public:
    int xpos;
    int ypos;

public:
    Pos(int x, int y)
            : xpos(x), ypos(y) {}

    Pos& operator+=(const Pos &ref) {
        xpos += ref.xpos;
        ypos += ref.ypos;

        return *this; // 객체 자체를 반환 -> 반환형이 Pos&형이기에, 원 객체를 가리키는 참조자 반환
    }

    Pos& operator-=(const Pos &ref) {
        xpos -= ref.xpos;
        ypos -= ref.ypos;

        return *this; // 객체 자체를 반환 -> return받은 값이 main 함수에서 복사됨
    }

    Pos* operator*=(const Pos &ref){
        xpos *= ref.xpos;
        ypos *= ref.ypos;

        return this; // 객체의 주소를 반환 -> 원 객체를 가리키는 주소 반환
    }
};


int main(void) {
    Pos p1(1, 2);
    Pos p2(3, 4);
    cout << "p1 address: " << &p1 << endl << endl;

    Pos& r1 = p1 += p2; // p1.operator+=(p2)와 같다, p1과 주소 똑같음
    cout << "r1: " << r1.xpos << " " << r1.ypos << endl;
    cout << "r1 address: " << &r1 << endl << endl;

    Pos p3 = p1 -= p2; // p1.operator-=(p2)와 같다, 새로운 객체
    cout << "p3: " << p3.xpos << " " << p2.ypos << endl;
    cout << "p3 address: " << &p3 << endl << endl;

    Pos* pointer = p1 *= p2;
    cout << "pointer: " << pointer->xpos << " " << pointer->ypos << endl;
    cout << "pointer's pointing address: " << pointer << endl;

    return 0;

}
