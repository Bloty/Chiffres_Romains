#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//declaration des constantes
#define MINI 1
#define MAX 3999
#define M 1000
#define CM 900
#define D 500
#define CD 400
#define C 100
#define XC 90
#define L 50
#define XL 40
#define X 10
#define IX 9
#define V 5
#define IV 4
#define I 1

void decimal_romain();
void romain_decimal();

int main()
{
    //Variable
    int menu=0;

    //Menu
    do{
        printf("*---CHIFFRES ROMAINS---*\n");
        printf("Tapez 1 pour decimal -> romains\n");
        printf("Tapez 2 pour romains -> decimal\n");
        printf("Tapez autre chose pour QUITTER\n");
        scanf("%d",&menu);


        if (menu==1)
        {
            printf("*---Decimal -> Romains---*\n\n");
            decimal_romain();
        }
        else
        {
            if (menu==2)
            {
                printf("*---Romains -> Decimal---*\n\n");
                romain_decimal();
            }
        }
        if ((menu==1) || (menu==2)){
            printf("Entrer 1 pour RECOMMENCER et autre chose pour QUITTER\n");
            scanf("%d",&menu);
        }
    }while (menu==1);

    return 0;
}


//****************************************************************************
//Description :Procédure qui convertie un entier entrer par l'utilisateur
//en chiffre romains.
//
//Entrées : Un entier entrer par l'utilisateur.
//
//Sorties : Le chiffre convertie en romains.
//
//****************************************************************************
void decimal_romain()
{
    //Variable
    int nDecimal=0, nNb=0;
    char cRomains[20];

    cRomains[0]=':';



    do
    {
        printf("Entrer un nombre\n");
        fflush(stdin);
        scanf("%d",&nDecimal);
        nNb=nDecimal;
    }while ((nDecimal < MINI) || (nDecimal > MAX));

    //Les millier
    while (nDecimal >= M)
    {
        strcat(cRomains, "M");
        nDecimal -= M;
    }
	//Les centaines
	if (nDecimal >= CM)//900
    {
        strcat(cRomains, "CM");
        nDecimal -= CM;
    }
    else
    {
       if (nDecimal >= D)//500
        {
            strcat(cRomains, "D");
            nDecimal -= D;
        }
        else
        {
           if (nDecimal >= CD)//400
            {
                strcat(cRomains, "CD");
                nDecimal -= CD;
            }
        }
    }

    while (nDecimal>=C)//100
    {
        strcat(cRomains, "C");
        nDecimal -= C;
    }

    //Les dizaines
	if (nDecimal >= XC)//90
    {
        strcat(cRomains, "XC");
        nDecimal -= XC;
    }
    else
    {
       if (nDecimal >= L)//50
        {
            strcat(cRomains, "L");
            nDecimal -= L;
        }
        else
        {
           if (nDecimal >= XL)//40
            {
                strcat(cRomains, "XL");
                nDecimal -= XL;
            }
        }
    }
    while (nDecimal>=X)//10
    {
        strcat(cRomains, "X");
        nDecimal -= X;
    }
     //Les unitées
	if (nDecimal >= IX)//9
    {
        strcat(cRomains, "IX");
        nDecimal -= IX;
    }
    else
    {
       if (nDecimal >= V)//5
        {
            strcat(cRomains, "V");
            nDecimal -= V;
        }
        else
        {
           if (nDecimal >= IV)//4
            {
                strcat(cRomains, "IV");
                nDecimal -= IV;
            }
        }
    }
    while (nDecimal>=I)//1
    {
        strcat(cRomains, "I");
        nDecimal -= I;
    }
    //affichage
    printf("%d convertie en chiffres romains %s\n",nNb,cRomains);
}


//****************************************************************************
//Description :Procédure qui convèrtie un chiffre romains entrer par
//l'utilisateur en chiffre entier
//
//Entrées :Un chiffre romains entrer par l'utilisateur
//
//Sorties :chiffre entier
//
//****************************************************************************
void romain_decimal()
{
    int nDecimal=0, nValTest1=0, nValTest2=0, nI=0;
    char cRomains[20], cTest1="vide", cTest2="vide";

    printf("Entrer un chiffre romains\n");
    scanf("%s",&cRomains);

    strcat(cRomains, "/");

    do
    {
        cTest1=cRomains[nI];
        cTest2=cRomains[nI+1];

        nValTest2=0;

        if (cTest1=='M' || cTest1=='m')//1000
        {
            nValTest1=M;
        }
        else
        {
            if (cTest1=='D' || cTest1=='d')//500
            {
            nValTest1=D;
            }
            else
            {
                if (cTest1=='C' || cTest1=='c')//100
                {
                    nValTest1=C;
                }
                else
                {
                    if (cTest1=='L' || cTest1=='l')//50
                    {
                        nValTest1=L;
                    }
                    else
                    {
                        if (cTest1=='X' || cTest1=='x')//10
                        {
                            nValTest1=X;
                        }
                        else
                        {
                            if (cTest1=='V' || cTest1=='v')//5
                            {
                                nValTest1=V;
                            }
                            else
                            {
                                if (cTest1=='I' || cTest1=='i')//1
                                {
                                    nValTest1=I;
                                }
                            }
                        }
                    }
                }
            }
        }

        if (cTest2=='M' || cTest2=='m')
        {
            nValTest2=M;
        }
        else
        {
            if (cTest2=='D' || cTest2=='d')
            {
            nValTest2=D;
            }
            else
            {
                if (cTest2=='C' || cTest2=='c')
                {
                    nValTest2=C;
                }
                else
                {
                    if (cTest2=='L' || cTest2=='l')
                    {
                        nValTest2=L;
                    }
                    else
                    {
                        if (cTest2=='X' || cTest2=='x')
                        {
                            nValTest2=X;
                        }
                        else
                        {
                            if (cTest2=='V' || cTest2=='v')
                            {
                                nValTest2=V;
                            }
                            else
                            {
                                if (cTest2=='I' || cTest2=='i')
                                {
                                    nValTest2=I;
                                }
                            }
                        }
                    }
                }
            }
        }

        if ((nValTest1 >= nValTest2) && (cTest1 != '/'))
        {
            nDecimal+=nValTest1;
            nI++;
        }
        else
        {
            if ((nValTest1 < nValTest2)&& (cTest1 != '/'))
            {
                nDecimal=nDecimal+(nValTest2-nValTest1);
                nI+=2;
            }
        }

        if (cTest1 == '/')
        {
            cTest2='/';
        }

    }while (cTest2 != '/');

    printf("Son chiffre decimal est : %d\n", nDecimal);

}
