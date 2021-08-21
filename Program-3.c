#include <stdio.h>
#include<string.h>
int main() {
	char a[20], b[20], c[20];
	int i, j;
	printf("Enter the first string : ");
	scanf("%s", a);
	printf("Enter the second string : ");
	scanf("%s", b);
	for (i=0;i<strlen(a);i++)             // Complete the code in for
           { 
		c[i] =a[i] ;                                              //Complete the statement
	}
	for (j=0;j<strlen(b);j++ )                                                 // Complete the code in for
           { 
		c[i] = b[j];                                              //Complete the statement
		i++;
	}
	c[i]= b[j];                                               //Complete the statement
	printf("The concatenated string = %s", c);
	return 0;
}