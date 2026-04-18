#include <stdio.h>
#include <stdlib.h>

int par(int num);
int primo(int num);
int  factorial(int num);
void tabla(int num);

int main()
{
    int num, op;
    do
    {
    printf("Menu\n1] Determinar si es par o impar\n2] Determinar si es numero primo o no\n3] Determinar el factorial\n4] Calcular la tabla de multiplicar de ese numero\n5] Salir\nSeleccione una opcion: ");
    scanf("%d", &op);

    switch(op)
    {

    case 1:
        {
        printf("\nIntroduzca el numero: ");
        scanf("%d", &num);
            if(par(num)==0)
                printf("\nEs par\n\n");
            else
                printf("\nEs impar\n\n");
            system("PAUSE");
            break;
        }
    case 2:
        {
        printf("\nIntroduzca el numero: ");
        scanf("%d", &num);
        if(primo(num)==0)
            printf("\nEs primo\n\n");
        else
            printf("\nNo es primo\n\n");
            system("PAUSE");
            break;
        }
    case 3:
        {
        printf("\nIntroduzca el numero: ");
        scanf("%d", &num);
            printf("\n%d\n\n", factorial(num));
            system("PAUSE");
            break;
        }
    case 4:
        {
        printf("\nIntroduzca el numero: ");
        scanf("%d", &num);
            tabla(num);
             system("PAUSE");
            break;
        }
    case 5:
        {
            break;
        }
    default:
        {
            printf("\nOpcion no valida\n\n");
            system("PAUSE");
        }
    }
    system("CLS");
    }
    while(op!=5);
}


int par(int num)
{
    if(num%2==0)
        {
        return 0;
        }
    else{
        return 1;
        }
}
int primo(int num)
{
        int b;
        for(int i=num;i>0;i--)
        {
            if(num%i==0)
            {
                b++;
            }
        }
        if(b==2)
        return 0;
        else
        return 1;
}
int factorial(int num)
    {
        int aux=1;
        for(int i=1;i<=num;i++)
        {
            aux*=i;
        }
        num=aux;
}
void tabla(int num)
{
        int aux;
        for(int i=1; i<=10; i++)
        {
            aux=num*i;
            printf("%d x %d = %d\n", num, i, aux);
        }
}
