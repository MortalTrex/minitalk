#include "../include/minitalk.h"

void receive_binary(int signal)
{
    static int	bit;
	static int	c;

	if (signal == SIGUSR1)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
}

int main (int argc, char **argv)
{
    int pid;
    (void) argv;
    
    if (argc != 1)
    {
        ft_printf("Arguments received are not valid\n");
        return (EXIT_FAILURE);
    }
    pid = getpid();
    ft_printf("PID: %d\n", pid);

    while (1)
    {
        signal(SIGUSR1, receive_binary);
        signal(SIGUSR2, receive_binary);
        pause();
    }
    return (EXIT_SUCCESS);
}