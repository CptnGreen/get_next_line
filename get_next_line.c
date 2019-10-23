#include "get_next_line.h"

/*
** This function returns (-1) if there is no '\n' in the string
** and returns position of the first occurence of '\n' if finds any
** (and changes '\n' to '\0' for the future purpose)
*/

int		find_endline(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
			return (-1);
		i++;
	}
	str[i] = '\0';
	return (i);
}
char	*increase_tail(char *tail, char *buff)
{
	tail = ft_strjoin(tail, buff);
	return (tail);
}

cutoff_line(char *buff)
{
	int		endl_pos;
	char	*tail;

	endl_pos = find_endline(tail);
	while (endl_pos < 0)
		increase_tail(tail, buff);

}

int		get_next_line(int const fd, char **line)
{
	int		ret;
	char	*buff;

	static char		buff[1000];

	cutoff_line(buff[fd], )
}