#include <stdio.h>
int main()
{
    int i=0,b=0;char s[55]={'0'},blackdata[5],blackcolor[5],whitedata[5],whitecolor[5],m;
    do
    {scanf("%c",&s[i]);
    i++;
	}while(s[i-1]!='\n');
	i=8;
	do
	{blackdata[b]=s[i];
	if(blackdata[b]=='A')
	blackdata[b]='Z';
	if(blackdata[b]=='T')
	blackdata[b]='B';
	b++;
	i=i+3;
	}while(s[i+2]!='h');
	b=0;
    i=9;
	do
	{blackcolor[b]=s[i];
	b++;
	i=i+3;
	}while(s[i+1]!='h');
		b=0;i=32;
	do
	{whitedata[b]=s[i];
	if(whitedata[b]=='A')
	whitedata[b]='Z';
	if(whitedata[b]=='T')
	whitedata[b]='B';
	b++;
	i=i+3;
	}while(s[i+1]!=0);

    i=33;
	b=0; 
	do
	{whitecolor[b]=s[i];
	b++;
	i=i+3;
	}while(s[i]!=0); //以上完成输入；把TJKA 华为BJKZ 而进行AScall码的比大小；
			
    return 0;}
		
