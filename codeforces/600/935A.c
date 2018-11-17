#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n / 2; ++i) {
        if((n - i) % i == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
