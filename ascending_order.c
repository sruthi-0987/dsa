 #include <stdio.h>
 int main()
    {
    	int i,j,n,t;
    	int a[5]={5,4,6,3,7};
        for(i=0;i<n-1;i++)
           for(j=0;j<n-i-1;j++)
              if(a[j]>a[j+i])
			  {
			  	t=a[j];
			  	a[j]=a[j+1];
			  	a[j+1]=t;
			  }
			for(i=0;i<n;i++)
			{
				print("%d",a[i]);
			 }  	
			  	
		return 0;		  
    }
