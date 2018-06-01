#include<stdio.h>

void print_hello(){
	int static i=0;
	i ++;
	printf("hello %d \n",i);
}

void main (){
	int i;
	for(i =0; i<10; i++){
	print_hello();
	}

}
