#include <stdio.h> 
#include <stdlib.h>

void soma()
{ 
    int A;
    int B;
    int soma;

    printf( "Escreva o primeiro numero: \n");
    scanf("%d",&A);
    printf (" Escreva o segundo numero: \n");
    scanf("%d", &B);
    soma=A+B;
    printf( "O valor total: %d\n", soma);

    system ("pause"); 
    system("cls"); 
    menu();  
}

void subtrai()
{
    int a, b, c;

   scanf("%d", &a);
   scanf("%d", &b);
   c = a - b;
   printf("%d\n", c);
}

void divide()
{ 
    int A;
    int B;
    int C;

    printf( "Escreva o primeiro numero: \n");
    scanf("%d",&A);
    printf (" Escreva o segundo numero: \n");
    scanf("%d", &B);
    C=A/B;
    printf( "O valor total: %d\n", Divisao);
}

void multiplica()
{ 
    int A;
    int B;
    int C;

    printf( "Escreva o primeiro numero: \n");
    scanf("%d",&A);
    printf (" Escreva o segundo numero: \n");
    scanf("%d", &B);
    C=A*B;
    printf( "O valor total: %d\n", C);

    system ("pause");
    system("cls");
    menu();
}

void menu()
{ 
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}