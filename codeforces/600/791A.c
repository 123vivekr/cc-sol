#include <stdio.h>

int main()
{
    int limak, bob, count = 0;
    scanf("%d %d", &limak, &bob);
    while(bob >= limak) {
        count++;
        limak *= 3;
        bob *= 2;
    }
    printf("%d\n", count);
    return 0;
}
