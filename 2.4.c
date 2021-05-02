#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	char name[20];
	for (int i=1; i<5; i++)
	{
		printf("What is your name:");
		fgets(name, sizeof(name),stdin);

		pid_t pid = fork();
		
		if(pid == 0)
		{
			printf("Your name is: ");
			puts(name);
			printf("Child process => PPID=%d, PID=%d\n", getppid(), getpid());
			exit(0);
		}
		else
		{
			printf("Parent process => PID=%d\n", getpid());
			printf("Waiting for child process to finish...\n");
			wait(NULL);
			printf("Child process finish.\n");
		}
	}

return  EXIT_SUCCESS;
}
