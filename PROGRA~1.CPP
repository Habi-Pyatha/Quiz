#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{ FILE *fp;char ch[200];
fp=fopen("testroun.dat","a+");
if(fp==NULL)
{printf("error");
//goto end;
}
start:
clrscr();
 for(int i=1;i<=7;i++) //i<=6 for KBC .....i<=7 for testround
{gets(ch);
fputs(ch,fp);
//fprintf(fp,"%s",ch);
fprintf(fp,"\n");
}
cout<<"continue";
char yes;
cin>>yes;
if(yes == '1')
goto start;
else
goto end;
end:
getch();
fclose(fp);
}