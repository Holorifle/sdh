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
    printf("a,b,c�� �� �Է� : ");
    scanf("%d %d %d", &a, &b, &c);
    int result = sumExceptMultiples(a, b, c);
    printf("%d���� %d������ %d�� ����� ������ ��: %d\n", a, b, c, result);
    return 0;
}
