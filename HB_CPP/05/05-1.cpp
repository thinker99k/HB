#include <iostream>
#include <cstring>

#define TLEN 15

using namespace std;

namespace avicii{
    enum level {
        CLERK, SENIOR, ASSIST, MANAGER
    };

    const char *levelstr[4] = {"Clerk", "Senior", "Assist", "Manager"};
}


class nameCard {
private:
    char *pName;
    char *cName;
    char *telNo;
    int level;
public:
    nameCard(const char *p, const char *c, const char *t, int l)
            : level(l) {
        int plen = strlen(p) + 1;
        int clen = strlen(c) + 1;

        pName = new char[plen];
        cName = new char[clen];
        telNo = new char[TLEN];

        strcpy(pName, p);
        strcpy(cName, c);
        strcpy(telNo, t);
    }

    nameCard(nameCard& nc)
        : level(nc.level) {
        pName = new char[strlen(nc.pName)+1];
        cName = new char[strlen(nc.cName)+1];
        telNo = new char[TLEN];

        strcpy(pName, nc.pName);
        strcpy(cName, nc.cName);
        strcpy(telNo, nc.telNo);
    }

    void Show() {
        cout << "Name: " << pName << endl;
        cout << "Company: " << cName << endl;
        cout << "Tel: " << telNo << endl;
        cout << "Level: " << avicii::levelstr[level] << endl;
    }

    ~nameCard() {
        delete[] pName;
        delete[] cName;
        delete[] telNo;
        cout << "deleted" << endl;
    }
};

int main() {
    nameCard manClerk("Lee", "ABCEng", "010-1111-2222", avicii::CLERK);
    nameCard copy1 = manClerk;

    nameCard manSenior("Hong", "OrangeEng", "010-3333-4444", avicii::SENIOR);
    nameCard copy2 = manSenior;

    copy1.Show();
    copy2.Show();

    return 0;
}