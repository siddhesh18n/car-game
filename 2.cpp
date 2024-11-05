#include<stdio.h>
    #include<conio.h>
    void main()
    {
    	int i,j,k,n, temp,a[20];
    	printf("enter the size of array");
    	scanf("% d",&n);
    	printf("enter the elements in array");
    	
    	    for(i=0;i<n;i++)
    	    {
    	    	scanf("%,d",&a[i]);
    	    	
    	    for(k=0;k<n-1;k++)
    	    {
    	    for(j=0;j<n-1;i++)
    	    {
    	    	if(a[k]>a[k+1])
    	    {
    	    	temp=a[k];
    	    	a[k]=a[k+1];
    	    	a[k+1]=temp;
			}
			}
			}
				for(i=0;i<n;i++)
				{
				printf("%d\t",a[i]);
				}
			getch();
			}
    }