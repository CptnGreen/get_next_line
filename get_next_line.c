/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 16:25:18 by slisandr          #+#    #+#             */
/*   Updated: 2019/05/07 16:57:46 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_line_width(int fd)
{
	char	buff[BUFF_SIZE];
	size_t	nb_read;

	(void)ft_memset((void *)buff, 0, (size_t)BUFF_SIZE);
	nb_read = read(fd, (void *)buff, (size_t)BUFF_SIZE);
	if (nb_read == (size_t)(-1) || nb_read == (size_t)0)
		return (-1);
	buff[BUFF_SIZE - 1] = '\0';
	return (ft_atoi(buff));
}

static void		read_and_print_lines(int fd, size_t line_width)
{
	char	*buff;
	size_t	nb_read;

	buff = (char *)malloc((line_width + 1) * sizeof(*buff));
	if (buff == NULL)
		return ;
	(void)ft_memset((void *)buff, 0, line_width + 1);
	while ((nb_read = read(fd, (void *)buff, line_width)) != 0)
	{
		ft_putstr(buff);
		(void)memset((void *)buff, 0, line_width);
	}
	free(buff);
	return ;
}

int				main(void)
{
	int		fd;
	int		line_width;

	fd = open("./file.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	line_width = read_line_width(fd);
	if (line_width == -1 || line_width == 0)
		return (-1);
	read_and_print_lines(fd, (size_t)line_width);
	close(fd);
	return (0);
}
