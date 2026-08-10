#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};
    printf("배열의 이름 : %p\n", arr);
    printf("첫번째 요소 : %p\n", &arr[0]);
    printf("두번째 요소 : %p\n", &arr[1]);
    printf("세번째 요소 : %p\n", &arr[2]);
    printf("arr의 크기 : %d\n", sizeof(arr));
    printf("arr[1] 값 %d, 주소 : %p\n", arr[1], &arr[1]);
    return 0;
}