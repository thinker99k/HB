#include <iostream>

using namespace std;

void addone(int &i){
    i += 1;
}
void changesign(int &i){
    i *= -1;
}

int main(void){
    int i = 10;

    cout << "int i : " << i << endl;

    addone(i);
    cout << "after addone" << endl;
    cout << "int i : " << i << endl;

    changesign(i);
    cout << "after changesign" << endl;
    cout << "int i : " << i << endl;

    return 0;
}