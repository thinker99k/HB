int main(void)
{
    int i;
    char arrange[]="Good time";
    printf("%d\n", sizeof(arrange));
    for( i = 0 ; i <= sizeof(arrange)/sizeof(char) ; i++ )
    {
        printf("%c", arrange[i]);
    }
}