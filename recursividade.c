#include <stdio.h>
 
void recursiva(int numero){
    if(numero >0) {
        printf("%d\n", numero);
        recursiva (numero -1);
    }

}

int main() {
    int quantidade=10;

        printf("contagem regressiva...");
    recursiva(quantidade);



   
    return 0;
}