#include <iostream>

using namespace std;

class Car {
private:
    int fuel;
public:
    explicit Car(int f) : fuel(f) {}

    int getfuel() const {
        return fuel;
    }

    /*  최상위 class, override 자체가 될 수 없음
     *  하위 class에서 override 할 것이기에 virtual */
    virtual void status() const {
        cout << "fuel : " << getfuel() << endl;
    }
};

class HybridCar : public Car {
private:
    int batt;
public:
    explicit HybridCar(int f, int b) : Car(f), batt(b) {}

    int getbatt() const {
        return batt;
    }

    /*  상속한 Car class의 status() override
     *  하위 class에서 override 될 것이기에 virtual */
    virtual void status() const override {
        cout << "fuel : " << getfuel() << endl;
        cout << "batt : " << getbatt() << endl;
    };
};

class HydroHybridCar : public HybridCar {
private:
    int hydro;
public:
    explicit HydroHybridCar(int f, int b, int h) : HybridCar(f, b), hydro(h) {}

    int gethydro() const {
        return hydro;
    }

    /*  상속한 HybridCar class의 status() override
     *  더이상 상속될 일 없음 -> override 될 일도 없음 -> virtual 없음 */
    void status() const override{ // 상속한 HybridCar class의 status() override
        cout << "fuel : " << getfuel() << endl;
        cout << "batt : " << getbatt() << endl;
        cout << "hydro : " << gethydro() << endl;
    }
};

int main() {
    Car niceCar(1);
    niceCar.status();
    cout << endl;

    HybridCar niceHCar(2, 3);
    niceHCar.status();
    cout << endl;

    HydroHybridCar niceHHCar(4, 5, 6);
    niceHHCar.status();

    return 0;
}