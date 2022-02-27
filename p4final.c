#include <stdio.h>
int input()
{
    int n;
    printf("enter the Nth number\n");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n)
{
    int a = 0, b = 1, temp;
    for (int i = 3; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return temp;
}
void output(int n, int fibo)
{
    printf("The fibonacci number at %d position is %d\n", n, fibo);
}
int main()
{
    int n, fibo;
    n = input();
    fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
