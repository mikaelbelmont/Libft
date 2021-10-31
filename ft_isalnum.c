#include "libft.h"

int  ft_isdigit(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}