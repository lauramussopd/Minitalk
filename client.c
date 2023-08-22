# include "ft_libft/libft.h"
# include <stdio.h>

int	main(int argc, char **argv)
{
	int	pidserv;

//  if (argc != 3)
//		return (-1);
	pidserv = ft_atoi(argv[1]);
    ft_printf("mi pid:%d", pidserv);
	//conv_bin(argv[2], pidserv);
	return (0);
}