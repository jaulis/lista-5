#include <stdio.h>

int CustoViagem(float comprimento,float distancia_pedagio,float custoKm,float custo_pedagio){
	
	float custo_km,res,i,custoP,CustoTotal;
	int NumP=0;
	
	custo_km = custoKm*comprimento;
	
	for (i=distancia_pedagio;i<=comprimento;i+=distancia_pedagio){
		
		res = comprimento-i;
		NumP++;
		
	}	
	custoP = NumP*custo_pedagio;
	
	CustoTotal = custoP+custo_km;
	
	return CustoTotal;
}


int main(){
	
	float DistP,Compri,CustoKM,CustoP,CustoTotal;
	
	printf("Digite o comprimento da estrada: ");
	scanf("%f",&Compri);
	
	printf("Digite a distancia entre cada pedagio: ");
	scanf("%f",&DistP);
	
	printf("Digite o custo por km: ");
	scanf("%f",&CustoKM);
	
	printf("Digite o custo do pedagio: ");
	scanf("%f",&CustoP);
	
	CustoTotal = CustoViagem(Compri,DistP,CustoKM,CustoP);
	
	printf("O custo total da viagem eh de: %.2f",CustoTotal);
	
	return 0;
}