/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:57:13 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/15 19:33:13 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				f_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int strt;
	unsigned int sr_len;

	i = 0;
	sr_len = f_len(src);
	strt = f_len(dest);
	if (size == 0)
		return (sr_len);
	while (src[i] && strt + i < size - 1)
	{
		dest[strt + i] = src[i];
		i++;
	}
	dest[strt + i] = '\0';
	if (strt <= size)
		return (strt + sr_len);
	else
		return (size + sr_len);
}
