#include <stdio.h>

int main()
{
    int n, sf = 0, fs = 0;
    scanf("%d", &n);
    char p[n+1];
    scanf("%s", p);
    for(int i = 1; i < n; ++i) {
        if(p[i - 1] == 'S' && p[i] == 'F')
            sf++;
        if(p[i - 1] == 'F' && p[i] == 'S')
            fs++;
    }
    if(sf > fs)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
