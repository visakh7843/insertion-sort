#include<stdio.h>
int sort(int *a,int n)
{
  int i,j,k;
  for(i=1;i<n;i++)
    {
      k=a[i];
      for(j=i-1;(j>=0)&&(k<a[j]);j--)
	{
	  a[j+1]=a[j];
	  a[j]=k;
	}
     
    

		 
    }
}
main()
{
  int a[20],n,i,k,j,b;
  printf("\nenter the no.of elements:");
  scanf("%d",&n);
  printf("\nenter the elements to be sorted:");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  sort(a,n);
  printf("\nelements after sorting;");
  for(i=0;i<n;i++)
    {
      printf("\t %d",a[i]);
    }
  printf("\n");
}

