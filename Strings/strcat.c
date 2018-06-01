#include<stdio.h>

char *my_strcat(char *dest, const char *src){
	char *p = dest;
	while(*p!= '\0'){
		p++;
	}

	const char *q = src;
	while(*q!='\0'){
		*p=*q;
		p++;
		q++;
	}
	*p='\0';
	return dest;
}

int main (void){
	char dest [] ="Bon";
	const char src [] ="jour";
	char *n = my_strcat(dest,src);
	printf("Concaténation : %s",n);
}
