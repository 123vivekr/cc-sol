#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos_i, pos_j, temp;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j){
            scanf("%d", &temp);
            if(temp == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }
    printf("%d\n", abs(2 - pos_i) + abs(2-pos_j));
    return 0;
}
