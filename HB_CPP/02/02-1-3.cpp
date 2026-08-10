#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void SwapPointer(int* &ptr1, int* &ptr2){
    int* tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;
}

int main(void){
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    cout << "ptr1 -> " << *ptr1 << endl;
    cout << "ptr2 -> " << *ptr2 << endl;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;

    SwapPointer(ptr1, ptr2);

    cout << "*** after SwapPointer ***" << endl;
    cout << "ptr1 -> " << *ptr1 << endl;
    cout << "ptr2 -> " << *ptr2 << endl;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;

}