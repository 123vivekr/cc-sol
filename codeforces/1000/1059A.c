#include <stdio.h>

int main()
{
    int n, L, a;
    scanf("%d %d %d", &n, &L, &a);
    int t[n], l[n];
    for(int i = 0; i < n; ++i) {
        scanf("%d %d", &t[i], &l[i]);
    }
    // find space between serve. if
    // session += time_between%a
    int time_between = 0, sessions = 0;
    for(int i = 0; i < n; ++i) {
        if(i == 0)
            time_between = t[i] - 0;
        else
            time_between = t[i] - (t[i-1] + l[i-1]);
        sessions += time_between / a;
    }
    if(n > 0)
        time_between = L - (t[n - 1] + l[n - 1]);
    else
        time_between = L;
    sessions += time_between / a;
    printf("%d\n", sessions);
    return 0;
}
