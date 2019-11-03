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
   int a;
    int b;

    printf("Digite o primeiro numero: \n" );
    scanf("%d", &a);

    printf("Digite o segundo numero: \n" );
    scanf("%d", &b);
    printf("%d - %d = %d\n", a, b, a -b); 
    menu();
}

void divide()
{ 
    //todo
    system ("pause");
    system("cls");
    menu();
}

void multiplica()
{ 
    int a;
    int b;
    int multiplicacao;

    printf("Digite o primeiro numero: \n" );
    scanf("%d", &a);

    printf("Digite o segundo numero: \n" );
    scanf("%d", &b); 

    multiplicacao=A*B;
    printf( "O valor total: %d\n", multiplicacao);

    menu();
    system ("pause");
    system("cls");
    
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