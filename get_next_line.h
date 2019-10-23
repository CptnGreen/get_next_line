#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# include "libft/libft.h"

// remove later!
# include <stdio.h>

# define BUFF_SIZE 20

int     get_next_line(int const fd, char **line);

#endif