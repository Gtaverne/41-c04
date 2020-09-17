/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:14:15 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/16 10:52:18 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	strt;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	strt = i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + strt] = src[i];
		i++;
	}
	*(dest + strt + i) = '\0';
	return (dest);
}
