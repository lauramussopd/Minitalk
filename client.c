# include "ft_libft/libft.h"
# include <stdio.h>
#include <signal.h>

void send_binary_str(char *str, int pidserv)
{
	int num_bit;
	int i;

	num_bit = 0;
	i = 0;
	while(str[i])
	{
		while (num_bit < 8)
		{
			if (((str[i]) & (128 >> num_bit)) == 0)
			{
				//ft_printf("0");
				kill(pidserv, SIGUSR2);
			}
			else
			{
				//ft_printf("1");
				kill(pidserv, SIGUSR1);
			}
		usleep(500);
		num_bit++;
		}
		num_bit = 0;
		i++;
	}
}

void send_binary_int(int i, int pidserv)
{
	int num_bit;

	num_bit = 0;
		while (num_bit < 32)
		{
			if ((i & (128 >> num_bit)) == 0)
			{
				//ft_printf("0");
				kill(pidserv, SIGUSR2);
			}
			else
			{
				//ft_printf("1");
				kill(pidserv, SIGUSR1);
			}
		usleep(500);
		num_bit++;
		}
}

int	main(int argc, char **argv)
{
	int	pidserv;

  	if (argc != 3)
		return (-1);
	pidserv = ft_atoi(argv[1]);
    ft_printf("mi pid:%d\n", pidserv);
	send_binary_int(ft_strlen(argv[2]), pidserv);
	send_binary_str(argv[2], pidserv);
	//send_binary_str("\n", pidserv);

	return (0);
}