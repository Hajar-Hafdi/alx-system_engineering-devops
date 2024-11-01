#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_while - a function that runs forever and returns nothing
 *
 * Return: 0 for success, otherwise Its and infinite loop
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - forms 5 Zombie processes
 *
 * Return: Always 0 Success
 */
int main(void)
{
	pid_t child;
	int inx;

	for (inx = 0; inx < 5; inx++)
	{
		child = fork();
		if (child > 0)
			printf("Zombie process created, PID: %d\n", child);
		else
			 exit(1);
	}
	return (infinite_while());
}
