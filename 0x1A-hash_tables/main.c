#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void isPalindrome(int x)
{
    int array[50];
    unsigned long int i = 1, j = 1, index = 0;
    while (x % j != x)
        j *= 10;
    j /= 10;
    while (i < j)
    {
        array[index] = (int)(x % i) / i;
        i *= 10;
    }
    for (index = 0; array[index]; index++)
        printf("%d\n", array[index]);

}
void main()
{
    int num = 10256565;
    isPalindrome(num);
    printf("hadsalfkj;kkk;k;k;k;k;k;k;k;k;k;k;j;\n");
}
