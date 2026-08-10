/*** 8gb memory leaker ***/

#include <iostream>
#include <unistd.h>

class MemoryLeaker {
private:
    int* m;

public:
    MemoryLeaker() {
        m = new int[268435456];
        std::cout << "alloc 1GiB" << std::endl;
    }

    // 소멸자를 기본 소멸자로 지정해주어, new로 할당 된 메모리를 delete로 할당 해제 하지 못하게 함
    ~MemoryLeaker() = default;
};

int main() {
    for (int i = 0; i < 8; ++i) {
        MemoryLeaker leaker;
        sleep(1);
    }

    return 0;
    // 프로그램 종료 이후에도 할당된 메모리는 남아있어서 누수됨
}
