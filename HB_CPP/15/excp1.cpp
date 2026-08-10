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
    cout << "return: ";
    try{
        throwfunc(num);
    }
    catch(int expn){
        cout << expn;
    }
    catch(char expn){
        cout << expn;
    }
    catch(double expn){
        cout << expn;
    }
    cout << endl;
}

int main() {
    somefunc(10);
    somefunc(20);
    somefunc(30);
    
    return 0;
}