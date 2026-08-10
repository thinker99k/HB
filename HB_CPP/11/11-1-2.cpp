#include <iostream>
#include <cstdio>

using namespace std;

class Book {
private:
    char *title;
    char *isbn;
    int price;
public:
    // 생성자
    Book(const char *t, const char *i, int p)
            : price(p) { // 3. price

        // 1. title
        title = new char[strlen(t)];
        strcpy(title, t);

        // 2. price
        isbn = new char[strlen(i)];
        strcpy(isbn, i);
    }

    // 복사 생성자
    Book(const Book &ref)
            : price(ref.price) { // 3. price
        cout << "Book 복사 생성자" << endl;

        // 1. title
        title = new char[strlen(ref.title) + 1];
        strcpy(title, ref.title);

        // 2. isbn
        isbn = new char[strlen(ref.isbn) + 1];
        strcpy(isbn, ref.isbn);
    }

    // 대입 연산자
    Book &operator=(const Book &ref) {
        cout << "Book 대입 연산자" << endl;

        // 1. title
        delete[] title;
        title = new char[strlen(ref.title) + 1];
        strcpy(title, ref.title);

        // 2. price
        delete[] isbn;
        isbn = new char[strlen(ref.isbn) + 1];
        strcpy(isbn, ref.isbn);

        // 3. price
        price = ref.price;
        return *this;
    }

    void ShowBookInfo() const {
        cout << "Title : " << title << endl;
        cout << "ISBN  : " << isbn << endl;
        cout << "Price : " << price << endl;
    }

    ~Book() {
        printf("** %s", title);
        delete title;
        delete isbn;
        printf(" title, isbn deleted **\n\n");
    }
};

class EBook : public Book {
private:
    char *DRM;
public:
    // 생성자
    EBook(const char *t, const char *i, int p, const char *d)
            : Book(t, i, p) { // 1, 2, 3: Book

        // 4. DRM
        DRM = new char[strlen(d)];
        strcpy(DRM, d);
    }
    // 복사 생성자
    EBook(const EBook &ref)
    : Book(ref) { // 1, 2, 3: Book, ** class 레벨 상관 없음 **
        cout << "EBook 복사 생성자" << endl;

        // 4. DRM
        DRM = new char[strlen(ref.DRM)+1];
        strcpy(DRM, ref.DRM);
    }

    // 대입 연산자
    EBook &operator=(const EBook &ref){
        cout << "EBook 대입 연산자" << endl;

        // 1, 2, 3: Book, ** class 레벨 상관 없음 **
        Book::operator=(ref);

        // 4. DRM
        delete DRM;
        DRM = new char[strlen(ref.DRM)+1];
        strcpy(DRM, ref.DRM);

        return *this;
    }

    void ShowEBookInfo() const {
        ShowBookInfo();
        cout << "DRM   : " << DRM << endl;
    }

    ~EBook() {
        printf("** %s", DRM);
        delete DRM;
        printf(" drm deleted **\n");
    }
};


int main(void) {
    Book niceBook("Effective Modern C++", "111-22222-333-0", 50000);
    EBook niceEBook("Effective Modern C++ (EBook)", "111-2222-333-1", 20000, "q987t1ggxc789");

    Book niceBookcpy1 = niceBook; // 복사 생성자
    Book niceBookcpy2("null", "null", 0); // 대입 연산자
    niceBookcpy2 = niceBook;

    EBook niceEBookcpy1 = niceEBook;
    EBook niceEBookcpy2("null", "null", 0, "null");
    niceEBookcpy2 = niceEBook;

    cout << "niceBookcpy1\n";
    niceBookcpy1.ShowBookInfo();
    cout << "niceBookcpy2\n";
    niceBookcpy2.ShowBookInfo();

    cout << "niceEBookcpy1\n";
    niceEBookcpy1.ShowEBookInfo();
    cout << "niceEBookcpy2\n";
    niceEBookcpy2.ShowEBookInfo();
}