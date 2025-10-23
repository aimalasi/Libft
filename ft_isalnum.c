#include "libft.h"
#include "stdio.h"

int ft_isalnum(int i)
{
    if (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) || ((i >= '0') && (i <= '9')))
        return (1);
    return (0);
}

/*int   main (void)
{
    printf("%d\n", ft_isalnum('\n'));
    printf("%d\n", ft_isalnum('1'));
    return (0);
}*/