#include <iostream>

using namespace std;

enum level {
    CLERK, SENIOR, ASSIST, MANAGER
};

char *levelstr[4] = {"Clerk", "Senior", "Assist", "Manager"};

class nameCard {
private:
    char *pName;
    char *cName;
    char *telNo;
    int level;
public:
    nameCard(char *p, char *c, char *t, int l) {
        int plen = strlen(p) + 1;
        int clen = strlen(c) + 1;
        int tlen = 15;

        pName = new char[plen];
        cName = new char[clen];
        telNo = new char[tlen];

        strcpy(pName, p);
        strcpy(cName, c);
        strcpy(telNo, t);
        level = l;
    }

    void Show(void) {
        cout << "Name: " << pName << endl;
        cout << "Company: " << cName << endl;
        cout << "Tel: " << telNo << endl;
        cout << "Level: " << levelstr[level] << endl;
    }

    ~nameCard() {
        delete []pName;
        delete []cName;
        delete []telNo;
        cout << "deleted" << endl;
    }
};


int main(void) {
    nameCard *person1 = new nameCard("Lee", "SoongsilUniv", "010-1234-5678", CLERK);

    person1->Show();

    delete person1;

    int * a const = 0x00;
}