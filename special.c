#include<stdio.h>
int main()
{
char str[100];
int countdigits,countalphabet,countspecialchar,countspaces;
int counter;
countdigits=countalphabet=countspecialchar=countspaces=0;
printf("enter a string");
gets(str);
for(counter=0;str[counter]!=null;counter++)
{
if(str[counter]>='0'&&str[counter]<='9')
countdigits++;
else if((str[counter]>='a'&&str[counter]<='z')||(str[counter]>='a'&&str[counter]<='z'))
countalphabet++;
else if(str[counter]==' ')
countspaces++;
else
countspecialchar++;
}
printf("digits:%d\n alphabets:%d\nspaces:%d\nspecial characters:%d",countdigits,countalphabet,countspaces,countspecialchar);
return 0;
}
