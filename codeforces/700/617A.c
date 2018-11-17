#include <stdio.h>

int main()
{
    int x, steps[] = {5, 4, 3, 2, 1}, count = 0, temp;
    scanf("%d", &x);
    for(int i = 0; i < 5 && x > 0; ++i) {
        temp = x / steps[i];
        count += temp;
        x = x - (temp * steps[i]);
    }
    printf("%d", count);
    return 0;
}
