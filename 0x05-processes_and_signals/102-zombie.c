#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * infinite_while -> Creates 5 zombies
 *Return: Always -> 0
 */

int infinite_while(void)
{

	while (1)
	{
		sleep(1);

	}	return (0);

}

/**
 * main -> VOID
 *Return: Always -> 0
 */

int main(void)
{
	int zz;

	pid_t zombie;

	for (zz = 0; zz < 5; zz++)
	{
		zombie = fork();

		if (!zombie)
		{

			return (0);

		}		printf("Zombie process created, PID: %d\n", zombie);


	}	infinite_while();

	return (0);
}
