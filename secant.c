#include<stdio.h>
#define E 0.001
#include<math.h>
  
double fun(double x){
	return x*x - 4*x -10;
}

int i = 0;
double xm;

double secant(double x1, double x2){
 while(i<10)
   {
 
 	
 	xm =(x1 - (fun(x1)*(x2 - x1)) / (fun(x2)-fun(x1)));
 	
 //	if(fun(xm)*fun(x1)>0){
			x1 = x2;
			
	//	}
	//	else{
		     x2=xm;
	//	}
 	
 	if((xm-x1) >= E){
 		
 		break;
	 }
 	
 	 i++;
 	 
 	  printf("iteration %d \t value of xm %lf\n", i,xm );
    }
    printf("\n \n-----nroot is at %lf----",xm);
    
}



 


int main(){
	
	double x1 = -2;
	double x2= -1;
	secant(x1,x2);
}
