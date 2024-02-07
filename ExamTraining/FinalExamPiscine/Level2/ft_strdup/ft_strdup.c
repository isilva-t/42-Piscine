#include <unistd.h>

char	*ft_strdup(char *src)
{
	auto char *array;
	auto int i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	array = malloc(sizeof(char) * i + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
