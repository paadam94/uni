#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, os = 0;
  	printf("Irjon be valamit, megmondom hany o betu van benne\n");
    scanf("%s", str);
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'o'){
			os++;	
    }
	}	
    printf("Ennyi 'o' betu van benne: %d\n", os);
	
  	return 0;
}
