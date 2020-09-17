/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:07:51 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/15 19:29:36 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	iter;
	int	dest_len;

	iter = 0;
	while (*(dest + iter) != '\0')
	{
		iter++;
	}
	dest_len = iter;
	iter = 0;
	while (*(src + iter) != '\0')
	{
		*(dest + dest_len + iter) = *(src + iter);
		iter++;
	}
	dest[iter + dest_len] = '\0';
	return (dest);
}
