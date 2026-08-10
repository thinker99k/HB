#include <iostream>

using namespace std;

/** No virtual */
class First {
private:
    char *strOne;
public:
    First(char *str) {
        strOne = new char[strlen(str) + 1];
    }

    ~First() {
        cout << "~First()" << endl;
        delete[]strOne;
    }
};

class Second : public First {
private:
    char *strTwo;
public:
    Second(char *str1, char *str2) : First(str1) {
        strTwo = new char[strlen(str2) + 1];
    }

    ~Second() {
        cout << "~Second()" << endl;
        delete[]strTwo;
    }
};


/** With virtual */
class First2 {
private:
    char *strOne;
public:
    First2(char *str) {
        strOne = new char[strlen(str) + 1];
    }

    virtual ~First2() {
        cout << "~First2()" << endl;
        delete[]strOne;
    }
};

class Second2 : public First2 {
private:
    char *strTwo;
public:
    Second2(char *str1, char *str2) : First2(str1) {
        strTwo = new char[strlen(str2) + 1];
    }

    ~Second2() {
        cout << "~Second2()" << endl;
        delete[]strTwo;
    }
};



/** virtual은 포인터가 가리키는 형이 아닌 자료의 실제 형을 기반으로 함수 선택
 * 하위 class의 상위 class까지 거슬러 올라가면서 소멸자 작동 */

int main(void) {
    First *ptr = new Second("simple", "complex");
    /** Second class이지만, 포인터가 First* 형
     * -> strtwo만 삭제, strone 삭제 안됨 */
    delete ptr;

    First2 *ptr2 = new Second2("easy", "hard");
    /** Second2 class에 First2*형 포인터
     * -> strtwo는 Second2 class에서, strone는 First2 class에서 할당 해제 */
    delete ptr2;

    return 0;
}