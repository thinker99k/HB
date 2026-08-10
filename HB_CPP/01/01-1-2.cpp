#include <iostream>

int main(void){
    char name[50];
    char hp[20];

    std::cout << "input name:";
    std::cin >> name;

    std::cout << "input hp:";
    std::cin >> hp;

    std::cout << "name : " << name << std::endl;
    std::cout << "hp : " << hp << std::endl;
}