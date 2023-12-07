#include <stdio.h>
int main(){

    float i,w,x,n;
    float expo,fact;
    double result;

    fact=1;
    expo=1;
    result=0;

    //pidiendo valores
    printf("\npara la formula: e^x=1+x+(x^2/2!)+...(x^n)/n!\n");
    printf("ingresa un x\n");
    scanf("%f",&x);
    printf("ingresa un n\n");
    scanf("%f",&n);

    for(i=0;i<=n;i++){
        for(w=0;w<=i;w++){
            expo=expo*x;
        }
        if(n>0){
            fact*=i;
        }
        result=result+((expo)/fact);
        expo=1;
    }
    result+=1;

    printf("e^x approximadamente es:%f\ncon el valor x:%f\ncon %f terminos\n",result,x,n);

    return 0;
}