#include <iostream>

void swap(int * i1, int * i2){
    int tmp;
    tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void swap(char * c1, char * c2){
    char tmp;
    tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

void swap(double * d1, double * d2){
    double tmp;
    tmp = *d1;
    *d1 = *d2;
    *d2 = tmp;
}

int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2<< std::endl;

    double dbl1 = 1.111, dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;

    return 0;
}
