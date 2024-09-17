#include "./../libft.h"

int	main(void)
{
	char text[] = "FGWGWERGWGRW";
					
	int i;

	i = 0;
	while (text[i])
	{
		text[i] = ft_tolower(text[i]);
		i++;
	}
	ft_putendl_fd(text,1);
	
	return (0);
}