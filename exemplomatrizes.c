#include <stdio.h>
 
int main() {
   int index;
    char * alunos [3][3]= {

        {"aluno 0 ","Pt: 30","Mat: 90"},
        {"aluno 1", "Pt:60", "Mat:60"},
        {"aluno 2","Pt: 90","Mat: 30"}   };
    

        printf("Digite o nome do aluno que queira ver as notas\n");
        printf("Para aluno 0, digite 0\n");
        printf("Para aluno 1, digite 1\n");
        printf("Para aluno 2, digite 2\n");
        scanf("%d", &index);

        printf("As notas do %s são: %s, %s.\n", alunos[index][0], alunos[index][1], alunos[index][2]);
        
        
        
        
        
        return 0;
}