#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i;
	scanf("%d", &num);       //scan length     	              
	char *str=(char *)malloc(num);   //dynamic memory allocation
	scanf("%s",str);

	//traverse till length-1 index
	for (i=0; i<num-1; i++) {

		//if consecutive 'H' are present in input => NO condition
		//free the memory and exit from main
		if (str[i]=='H' && str[i+1]=='H') {
			printf("NO");
			free(str);
			return 0;
		}

		//replace '.' grids by fences 'B'
		if (str[i]=='.') {
			str[i]='B';
		}
	}
	if (str[i]=='.') {     //change if '.' present at last pos
		str[i]='B';
	}

	printf("YES\n%s",str);
	free(str);
	return 0;
}
