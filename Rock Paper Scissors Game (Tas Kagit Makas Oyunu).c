#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i, player, choice, a=0, b=0;
	srand( time(NULL) );
	printf(" 1-Rock \n 2-Paper \n 3-Scissors \n\n\n ");
	for(i=1;i<=5;i++)
	{
		
		choice= rand()%3+1;
		do
		{
			printf("Make your choice: ");
		    scanf("%d",&player);
		}while(player>3);
		
	    printf("%d-%d \n",choice,player);
	    if(choice==player)
	    {
	    	printf("SCORELESS \n\n");
	    	a++;
	    	b++; 
		}
		else if(choice>player)
		{
			if(choice==3 && player==1)
			{
				printf("YOU WIN! :) \n\n");
				a++;
			}
			else
			{
				printf("YOU LOSE! :( \n\n");
			    b++;
			}
		}
		else
		{
			if(choice==1 && player==3)
			{
				printf("YOU LOSE! :( \n\n");
				b++;
			}
			else
			{
			    printf("YOU WIN! :) \n\n");
			    a++;
		    }
		}
	}
	
	printf("Computer - Player \n %d\t\t%d \n",b,a);
	
	if(a==b)
	    {
	    	printf("SCORE DRAW :| \n");
		}
		else if(b>a)
		{
			printf("UNFORTUNATELY YOU LOSE :( \n");
		}
		else
		{
			printf("CONGRATULATIONS YOU WIN !!! :) \n");
		}
	
	
	return 0;
}
