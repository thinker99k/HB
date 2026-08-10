#include <stdio.h>

int main(void)
{
    int i, length = 0;
    char arr[100];
    char arrreverse[100];

    printf("input word : ");
    scanf("%s", arr);
    
    for( i = 0 ; arr[i]!=0 ; i++ )
        length++;
//    printf("영단어의 길이는 %d\n", length);
    arrreverse[length] = arr[length]; // \0 유지

    for( i = 0 ; i<length ; i++ )
        arrreverse[length-1-i] = arr[i];
    
    for( i = 0 ; i<length ; i++ )
        printf("%c", arrreverse[i]);
}