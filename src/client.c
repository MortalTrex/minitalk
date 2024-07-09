#include "../include/minitalk.h"

int send_binary(int pid, char c)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (c & (1 << i))
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        usleep(100);
        i++;
    }
    return (EXIT_SUCCESS);
}

int verif_pid(char *pid)
{
    int i;

    i = 0;
    while (pid[i])
    {
        if (!ft_isdigit(pid[i]))
            return (EXIT_FAILURE);
        i++;
    }
    return (EXIT_SUCCESS);
}

int main (int argc, char **argv)
{
    int pid;
    int i;

    i = 0;
    if (argc != 3)
    {
        ft_printf("Incorrect arguments\n");
        return (EXIT_FAILURE);
    }
    pid = ft_atoi(argv[1]);
    if (verif_pid(argv[1]) == EXIT_FAILURE)
    {
        ft_printf("PID is not valid\n");
        return (EXIT_FAILURE);
    }
    while (argv[2][i])
    {
        send_binary(pid, argv[2][i]);
        i++;
    }
    send_binary(pid, '\n');
    return(EXIT_SUCCESS);
}