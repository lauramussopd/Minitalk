# include "ft_libft/libft.h"
# include <stdio.h>
#include <signal.h>

void send_binary(char *str, int pidserv)
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
				ft_printf("0");
				kill(pidserv, SIGUSR2);
			}
			else
			{
				ft_printf("1");
				kill(pidserv, SIGUSR1);
			}
		usleep(500);
		num_bit++;
		}
		num_bit = 0;
		i++;
	}
}
	

int	main(int argc, char **argv)
{
	int	pidserv;

  	if (argc != 3)
		return (-1);
	pidserv = ft_atoi(argv[1]);
    ft_printf("mi pid:%d\n", pidserv);
	send_binary(argv[2], pidserv);

	return (0);
}