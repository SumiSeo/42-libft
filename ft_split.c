/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:46:13 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/18 10:50:05 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	count_words(char const *s, char c)
{
	int	i;
	i = 0;
	while(*s)
	{
		if(*s == c)
			i++;
		s++;
	}
	return i;
}

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**array;
	size_t	temp_count;
	int	i;
	int j;
	int k;
	k = 0;
	i = 0 ;
	count = count_words(s, c);
	int	each_letters[count];
	array = (char **)malloc(sizeof(char *) * (count +1));
	temp_count = 0;
	j = 0;
	int l;

	while(i < count + 1)
	{
		while(s[j] != c && s[j] !='\0')
		{
			temp_count++;
			j++;
		}
		array[i] = (char*)malloc(sizeof(char) * temp_count +1);
		each_letters[i] = temp_count;
		if(s[j] == c)
		{
			temp_count = 0;
			j++;
		}
		i++;
	}

	printf("count %d\n",count);
	array[count][0] = '\0';

	j = 0;
	while(k < each_letters[k])
	{
		printf("Each letters %d\n", each_letters[k]);
		printf("Each letters %s\n", s);
		l = 0;
		while(s[j] !=c && s[j] != '\0')
			array[k][l++] = s[j++];
		if(s[j++] == c)
			l = 0;
		k++;
	}
	
	
	printf("->%s<-\n",array[0]);
	printf("->%s<-\n",array[1]);
	printf("->%s<-\n",array[2]);
	printf("->%s<-\n",array[3]);
	printf("->%s<-\n",array[4]);
	return array;
}	

/*

int	main()
{
	char *str= "this-is-testing-string";
	char c = '-';
	char **arr;
	arr = ft_split(str, c);
	printf("TEST VALUE : %c\n", arr[0][0]);
	printf("TEST VALUE : %c\n", arr[0][1]);
	printf("TEST VALUE : %c\n", arr[0][2]);
}
*/