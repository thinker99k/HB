#include <cstring>
#include <iostream>

using namespace std;

int main(void){
    char str1[64] = "I am takling";
    char* str2 = " potato.";

    strcat(str1, str2);
    char str3[64];
    strcpy(str3, str1);

    cout << str3 << endl;

    bool b = strcmp("potato", "apple") == 0 ? true : false;
    cout << "is \"potato\" and \"apple\" same?: " << b << endl;

}
