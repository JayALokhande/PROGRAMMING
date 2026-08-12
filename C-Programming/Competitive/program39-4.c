#include<stdio.h>

void Display(char ch)
{
    if (ch > 'E')
    {
        return;
    }
    printf("%c\t",ch);
    Display(ch + 1);

}

int main()
{
    Display('A');

    return 0;
}