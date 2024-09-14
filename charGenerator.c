#include <stdio.h>
#include <stdbool.h>

int menu();
void printPlus(int x);
void printLess(int x);

int main()
{
    int n, opt;
    bool stop = false;
    while(!stop)
    {
        opt = menu();
        if(opt == 3)
        {
            stop = true;
        }
        else if(opt == 1)
        {
            printf("Number of +: ");
            scanf("%d",&n);
            printPlus(n);
        }
        else
        {
            printf("Number of -: ");
            scanf("%d",&n);
            printLess(n);
        }
    }
    return 0;
}

int menu()
{
    int opt;
    printf("\nBrainfuck printer\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. Quit");
    printf("\nOption: ");
    scanf("%d",&opt);
    return opt;
}

void printPlus(int x)
{
    int i = 0;
    while(i < x)
    {
        printf("+");
        i++;
    }
}

void printLess(int x)
{
    int i = 0;
    while(i < x)
    {
        printf("-");
        i++;
    }
}