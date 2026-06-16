void minha_func();
int cont;
int main(){
	int i;
	for(i=0;i<10;i++){
		cont=i*2;
		minha_func();
	}
	return 0;
}

void minha_func(){
	printf("cont=%d\n", cont);
}
