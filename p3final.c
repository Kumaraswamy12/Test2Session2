#include <stdio.h>
int input_number()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    return a;
}
int is_prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 1;
    return 0;
}
void output(int n, int is_prime)
{
    if (is_prime == 1)
        printf("%d is a composite number\n", n);
    else
        printf("%d is a prime number\n", n);
}
int main()
{
    int n, c;
    n = input_number();
    c = is_prime(n);
    output(n, c);
    return 0;
}

