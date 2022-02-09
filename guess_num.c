
#include<stdio.h>
int main()
{
int mynum,usernum;
mynum = 5;


printf("GUESS MY NUMBER BETWEEN (0 to 10)\n");

while(1)
{
	printf("\nENTER THE GUESS :");
	scanf("%d",&usernum);

	if(mynum==usernum)
	{
		printf("YOU GUESS CORRECT NUMBER %d",usernum);

		break;
	}
	else if(mynum < usernum)
	{
		printf("YOU GUESS GREATER NUMBER %d",usernum);
	}
	else
	{
		printf("YOU GUESS SMALLER NUMBER %d",usernum);
	}
}
}
