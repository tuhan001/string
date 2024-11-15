#include<stdio.h>
#include<string.h>

int revese_string(char s[],int a, int b)

{
    char temp;
    while(a<b)
    {
        temp=s[a];
        s[a]=s[b];
        s[b]=temp;
        a++;
        b--;
    }

}
int main()
{

    char s[100];
    printf("Ënter the line/word of string: ");
    gets(s);
    int a,b;
    a=0;
    b=0;
    while(s[b])
    {
        for(a=b;s[a]&&s[a]!=' ';a++);
        revese_string(sa,b-1);
        a=b+1

    }
    printf("The reverse word: %s",s);
    return 0;
}

