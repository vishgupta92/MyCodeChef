#include<stdio.h>
#include<malloc.h>
int main()
{
 int n,*a,*b,*c,i,k;
 scanf("%d",&n);
 a=(int*)malloc(sizeof(int)*n);
 b=(int*)malloc(sizeof(int)*n);
 scanf("%d",&a[0]);
 k=a[0];
 for(i=1;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(k<a[i])
   k=a[i];
 }
 c=(int*)malloc(sizeof(int)*(k+1));
 for(i=0;i<k;i++)
  c[i]=0;
 for(i=0;i<n;i++)
  c[a[i]]++;
 for(i=1;i<=k;i++)
  c[i]+=c[i-1];
 for(i=0;i<n;i++)
 {
  b[c[a[i]]-1]=a[i];
  c[a[i]]--;
 }
 for(i=0;i<n;i++)
  printf("%d\n",b[i]);
return 0;
}
