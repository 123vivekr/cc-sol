#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char s[20];
    for(int i = 0; i < n; ++i) {
        scanf("%s", s);
        if(strcmp(s, "Tetrahedron") == 0)
            sum += 4;
        else if(strcmp(s, "Cube") == 0)
            sum += 6;
        else if(strcmp(s, "Octahedron") == 0)
            sum += 8;
        else if(strcmp(s, "Dodecahedron") == 0)
            sum += 12;
        else if(strcmp(s, "Icosahedron") == 0)
            sum += 20;
    }
    printf("%d\n", sum);
    return 0;
}
