#include <iostream>
#include <cstdio>

using namespace std;

class Book {
private:
    char *title;
    char *isbn;
    int price;
public:
    Book(const char *t, const char *i, int p)
            : price(p) {
        title = new char[strlen(t)];
        isbn = new char[strlen(i)];

        strcpy(title, t);
        strcpy(isbn, i);
    }

    ~Book() {
        printf("** %s", title);
        delete title;
        delete isbn;
        printf(" title, isbn deleted **\n\n");
    }

    void ShowBookInfo() const {
        cout << "Title : " << title << endl;
        cout << "ISBN  : " << isbn << endl;
        cout << "Price : " << price << endl;
    }
};

class EBook : public Book {
private:
    char *DRM;
public:
    EBook(const char *t, const char *i, int p, const char *d)
            : Book(t, i, p) {
        DRM = new char[strlen(d)];

        strcpy(DRM, d);
    }

    ~EBook() {
        printf("** %s", DRM);
        delete DRM;
        printf(" drm deleted **\n");
    }

    void ShowEBookInfo() const {
        ShowBookInfo();
        cout << "DRM   : " << DRM << endl;
    }
};


int main(void) {
    Book niceBook("Effective Modern C++", "111-22222-333-0", 50000);
    EBook niceEBook("Effective Modern C++ (EBook)", "111-2222-333-1", 20000, "q987t1ggxc789");

    niceBook.ShowBookInfo();
    cout << endl;

    niceEBook.ShowEBookInfo();
    cout << endl;
}