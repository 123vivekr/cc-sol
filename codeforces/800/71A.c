#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n][100];
    for(int i = 0; i < n; ++i) {
        scanf("%s", s[i]);
        int size = strlen(s[i]);
        if(size > 10) {
            char first_chara = s[i][0];
            char last_chara = s[i][size - 1];
            int no = size - 2;
            sprintf(s[i], "%c%d%c", first_chara, no, last_chara);
        }
    }
    for(int i = 0; i < n; ++i)
        printf("%s\n", s[i]);
    return 0;
}
