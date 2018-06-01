#include <stdio.h>

int my_strlen(const char *str){
	int y=0;
	for(const char *p = str; *p!= '\0'; p++){
	y++;
	}
	return y;
}
int main (void){
	char str[]="Bonjour";
	int res;
	res=my_strlen(str);
	printf("Taille :%d", res);

}
