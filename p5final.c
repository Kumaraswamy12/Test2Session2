#include <stdio.h>
int input_array_size()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    return n;
}
void init_array(int n, int a[n])
{
    for (int i = 0; i < n - 1; i++)
        a[i] = i + 2;
}
void erotosthenes_sieve(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            for (int j = 2 * a[i] - 2; j < n; j += a[i])
                a[j] = 0;
    }
}
void out_put(int n, int a[n])
{
    printf("the prime numbers upto %d:", n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != 0)
            printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    n = input_array_size();
    int a[n];
    init_array(n, a);
    erotosthenes_sieve(n, a);
    out_put(n, a);
    return 0;
}
