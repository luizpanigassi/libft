/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:30:11 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 16:45:12 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function compares two blocks of memory, regardless of their content types. 
// It iterates through both blocks byte by byte, comparing the corresponding 
// bytes. If both blocks are identical, it returns 0. If they differ, it 
// returns a positive or negative value depending on whether the first block 
// is greater than or less than the second, respectively.
#include <stddef.h>

void	ft_memcmp(void *ptr1, void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
