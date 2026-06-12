#include "libft.h"

static size_t	count_digits(long n)
{
	size_t	count;

	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{

}
