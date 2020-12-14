#include<stdio.h>

void main(){
    int a;
    do
        scanf("%d", &a);
    while (a<100 || a>999);
    printf("%d",a);
}
