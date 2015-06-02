#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,h,l;
	char str[40][100],ch;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	  scanf("%s",str[i]);
	  l=strlen(str[i]);
	  h=0;
	  for(j=0;j<l;j++)
	  {
	  	ch=str[i][j];
	  	if(ch=='A' || ch=='D'||ch=='O'||ch=='P'||ch=='Q'||ch=='R')
	  	   h++;
	  	else if(ch=='B')
	  	   h+=2;
	  }
	  sprintf(str[i],"%d",h);
	}
	for(i=0;i<t;i++)
	  printf("%s\n",str[i]);
	return 0;
}
