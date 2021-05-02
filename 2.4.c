#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	for (int i=1; i<5; i++)
	{
		printf("What is your name:");
		
