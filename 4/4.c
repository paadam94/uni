#include<stdio.h>
int main(){
int point;
printf("point=");
scanf("%d", &point);

switch(point){
    case 1: printf("Failed\n"); 
    break;
    case 2: printf("Grade is 2!\n");
    break;
    case 3: printf("Grade is 3!\n");
    break;
    case 4: printf("Grade is 4!\n");
    break;
    case 5: printf("Grade is 5!\n");
    break;
    default: printf("Default value!");
}
return 0;
}
