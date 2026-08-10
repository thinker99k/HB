#include <iostream>

int main(void){
    int row = 3;
    int col = 4;

    int** arr = (new (int*))[row];
    for(int i=0; i<row; i++){
        arr[i] = (new (int*))[col];
    }

}