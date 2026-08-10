#include <iostream>

using namespace std;

class Gun {
private:
    int bullet;        // 장전된 총알의 수
public:
    Gun(int bnum) : bullet(bnum) {}

    void Shut() {
        cout << "BBANG!" << endl;
        bullet--;
    }

    int ammo() const {
        return bullet;
    }
};

class Police {
private:
    int handcuffs;    // 소유한 수갑의 수
    Gun *pistol;     // 소유하고 있는 권총
public:
    Police(int bnum, int bcuff)
            : handcuffs(bcuff) {
        if (bnum > 0)
            pistol = new Gun(bnum);
        else
            pistol = NULL;
    }

    Police(const Police &ref) // 1. 복사 생성자
            : handcuffs(ref.handcuffs) {
        cout << "복사 연산자" << endl;

        if (ref.pistol != NULL) { // 총이 없지 않을 때
            pistol = new Gun(*(ref.pistol)); // Gun의 기본 복사 생성자, 복사 생성자는 매개변수로 reference 요구
        } else {
            pistol = NULL;
        }

    }

    Police &operator=(const Police &ref) { // 2. 대입 연산자
        cout << "대입 연산자" << endl;
        if (pistol != NULL) // self가 총이 있을 때
            delete pistol;  // 무조건 날림

        if (ref.pistol != NULL) { // 레퍼런스가 총이 있을때
            pistol = new Gun(*(ref.pistol)); // 총을 만들어줌
        } else { // 레퍼런스가 총이 없을 떄
            pistol = NULL; // self도 총 null
        }

        handcuffs = ref.handcuffs;

        return *this;
    }

    void PutHandcuff() {
        cout << "SNAP!" << endl;
        handcuffs--;
    }

    void Shut() {
        if (pistol == NULL)
            cout << "Hut BBANG!" << endl;
        else
            pistol->Shut();
    }

    void Show() const {
        cout << "handcuffs: " << handcuffs << endl;
        cout << "pistol serial: " << pistol << endl;
        cout << "bullet: " << pistol->ammo() << endl;
    }

    ~Police() {
        if (pistol != NULL)
            delete pistol;
    }
};

int main() {
    Police p1(100, 10);
    Police p2 = p1;

    Police p3(0, 0);
    p3 = p1;

    for (int i = 0; i < 10; i++) {
        p1.PutHandcuff();
        p1.Shut();
        p1.Shut();
    }

    for (int i = 0; i < 5; i++) {
        p2.PutHandcuff();
        p2.Shut();
        p2.Shut();
    }

    cout << "[p1]" << endl;
    p1.Show();
    cout << "[p2]" << endl;
    p2.Show();
    cout << "[p3]" << endl;
    p3.Show();
}