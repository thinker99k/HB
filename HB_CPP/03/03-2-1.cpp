#include <iostream>

class Calc {
private:
    int optime[4]; // + - * /
public:
    void Init();

    double Add(double d1, double d2);

    double Min(double d1, double d2);

    double Mul(double d1, double d2);

    double Div(double d1, double d2);

    void show(void);
};

void Calc::Init() {
    for(int i = 0; i < 4; i++) {
        optime[i] = 0;
    }
}

double Calc::Add(double d1, double d2) {
    optime[0]++;
    return d1 + d2;
}

double Calc::Min(double d1, double d2) {
    optime[1]++;
    return d1 - d2;
}

double Calc::Mul(double d1, double d2) {
    optime[2]++;
    return d1 * d2;
}

double Calc::Div(double d1, double d2) {
    optime[3]++;
    return d1 / d2;
}

void Calc::show(void) {
    std::cout << "Add, Min, Mul, Min" << std::endl;
    for(int i=0; i<4; i++){
        printf("%3d  ", optime[i]);
    }
}

int main(void){
    Calc c;
    c.Init();
    std::cout << "3.2 + 2.4 = " << c.Add(3.2, 2.4) << std::endl;
    std::cout << "3.5 / 1.7 = " << c.Div(3.5, 1.7) << std::endl;
    std::cout << "2.2 - 1.5 = " << c.Min(2.2, 1.5) << std::endl;
    std::cout << "4.9 / 1.2 = " << c.Div(4.9, 1.2) << std::endl;
    c.show();
}