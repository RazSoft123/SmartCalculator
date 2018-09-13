#include "algebra.h"
#include "finder.h"
#include <string.h>


void FindMacro(char *ch)
{
        if(strstr(ch,"add")||(strstr(ch,"sum")))
            sum();
        else if(strstr(ch,"sub")||strstr(ch,"subtract")||strstr(ch,"minus"))
            sub();
        else if(strstr(ch,"mult")||(strstr(ch,"multiply"))||(strstr(ch,"multiplication"))||(strstr(ch,"multi")))
            mult();
        else if(strstr(ch,"divi")||(strstr(ch,"divide"))||(strstr(ch,"division"))||strstr(ch,"bhag"))
            divi();
        else if(strstr(ch,"fact")||(strstr(ch,"factorial"))||(strstr(ch,"factoreal")))
            fact();
        else
        {
            printf("\n I can't Understand it please input it again :  ");
                main();
        }
}

int FindNum(char *letter)
{
    int num=0,disit=0,sd=0,ed=0;  // sd stands for start Digit and ed for End Digit
    while(*letter !='\0')
        {
            if(*letter==48)
            {
                disit = 0;
                    sd = 1;
                num = num*10 + disit;
            }else if(*letter==49)
            {
                disit = 1;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==50)
            {
                disit = 2;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==51)
            {
                disit = 3;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==52)
            {
                disit = 4;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==53)
            {
                disit = 5;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==54)
            {
                disit = 6;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==55)
            {
                disit = 7;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==56)
            {
                disit = 8;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(*letter==57)
            {
                disit = 9;
                    sd = 1;
                num = num*10 + disit;
            }
            else if(sd==1&&(*letter <=49 || *letter >=57))
            {
                    ed = 1;
            }
                if(sd==1&&ed==1)
                    return num;
                *letter = '#';

        letter++;
        }
        endnum = 1;
            return ;

}
