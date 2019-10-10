#include <stdio.h>

void piramedePascal(int vector[100],int n,int c);
int main() {
    int n,vector[0];
    vector[0]=1;
    printf("Ingresar el grado n:");
    scanf("%d",&n);
    piramedePascal(vector,n,0);
    return 0;
}
void piramedePascal(int vector[100],int n,int m){
    int aux[m+1];
    aux[0]=1;
    aux[m]=1;
    if(m<=n){

        for (int i = 1; i <m ; ++i) {
            aux[i]=vector[i-1]+vector[i];
        }
        for (int j = 0; j <=m ; ++j) {
            printf("[%i]",aux[j]);
        }
        m=m+1;
        printf("\n");
       piramedePascal(aux,n,m);
    }
}
