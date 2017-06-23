#include<stdio.h>
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
  for(i=1;i<n;i++)
    {
      k=a[i];
      for(j=i-1;(j>=0)&&(k<a[j]);j--)
	{
	  a[j+1]=a[j];
	  a[j]=k;
	}
     
    
	
	  printf("\nafter %d iteration :",i);
	  for(b=0;b<n;b++)
	    {
	  printf("\t %d ",a[b]);
	    }
		 
    }
  printf("\nelements after sorting;");
  for(i=0;i<n;i++)
    {
      printf("\t %d",a[i]);
    }
  printf("\n");
}

