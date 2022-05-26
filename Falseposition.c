#include<stdio.h>
#include<conio.h>
#define EPISILON 0.001


double fun(double x)
{
	return x*x*x + x - 1;
}


double falseposition(double x1, double x2)
{
	if(fun(x1)*fun(x2) >= 0){
		printf("your guss ar invalid");
		return;
	}
	int i = 0;
	double xm=x1;
	while(i<=20){
		
	    xm =(x1 - (fun(x1)*(x2 - x1)) / (fun(x2)-fun(x1)));
	    printf("\n middle = %.4f", xm);
		if(fun(xm)*fun(x1)<0){
			x2 = xm;
			
		}
		else{
			x1=xm;
		}
		i++;
		
		
	}
	
	printf("\nroot fond at %.4f", xm);
	
	
}




int main(){
	
	
	double x1 = 0;
	double x2 = 1;
	
	falseposition(x1, x2);
}
