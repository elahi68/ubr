#include<stdio.h>
int main()
{
union{
int i;
char ch[4];
};
//here there is an error saying undeclered i and ch
i=20;
printf("%d\n",i);
ch[0]='a';ch[1]='b';ch[2]='c';ch[3]='d';
printf("%s\n",ch);
}
