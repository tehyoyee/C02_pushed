/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:21:52 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/20 19:36:18 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(char c)
{
	char	*arr;

	arr = "0123456789abcde";
	if (c >= 16)
	{
		ft_putchar(arr[(unsigned int)c / 16]);
		ft_putchar(arr[(unsigned int)c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(arr[(unsigned int)c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_put_hexa(str[i]);
		}
		i++;
	}
}
