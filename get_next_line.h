/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 16:02:52 by slisandr          #+#    #+#             */
/*   Updated: 2019/05/07 16:56:27 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFF_SIZE 32

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
