#include<stdio.h>
 int main()
 {char str[30];
 int count,i=0;
    puts("enter your string");
    gets(str);
    puts(str);
while(str[i]!='\0')
{
    if(str[i]==' '){
        count++;
    }
    i++;
}
printf("%d",count);
}

