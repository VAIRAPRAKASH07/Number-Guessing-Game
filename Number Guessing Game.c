#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int choice;
printf("Enter you name :");
char str[100];
scanf("%s",str);
printf("1.Easy 0 to 10\n");
printf("2.Medium 0 to 50\n");
printf("3.Hard 0 to 100\n");
scanf("%d",&choice);
if(choice==1 || choice==2 || choice==3)
{
int attempt;
int nattempt;
int random;
int input;
srand(time(NULL));
    switch(choice)
	{
	   {
		case 1:
			attempt=3;
		int min1=0,max1=10;
		random=(rand()%(max1-min1+1))+min1;
		
		for(int i=1;i<=3;i++)
		{
		    nattempt=attempt-i;
			printf("%d)Guess a number:",i);
			scanf("%d",&input);
			if(input>random )
			{
			    printf("Number is less than your guess\n");
			    
			}
			else if(input < random)
			{
			    printf("Number is greater than your guess\n");
			    
			}
			if(random==input)
			{
				printf("%s Your guess is correct\n",str);
				break;
			}
			else
			{
				printf("%s Your guess is wrong! (attempt= %d)\n",str,nattempt);
			}
			       
	     }break;     
	}
    	{	
		case 2:	
		attempt=10;
		int min2=0,max2=50;
		random=(rand()%(max2-min2+1))+min2;
		for(int i=1;i<=10;i++)
		{
			nattempt=attempt-i;
			printf("%d)Guess a number:",i);
			scanf("%d",&input);
				if(input>random )
			{
			    printf("Number is less than your guess\n");
			    
			}
			else if(input < random)
			{
			    printf("Number is greater than your guess\n");
			    
			}
		    if(random==input)
			{
				printf("%s Your guess is correct\n",str);
				break;
		    }
			else
			{
				printf("%s Your guess is wrong! (attempt= %d)\n",str,nattempt);
			}
			       
	    }
	    break;
	}
	 {
	 
	    case 3:
	    attempt=20;
	        	
	    int min3=0,max3=100;
	    random=(rand()%(max3-min3+1))+min3;
		for(int i=1;i<=20;i++)
		{
            nattempt=attempt-i;
			printf("%d)Guess a number:",i);
		    scanf("%d",&input);
		    	if(input>random )
			{
			    printf("Number is lesser than your guess\n");
			    
			}
			else if(input < random)
			{
			    printf("Number is greater than your guess\n");
			    
			}
		    if(random==input)
			{
			    printf("%s Your guess is correct\n",str);
				break;
			}
	        else
		    {
		        printf("%s Your guess is wrong! (attempt= %d)\n",str,nattempt);
	        }
			       
	    }
	    break;
       }
	}
	    
}
else
    {
	    	printf("%s You entered wrong option,reselect ",str);
	}
	        

}

