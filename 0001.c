#include<stdio.h>
#include<math.h>

main(){
	int a,b,c,z;
	scanf("%d%d%d",&a,&b,&c);
	z = (a+b+c);
		if     (z>=0 && z<=49)   printf("F\n");
		else if(z>=50 && z<=54)  printf("D\n");
		else if(z>=55 && z<=59)  printf("D+\n");
		else if(z>=60 && z<=64)  printf("C\n");
		else if(z>=65 && z<=69)  printf("C+\n");
		else if(z>=70 && z<=74)  printf("B\n");
		else if(z>=75 && z<=79)  printf("B+\n");
		else if(z>=80 && z<=100) printf("A\n");
		return 0;
}
