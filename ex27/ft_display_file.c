/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:15:42 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/10 16:58:59 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

#define BUF_SIZE 1024

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		file_open;
	int		buf_rec;
	char	buffer[BUF_SIZE + 1];

	buf_rec = 1;
	if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else if (ac == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		file_open = open(av[1], O_RDONLY);
		if (file_open == -1)
			write(1, "Cannot read file.\n", 18);
		else
		{
			while (buf_rec)
			{
				buf_rec = read(file_open, buffer, BUF_SIZE);
				buffer[buf_rec] = '\0';
				ft_putstr(buffer);
			}
		}
	}
	return (0);
}
