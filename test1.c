#include <stdio.h>

int sumExceptMultiples(int a, int b, int c)
{
    int sum = 0;
    for (int i = a; i <= b; i++) 
    {
        if (i % c != 0) 
        {
            sum += i;
        }
    }
    return sum;
}

int main() 
{
    int a, b, c;
    printf("a,b,c의 값 입력 : ");
    scanf("%d %d %d", &a, &b, &c);
    int result = sumExceptMultiples(a, b, c);
    printf("%d부터 %d까지의 %d의 배수를 제외한 합: %d\n", a, b, c, result);
    return 0;
}
