#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int len){
    T sum = 0;
    
    for(int i=0; i<len; i++){
        sum += arr[i];
    }
    
    return sum;
}

int main(){
    int arr1[5] = {3, 4, 5, 6, 7};
    int sum1 = SumArray(arr1, sizeof(arr1)/sizeof(int));
    cout << sum1 << endl;
    
    long double arr2[5] = {1.1, 2.3, 3.5, 4.7, 5.9};
    long double sum2 = SumArray(arr2, sizeof(arr2)/sizeof(long double));
    cout << sum2 << endl;
    
    return 0;
}