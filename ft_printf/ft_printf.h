#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
//#include "libft.h"

int		ft_printf(const char *arg , ...);
int		ft_reg_char(char *print, const char **s);
void	init_psel(p_sel crap)

//Function that will help me check which I am doing
typedef int p_sel(char const *s, va_list shit);

#endif