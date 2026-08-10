#include <iostream>

using namespace std;

class NiceClass {
private:
    int priVal;
protected:
    int proVal;
public:
    int pubVal;
public:
    NiceClass(int i1, int i2, int i3)
            : priVal(i1), proVal(i2), pubVal(i3) {}

    int getpri() const {
        return priVal; // class 내 ok
    }

    int getpro() const {
        return proVal; // class 내 ok
    }

    int getpub() const {
        return pubVal; // class 내 ok
    }

    virtual void showpri() const {
        cout << priVal << endl;
    }

    virtual void showpro() const {
        cout << proVal << endl;
    }

    virtual void showpub() const {
        cout << pubVal << endl;
    }
};

class ChildNiceClass1 : public NiceClass {
public:
    ChildNiceClass1(int v1, int v2, int v3)
            : NiceClass(v1, v2, v3) {}

    void showpri() const override {
        // cout << priVal << endl;
        cout << getpri() << endl; // 상속 class 내 X
    }

    void showpro() const override {
        cout << proVal << endl; // 상속 class 내 ok
    }

    void showpub() const override {
        cout << pubVal << endl; // 상속 class 내 ok
    }
};

/* child class를 위하여 protected를 사용하는 것 보다는
 * parent class에서 return하는 함수를 정의하여 child class에서 이를 이용하는 것이 좋다 */

int main(void) {
    ChildNiceClass1 cnc1(1, 2, 3);

    // cout << cnc1.priVal << endl; // class 밖 X
    cnc1.showpri();

    //cout << cnc1.proVal << endl; // class 밖 X
    cnc1.showpro();

    cout << cnc1.pubVal << endl; // class 밖 ok
    cnc1.showpub();

    return 0;
}
