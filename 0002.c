#include<stdio.h>
#include<math.h>

void bmi(int);

int main(){
	int np;
	printf("Input number of people : "); scanf("%d",&np); printf("\n");
	bmi(np);
	
	return 0;
}
void bmi(int np){
	int i,w[np],h[np];
	for(i = 1; i <= np; i++){
		printf("Input Weight [%d] : ", i); scanf("%d",&w[i]);
		printf("Input Hight [%d]  : ", i); scanf("%d",&h[i]);
		printf("\n");
	}
	
	//calculate
	
	for(i = 1; i<=np; i++){
		printf("BMI[%d] = %03.4f\n", i, (w[i]/pow(h[i]/100.0,2)));
	}
}
