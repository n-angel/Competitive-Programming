#include<stdio.h>

int main(){
	int n, mPlace, mPlaceValue;
	int i;
	int cont = 0;
	int inputVal;

    scanf("%d %d", &n, &mPlace);
    
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d", &inputVal);
        
        if(inputVal > 0)
        {        	
        	if(i<=mPlace)
        	{
        	    cont ++;
        	} 
        	else if(inputVal==mPlaceValue)
        	{
            	cont++;
        	}
        	
        	if(i==mPlace)
        	{
            	mPlaceValue = inputVal;
        	}
        }
    }
    
    printf("%d", cont);
    
return 0;
}
