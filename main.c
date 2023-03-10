//chuyen chuoi sang nhi phan
#include<stdio.h>
#include<string.h>
void converStringToBinary(char* arr)
{
    int i = 0;
    int b[10];                            // mang chua ma nhi phan
    while(i < strlen(arr))
    {
        int j=0;
        int temp = arr[i];
        if(arr[i] == ' ') printf("Space: ");
        else printf("%c: ",arr[i]);
        while(temp > 0)
        {
            b[j] = temp%2;
            j++;
            temp = temp/2;
        }
        for(int k = j-1 ; k >= 0; k--)
        {
            printf("%d",b[k]);
        }
        printf("\n");
        i++;
    }
}
int main()
{
    char arr[]="Hello World";
    converStringToBinary(arr);
    return 0;
}