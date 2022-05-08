/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 01:05:07 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/24 22:24:44 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_bon(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_bon(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin_bon(char *str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = -1;
	j = 0;
	if (!str)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!buff)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen_bon(str) + ft_strlen_bon(buff) + 1));
	if (s == NULL)
		return (NULL);
	if (str)
		while (str[++i] != '\0')
			s[i] = str[i];
	while (buff[j] != '\0')
		s[i++] = buff[j++];
	s[ft_strlen_bon(str) + ft_strlen_bon(buff)] = '\0';
	free(str);
	return (s);
}
