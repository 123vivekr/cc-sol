#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp, q[n];
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &temp);
        q[temp - 1] = i;
    }
    for(int i = 0; i < n; ++i) {
        printf("%d ", q[i]);
    }
    return 0;
}


/*
 *  pi gave a gift to i
 *  ith friend should have given a gift to i
 *
 *  2 -> 1
 *  3 -> 2
 *  4 -> 3
 *  1 -> 4
 *
 */
