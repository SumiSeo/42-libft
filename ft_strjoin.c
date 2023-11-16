#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char *str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	length = 0;
	if(! (*s1&& *s2))
		return NULL;

	while(s1[i] || s2[j])
	{
		if(s1[i])
		{	
			length++;
			i++;
		}
		else if (s2[j])
		{
			length++;
			j++;
		}
	}
	str = (char *)malloc(length * sizeof(char));
	i = 0;
	j = 0;
	while(*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while(*s2)
	{
		str[i+j] = *s2;
		s2++;
		j++;
	}
	
	return str;
}


int	main()
{
	char	*s1 = "Jack";
	char	*s2 = "Harlow";

	printf("my function -> %s\n", ft_strjoin(s1,s2));

}
