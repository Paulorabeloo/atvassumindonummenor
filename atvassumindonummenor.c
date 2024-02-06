#include <stdio.h>
int main() {
    int a, b, c, menor;
    printf("Digite 3 numeros para mostrar o menor:\n");
    scanf("%i%i%i", &a, &b, &c);

    menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }
    printf("O menor numero é:\n%d", menor);
return 0;
}
