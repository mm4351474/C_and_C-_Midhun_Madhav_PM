#include<stdio.h>
void main()
{
	char character;
	printf("enter a character : ");
	scanf("%c",&character);
	if(character=='v'||character=='V')
	{
		printf("the colour is violet");
	}
	else if(character=='i'||character=='I')
	{
		printf("the colour is indigo");
	}
	else if(character=='b'||character=='B')
	{
		printf("the colour is blue");
	}
	else if(character=='g'||character=='G')
	{
		printf("the colour is green");
	}
	else if(character=='y'||character=='Y')
	{
		printf("the colour is yellow");
	}
	else if(character=='o'||character=='O')
	{
		printf("the colour is orange");
	}
	else if(character=='r'||character=='R')
	{
		printf("the colour is red");
	}
	else
	{
	        printf("NOT IN RAINBOW!");
	}
}
