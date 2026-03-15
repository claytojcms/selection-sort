#include <stdio.h>
#include <stdlib.h>

static void print_array(const int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]");
}

static void swap_int(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int v[], int n, int ordem) {
if( !v || n<=1)
return;
int comparacoes=0;
int trocas=0;

for(int i=0; i<n-1;i++){
    int idx=i ;
for(int j=i ;j<n ;j++){
    if(ordem==1 && v[j] < v[idx]){
    comparacoes++;
    idx =j;
    }
    if(ordem== -1 && v[j]> v[idx]){
        comparacoes++;
        idx= j;
    }
}
     if (idx!=i){
         trocas++;
       swap_int(&v[i],&v[idx]);
}
}      printf("\ntrocas: %d comparacoes:%d\n",trocas,comparacoes);
}




int main(void) {
    // Casos pedidos
    int v_vazio[]      = {};                 // n = 0 (não use sizeof aqui)
    int v_um[]         = {7};
    int v_ordenado[]   = {1, 2, 3, 4, 5};
    int v_inverso[]    = {5, 4, 3, 2, 1};
    int v_repetidos[]  = {3, 1, 3, 2, 3};
    int n = 5;
    int ordem;
    printf("selecione a ordem\n1-crescente\n-1-decrescente");
    scanf("%d",&ordem);
    selectionSort(v_repetidos,n,ordem);
    print_array(v_repetidos,n);


    return 0;
}
