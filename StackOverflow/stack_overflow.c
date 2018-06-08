#include <stdio.h>

int fonction( int n){

	if(n<=0){
		return(0);	
	}
		
	if(n>=1){
	return (1+fonction(n-1));
	}
		
}

int main (void){
	int res1;
	int res2;

	res1 =fonction(1000);
	res2 = fonction(1000000);

	printf("res1 = %d",res1);
	printf("res2 = %d",res2);
}
