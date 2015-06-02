#include<stdio.h>
#include<malloc.h>
int main()
{
 int **tri,i,j,l,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&l);
  tri=(int**)malloc(sizeof(int)*l);
  for(i=1;i<=l;i++)
  {
   tri[i-1]=(int*)malloc(sizeof(int)*i);
   for(j=0;j<i;j++)
    scanf("%d",&tri[i-1][j]);
  }
  for(i=l-1;i>0;i--)
   for(j=0;j<i;j++)
    tri[i-1][j]+=(tri[i][j]>tri[i][j+1])?tri[i][j]:tri[i][j+1];
  printf("%d\n",tri[0][0]);
 }
 return 0;
}
