#include <stdio.h>

int main()
{
    int notes[] = {1, 5, 10, 20, 100}, count = 0, temp, n;
    scanf("%d", &n);
    for(int i = 4; i >= 0; --i) {
        temp = n / notes[i];
        count += temp;
        n -= (notes[i] * temp);
    }
    printf("%d\n", count);
    return 0;
}
