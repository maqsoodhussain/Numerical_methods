#include<stdio.h>
#define E 0.001


float fun(float x){
	return x*x*x - 4*x + 1;
}
  
float dfun(float x){
	return 3*x*x - 4;
 } 

void main(){
	int i=0;
	float x=0.2,x0;
	
	do{
		x0 = x-(fun(x)/dfun(x));
		x = x0;
		i++;
		printf("iterations = %d\t Root of equation = %f\t function = %f\n",i,x0,fun(x));
		
	  }while(fabs(fun(x)) > E);
	  
	  
}
