#include <stdio.h>

int main(void)
{
    int i, length;
    char max = 0; // 65-90(A), 97-122(a), 뭔짓을 해도 영어아스키보다 값 작음
    char arr[100];

    printf("input word : ");
    scanf("%s", arr);

    for( i = 0 ; arr[i]!=0 ; i++ )
        length++;
    for( i = 0 ; i < length ; i++ )
        if(arr[i]>max)
            max = arr[i];
    printf("입력한 단어에서 가장 큰 문자 : %c\n이의 아스키코드값 : %d", max, max);
}