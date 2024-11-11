#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // Se não houve a troca de elementos
        if (!swapped)
            break;
    }
}
void imprimir(int a[]){
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}

void menu(){
    int op = 0, op1;
    int dados, a[TAM];
    while (op != 4)
    {
        printf("Selecione uma Opcao:\n");
        printf("1 - inserir no array:\n");
        printf("2 - Ordenar array:\n");
        printf ("3 - Imprimir\n");
        printf("4 - sair\n");
        scanf("%d", &op);
        if (op == 1){
            printf ("Limite == 10\n");
            for (int i = 0; i < TAM; i++)
            {
                scanf("%d", &dados);
                a[i] = dados;
            }
        }else if (op == 2)
        {
            printf("Escolha o Algoritimo:\n");
            printf("1 - Buble Sort\n");
            printf("2 - Sair\n");
            scanf("%d", &op1);
            switch (op1)
            {
            case 1:
                printf("Buble Sort\n");
                bubbleSort(a, TAM);
                break;
            case 2:
                break;
            default:
                break;
            }
        }else if( op == 3){
            imprimir(a);
        }

    }
    
}

int main(int argc, char const *argv[])
{

    menu();
    return 0;
}
