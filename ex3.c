#include <stdio.h>

int fat(int fatora){
	
	int i, res=1;
	
	for(i=1;i<=fatora;i++){
		
		res = res*i;
		
	}
	
	return res;
	
}


int main(){
	
	int res,fatora;
	
	printf("escreva um numero para a opera��o fatorial:");	
	scanf("%d",&fatora);
	
	res = fat(fatora);
	
	printf("res = %d",res);
	
}
