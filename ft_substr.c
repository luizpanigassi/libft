/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:10:58 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:04:10 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function extracts a substring from the given string 's', starting 
// at the index 'start' and spanning up to 'len' characters. It first 
// calculates the length of the original string and then determines the 
// length of the substring to create. If 'start' is greater than or 
// equal to the length of 's', it returns an empty string. If the 
// calculated substring length exceeds 'len', it adjusts the length 
// accordingly. The function allocates memory for the new substring, 
// copies the relevant portion of 's' into it, adds a null terminator, 
// and returns the resulting substring. If memory allocation fails, 
// it returns NULL.
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	size_t	substr_length;
	size_t	i;
	char	*substr;

	i = 0;
	s_length = ft_strlen(s);
	substr_length = ft_strlen(s_length - start);
	substr = (char *)malloc(substr_length + 1);
	if (start >= s_length)
		return ((char *)malloc(1));
	if (substr_length > len)
		substr_length = len;
	if (!substr)
		return (NULL);
	while (i < substr_length)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[substr_length] = '\0';
	return (substr);
}
