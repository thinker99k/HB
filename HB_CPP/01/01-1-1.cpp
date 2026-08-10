#include <iostream>

int main(void){
    int sum = 0, tmp;
    for(int i=0; i<5; i++){
        std::cout << i+1 << "th integer input:";
        std::cin >> tmp;
        sum += tmp;
    }

    std::cout << "sum: " << sum << std::endl;
}
