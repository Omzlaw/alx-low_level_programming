#include <stdio.h>




int main() {
   	long int n;
   	n = 612852475143;
   	long int divisor = 2, maxPrimeFactor;

   	while(n != 0) 
	{
      		if(n % divisor !=0)
         		divisor += 1;
      		else 
		{
         		maxPrimeFactor = n;
         		n = n / divisor;

         		if(n == 1) 
			{
            			printf("%d",maxPrimeFactor);
	    			printf("\n");
            			break;
         		}
      		}
   	}
   	return 0;
}
