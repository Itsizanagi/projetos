#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *v = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++){
        v[i] = i;
    }
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
    
// valores muito grandes nao podem ser alocados, ''SO limita o que pode ser alocado na pilha 
// Este limite nao existe para o heap( com exceçãp dp limite da memoria do computador)
    return 0;
}