//Create a full pyramid with C language
#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 10;
    for (i = 1; i<=n; ++i){
        for (k=n-i; k>0;--k){
            printf(" ");
        }
        for (j = 0; j<=(i-1)*2; ++j){
            printf("*");
        }
        printf("\n");
    }
}
