#include <iostream>

using namespace std;

class MyFriendInfo{
private:
    char * name;
    int age;

public:
    MyFriendInfo(const char * n, int a) : age(a){
        name = new char[strlen(n)];
        strcpy(name, n);
    }
    ~MyFriendInfo(){
        delete name;
        cout << "name deleted" << endl;
    }
    void Show1(){
        cout << "name : " << name << endl;
        cout << "age  : " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo{
private:
    char * phone;
public:
    MyFriendDetailInfo(const char * n, int a, const char * p) : MyFriendInfo(n, a){
        phone = new char[strlen(p)];
        strcpy(phone, p);
    }
    ~MyFriendDetailInfo(){
        delete phone;
        cout << "phone deleted" << endl;
    }
    void Show2(){
        Show1();
        cout << "phone: " << phone << endl;
    }
};

int main(void){
    MyFriendDetailInfo niceFriend("Lee", 26, "010-1234-5678");

    niceFriend.Show1();
    cout << endl;

    niceFriend.Show2();
    cout << endl;
}