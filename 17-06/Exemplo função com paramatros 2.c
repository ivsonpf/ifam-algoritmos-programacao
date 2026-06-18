#include <stdio.h>

int box (int a, int b, int c);

int main (){
	int v;
	v=box(2,3,4);
	printf("Volume= %d\n", v);
	v=box(3,4,5);
	printf("Volume= %d\n", v);
	return 0;
}

int box (int a, int b, int c){
	return a*b*c;
}

