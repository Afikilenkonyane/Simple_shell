#include <stdio.h>
#include <unistd.h>

/**
 * main - print pid
 *
 * Return: ALWAYS  0
*/
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
