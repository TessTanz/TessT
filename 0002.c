#include<stdio.h>

main(){
	int a,i;
	scanf("%d",&a);
	int max,min;
	
	if (a >= 1 && a <= 1000){
	int n[a];
	
	for(i = 0; i < a; i++){
	scanf("%d",&n[i]);
	if(i==0){
		max = n[0];
		min = n[0];
	}
		if(min>n[i]){
			min = n[i];
		}
		if(max<n[i]){
			max = n[i];
		}
	}
	}
	printf("%d\n%d",min,max);
	return 0;
}
