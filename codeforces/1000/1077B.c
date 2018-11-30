#include <stdio.h>

int is_disturbed(int a[], int i, int n)
{
    if(i == 0 || i == n-1)
        return 0;
    else if(a[i] == 0 && a[i-1] == 1 && a[i+1] == 1)
        return 1;   //disturbed
    else
        return 0;
}

int calculate_disturbed(int disturbed[], int a[], int n)
{
    int total_disturbed = 0;
    disturbed[0] = disturbed[n-1] = 0;
    for(int i = 1; i < n-1; ++i) {
        if(is_disturbed(a, i, n)) {
            total_disturbed++;
            disturbed[i] = 1;
        } else {
            disturbed[i] = 0;
        }
    }
    return total_disturbed;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    int total_disturbed = 0;
    int disturbed[n];
    int count = 0;
    do {
        total_disturbed = calculate_disturbed(disturbed, a, n);
        for(int i = n-2; i > 0; --i) {
            if(disturbed[i] == 1) {
                total_disturbed--;
                a[i-1] = 0;
                count++;
                break;
            }
        }
    } while(total_disturbed != 0);
    printf("%d\n", count);
    return 0;
}
