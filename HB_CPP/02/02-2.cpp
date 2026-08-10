#include <iostream>
using namespace std;

int main(void){
    const int num = 12;
    const int* ptr = &num;
    const int* &ref = ptr; // int * 형의 참조자

    cout << *ptr << endl;
    cout << *ref << endl;
}