#include <stdio.h>
int main()
{
    int i=0,b=0,e=0,c=0,d=0;char s[55]={'0'},blackdata[5],blackcolor[5],whitedata[5],whitecolor[5],data1[5]={'0'},data2[5]={'0'},m;
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
	}while(s[i]!=0); //以上完成输入；把TJKA 化为BJKZ 而进行AScall码的比大小；

	for(b=0;b<=4;b++)
	for(i=0;i<=3;i++)
	{
	if(blackdata[i]<blackdata[i+1])
	{m=blackdata[i];blackdata[i]=blackdata[i+1];blackdata[i+1]=m;}
	}
	for(b=0;b<=4;b++)
	for(i=0;i<=3;i++)
	{
	if(whitedata[i]<whitedata[i+1])
	{m=whitedata[i];whitedata[i]=whitedata[i+1];whitedata[i+1]=m;}//按大小把blackdata和whitedata排序 大的在前 
	}
	int shun1=1,shun2=1;
	for(i=0;i<=3;i++)
	if(blackdata[i]-blackdata[i+1]!=1)
	{shun1=0;break;
	}
	for(i=0;i<=3;i++)
	if(whitedata[i]-whitedata[i+1]!=1)
	{shun2=0;break;
	}                      //判断是否为顺子 顺子的话shun1 shun2分别为1； 
	int dui1=0,dui2=0,dui12=0;m=blackdata[0];b=1;
    for(i=1;i<=4;i++)
    if(blackdata[i]!=m)
    {b++;m=blackdata[i];}
    char d11='0',d12='0';    //用d11,d12记录对子1，2的大小，五个一样>四个一样>三个一样>; 
    if(b==5) dui1=0;
    
    if(b==4) dui1=1;
    
    if(b==3) {
	if(blackdata[0]==blackdata[2]||blackdata[1]==blackdata[3]||blackdata[2]==blackdata[4]) 
    dui1=3;
	else dui1=2;}
	
    if(b==2) {if(blackdata[0]==blackdata[3]||blackdata[1]==blackdata[4]) dui1=4;else 
	dui1=3;
	}
	
    if(b==1) {dui1=5;dui1=blackdata[0];}              //dui1,dui2分别表示Black与White的最大对子数目 dui12表示是否为3+2类型 
    
    if(dui1==0) for(d=0;d<=4;d++) {
   data1[e]=blackdata[d];e++;}
	
    if (dui1==1) {
	for(i=0;i<=3;i++) 
    if(blackdata[i]==blackdata[i+1]){d11=blackdata[i];break;}
    for(d=0;d<=4;d++){if(d==i||d==i+1) continue;else {
   data1[e]=blackdata[d];e++;}
	}}
	
	if(dui1==2) {for(i=0;i<=4;i++) if(blackdata[i]==blackdata[i+1]){d11=blackdata[i];break;}
	for(c=i;c<=4;c++) if(blackdata[c]==blackdata[c+1]){d12=blackdata[c];break;}
	for(d=0;d<=4;d++)
	{if(d==i||d==i+1||d==c||d==c+1) continue;
	else {
   data1[0]=blackdata[d];}}}
   
   if(dui1==3) {for(i=0;i<=4;i++) if(blackdata[i]==blackdata[i+2]){d11=blackdata[i];break;}
   	for(d=0;d<=4;d++)
	{if(d==i||d==i+1||d==i+2) continue;
	else {
   data1[e]=blackdata[d];e++;}}
   if(data1[0]==data1[1]) {dui12=1;d12=data1[0];
   }}
   
   if(dui1==4) {for(i=0;i<=4;i++) if(blackdata[i]==blackdata[i+1]){d11=blackdata[i];break;}
	for(d=0;d<=4;d++)
	{if(d==i||d==i+1) continue;
	else {
   data1[e]=blackdata[d];e++;}}}
   
   if(dui1==5) d11=blackdata[0];
   
   int dui22=0;m=whitedata[0];b=1;
    for(i=1;i<=4;i++)
    if(whitedata[i]!=m)
    {b++;m=whitedata[i];}
    char d21='0',d22='0'; e=0; 
	                               //用d21,d22记录对子1，2的大小，五个一样>四个一样>三个一样>; 
    if(b==5) dui2=0;
    
    if(b==4) dui2=1;
    
    if(b==3) {
	if(whitedata[0]==whitedata[2]||whitedata[1]==whitedata[3]||whitedata[2]==whitedata[4]) 
    dui2=3;
	else dui2=2;}
	
    if(b==2) {if(whitedata[0]==whitedata[3]||whitedata[1]==whitedata[4]) dui2=4;else 
	dui2=3;
	}
	
    if(b==1) {dui2=5;dui2=whitedata[0];}
    if(dui2==0) 
	for(d=0;d<=4;d++) {
    data2[e]=whitedata[d];e++;}
    
    if (dui2==1) {
	for(i=0;i<=3;i++) 
    if(whitedata[i]==whitedata[i+1]){d21=whitedata[i];break;}
    for(d=0;d<=4;d++){if(d==i||d==i+1) continue;else {
   data2[e]=blackdata[d];e++;}
	}}
	
	if(dui2==2) {for(i=0;i<=4;i++) if(whitedata[i]==whitedata[i+1]){d21=whitedata[i];break;}
	for(c=i;c<=4;c++) if(whitedata[c]==whitedata[c+1]){d22=whitedata[c];break;}
	for(d=0;d<=4;d++)
	{if(d==i||d==i+1||d==c||d==c+1) continue;
	else {
   data2[0]=whitedata[d];}}}
   
   if(dui2==3) {for(i=0;i<=4;i++) if(whitedata[i]==whitedata[i+2]){d21=whitedata[i];break;}
   	for(d=0;d<=4;d++)
	{if(d==i||d==i+1||d==i+2) continue;
	else {
   data1[e]=blackdata[d];e++;}}
   if(data2[0]==data2[1]) {dui22=1;d22=data2[0];
   }}
   
   if(dui2==4) {for(i=0;i<=4;i++) if(whitedata[i]==whitedata[i+1]){d21=whitedata[i];break;}
	for(d=0;d<=4;d++)
	{if(d==i||d==i+1) continue;
	else {
   data2[e]=blackdata[d];e++;}}}
   
   if(dui1==5) d21=blackdata[0];

	int hua1=1,hua2=1;   //判断是否同花，同花设1，反之设0； 
	for(c=0;c<=4;c++)
	if(blackcolor[c]!=blackcolor[0])
	{hua1=0;break;
	}
	for(c=0;c<=4;c++)
	if(whitecolor[c]!=whitecolor[0])
	{hua2=0;break;
	}
	
			
    return 0;}
		
