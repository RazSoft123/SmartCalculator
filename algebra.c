#include "algebra.h"
#include "finder.h"
#include <string.h>

void sum(void)
{
    char cpystr[256];
    int tnum=0,num=0,add=0;
    strcpy(cpystr,str);
    strcat(cpystr,"Munna");
        while(endnum!=1)
        {
            tnum = FindNum(cpystr);
                if(endnum !=1)
                {
                    num = tnum;
                        add = add + num;
                }

                if(endnum == 1)
                {
                    printf("\n\n  Sum is :   %d",add);
                }
        }

        endnum = 0;
            main();
}

void sub(void)
{
    char cpystr[256];
    int tnum=0,num=0,sub=0,num1,num2;
    strcpy(cpystr,str);
    strcat(cpystr,"Munna");
        num1 = FindNum(cpystr);
        num2 = FindNum(cpystr);
            sub = num1 - num2;
        while(endnum!=1)
        {
            tnum = FindNum(cpystr);
                if(endnum !=1)
                {
                    num = tnum;
                        sub = sub - num;
                }

                if(endnum == 1)
                {
                    break;
                }
        }

        printf("\n Subtraction is equal to :  %d ",sub);

        endnum = 0;
            main();
}

void mult(void)
{
    char cpystr[256];
    int tnum=0,num=1,multi=1;
    strcpy(cpystr,str);
    strcat(cpystr,"Munna");
        while(endnum!=1)
        {
            tnum = FindNum(cpystr);
                if(endnum !=1)
                {
                    num = tnum;
                        multi = multi * num;
                }

                if(endnum == 1)
                {
                    printf("\n\n  Multiplication  is :   %d",multi);
                }
        }

        endnum = 0;
            main();
}

void divi(void)
{
      char cpystr[256];
    int tnum=0,num=0,division=0,num1,num2;
    strcpy(cpystr,str);
    strcat(cpystr,"Munna");
        num1 = FindNum(cpystr);
        num2 = FindNum(cpystr);
            division = num1/num2;
        while(endnum!=1)
        {
            tnum = FindNum(cpystr);
                if(endnum !=1)
                {
                    num = tnum;
                        division = division/num;
                }

                if(endnum == 1)
                {
                    break;
                }
        }

        printf("\n Division is equal to :  %d ",division);

        endnum = 0;
            main();
}


void fact(void)
{
    char cpystr[256];
    int tnum=0,num=1;
    long int ft=1;
    strcpy(cpystr,str);
    strcat(cpystr,"Munna");
        while(endnum!=1)
        {
            tnum = FindNum(cpystr);
                if(endnum !=1)
                {
                    num = tnum;
                        for(num;num>0;num--)
                            ft = ft * num;
                    printf("\n Factorial is : %ld ",ft);
                        ft = 1;
                }

                if(endnum == 1)
                {
                    break;
                }
        }

        endnum = 0;
            main();
}
