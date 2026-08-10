#include <iostream>

using namespace std;

int throwfunc(int num) throw(int, char, double) {
    if (num == 10) {
        throw -1;
    }
    else if(num == 20){
        throw 'a';
    }
    else
        throw 3.14;
};

void somefunc(int num){
    try{
        throwfunc(num);
    }
    catch(...){
        cout << "error" << endl; // 전달 인자가 없으므로, 무의미함
    }
}

int main() {
    somefunc(10);
    somefunc(20);
    somefunc(30);
    
    return 0;
}