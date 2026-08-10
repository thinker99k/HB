#include <iostream>

int main(void){
    int sell;

    while(1){
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
        std::cin >> sell;
        if(sell == -1) {
            std::cout << "프로그램을 종료합니다" << std::endl;
            break;
        }
        else {
            std::cout << "이번달 급여: " << 50 + sell * 0.12 << "만원" << std::endl;
        }
    }
}