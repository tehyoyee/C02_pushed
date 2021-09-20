/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:10:46 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/20 19:29:00 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	alpha(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

int	ch_num(int n)
{
	if ('0' <= n && n <= '9')
		return (1);
	return (0);
}

char	*ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 1;
	if (alpha(str[0]))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (alpha(str[i]) && !(alpha(str[i - 1])) && !(ch_num(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
