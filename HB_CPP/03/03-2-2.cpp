#include <iostream>
#include <cstring>

#define BUF_SZ 100
using namespace std;

class Printer{
private:
    char buffer[BUF_SZ];
public:
    void SetString(char* str);

    void ShowString(void);
};

void Printer::SetString(char *str) {
    memset(buffer, BUF_SZ, sizeof(char));
    strcpy(buffer, str);
}

void Printer::ShowString(void) {
    cout << buffer << endl;
}

int main(void){
    Printer pnt;

    pnt.SetString("Hello, world!");
    pnt.ShowString();

    pnt.SetString("I Love C++");
    pnt.ShowString();

    return 0;
}