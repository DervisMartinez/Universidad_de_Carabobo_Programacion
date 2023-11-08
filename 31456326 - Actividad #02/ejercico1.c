#include <stdio.h>

int main(){

    int n, m ,nexterm ;

    n = 0 ;
    m = 1 ;

    printf("%d\n",n);
    printf("%d\n",m);

    for(n = 1 ; n <= 34 ; n++){
        printf("%d\n",n);
        nexterm = n + m ;
        n = m ;
        m = nexterm;
    }

    return 0 ; 
}