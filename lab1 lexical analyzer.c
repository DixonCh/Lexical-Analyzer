//Program to make a simple lexical analyzer of different operators in C

#include<stdio.h>
#include<conio.h>
int main()
{
    char string[5];
    
    printf("Enter any operator symbol:");
    gets(string);
    
    switch(string[0])
    {
        case'<':if(string[1]=='=')
        printf("Less than or equal to");
        else
            printf("less than");
        break;
            
        case'>':if(string[1]=='=')
        printf("greater than or equal to");
        else
            printf("greater than");
        break;
            
        case'=':if(string[1]=='=')
        printf("assign to");
        else
            printf("equal to");
        break;
            
        case'!':if(string[1]=='=')
        printf("not operator");
        else
            printf("not equal to");
        break;
            
        case'&':
        printf("and operator");
        break;
            
        case'%':
        printf("modulus operator");
        break;
            
        case'/':
        printf("division operator");
        break;
            
        case'+':
        printf("addition operator ");
        break;
            
        case'-':
        printf("subtraction operator");
        break;
            
        case'*':
        printf("multiplication  operator");
        break;

        default:
            printf("This symbol is undefined");
            
    }
    getch();
}
