#include<stdio.h>

int main(){
int a, k=1;
scanf("%d", &a);
while(a)
{
    k*=a%10;
    a/=10;
}
printf("%d", k);
}
