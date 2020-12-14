#include<stdio.h>

int main(){
       int i = 0;
       int array[100] = {0};
       int c = 0;
       do {
           scanf("%d", &array[i]);
           if (c % 9 == 0)
                c++;
           i++;
       } while( array[i-1] != 0);
        printf("9-el oszthatoak voltak: %d\n", c);
       
       return 0;
}
