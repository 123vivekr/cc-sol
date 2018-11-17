#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    int flag = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &temp);
        if(temp == 1)
            flag = 1;
    }
    if(flag == 0)
        printf("EASY\n");
    else
        printf("HARD\n");
    return 0;
}
