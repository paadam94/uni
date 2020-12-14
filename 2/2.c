#include<stdio.h>

int main(){
    int n, c = 0;
    printf("adja meg a sorozat utolso elemet\n");
    scanf("%d", &n);
    for( int i = 1; i <= n; i++){
        if( i == 1)
            c += i;
        else if( i % 2 == 1)
            c += i;
    }
    printf("sum=%d\n", c);

    return 0;
}

