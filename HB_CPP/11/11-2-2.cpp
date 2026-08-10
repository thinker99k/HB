#include <iostream>
#include <cstdlib>

using namespace std;

class BoundCheckIntArray {
private:
    int *arr;
    int arrlen;

    BoundCheckIntArray(const BoundCheckIntArray &arr) {}

    BoundCheckIntArray &operator=(const BoundCheckIntArray &arr) {}

public:
    BoundCheckIntArray(int len) : arrlen(len) {
        arr = new int[len];
    }

    int &operator[](int idx) {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[idx];
    }

    int operator[](int idx) const {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[idx];
    }

    int GetCol() const {
        return arrlen;
    }

    ~BoundCheckIntArray() {
        delete[]arr;
    }
};


typedef BoundCheckIntArray *BoundCheckIntArrayPtr;

class BoundCheck2DIntArray {
private:
    BoundCheckIntArray **arr;
    int arrlen;

    BoundCheck2DIntArray(const BoundCheckIntArray &arr) {}

    BoundCheck2DIntArray &operator=(const BoundCheckIntArray &arr) {}

public:
    BoundCheck2DIntArray(int r, int c)
            : arrlen(r) {
        arr = new BoundCheckIntArrayPtr[c];

        for (int i = 0; i < r; i++) {
            arr[i] = new BoundCheckIntArray(c);
        }
    }

    BoundCheckIntArray &operator[](int idx) {
        if (idx < 0 || idx > arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return *(arr[idx]);
    }

    int GetRow() const {
        return arrlen;
    }

    ~BoundCheck2DIntArray() {
        for(int i=0; i<arrlen; i++){
            delete arr[i];
        }
        delete[] arr;
    }
};




int main(void) {
    int r = 3;
    int c = 4;
    BoundCheck2DIntArray arr(r, c);

    int count = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr[i][j] = (count+1)*(count+1);
            ++count;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
