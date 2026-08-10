#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void){
    int arr[5];

    time_t t;
    time(&t);
    srand(t);

    for(int i=0; i<5; i++){
        arr[i] = rand() % 100;
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
}