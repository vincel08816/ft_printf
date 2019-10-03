#include "ft_printf.h"

//	starts with a VA list
//	what do I want to do here?
//	for every VA list, it starts with the "..." then arg
//	I need to find every "%" and match them with the variables
//	what should I do with each flag?

int		ft_reg_str(char *print, const char **s)
{
	int		ret;
	char	*chk;

	chk = ft_strchr(*s, '%');
	ret = (chk ? (int)(chk - *s) : ft_strlen(*s));
	ft_strncpy(print, *s, ret);
	*s += ret;
	return (ret);
}

void	init_psel(p_sel *crap[])
{

	crap['d'] = 0;
	crap['i'] = 0;
//	crap['u'] = 0;
//	crap['o'] = 0;
//	crap['x'] = 0;
//	crap['X'] = 0;
//	crap['f'] = 0;
//	crap['F'] = 0;
//	crap['e'] = 0;
//	crap['E'] = 0;
//	crap['g'] = 0;
//	crap['a'] = 0;
//	crap['A'] = 0;
	crap['c'] = 0;
	crap['s'] = 0;
//	crap['p'] = 0;
//	crap['n'] = 0;
//	crap['%'] = 0;
	init_psel2(crap);
}

//void	init_psel2(p_sel *crap[])
//{
//	//flags
//	crap['-'] = 0;
//	crap['+'] = 0;
//	crap['#'] = 0;
//	crap['0'] = 0;
//	//width
//	crap[' '] = 0;
//	crap['h'] = 0;
//	crap['l'] = 0;
//	crap['j'] = 0;
//	crap['z'] = 0;
//	crap['t'] = 0;
//	crap['L'] = 0;
//}

//when it is  % sign :D
int		ft_pf_mod()

int		ft_printf(char const *arg , ...)
{
	va_list			vl;
	int				ret;
	char const		*s;
	char			print[100000];
	static p_sel	*somecrap[127];
	int i;

	i = 0; ret = 0;
	while (somecrap[i])
		somecrap[i++] = 0;
	va_start(vl, arg);	//what does this do?
	s = arg;

	if (s)
	{
		init_psel(&somecrap);
		while (*s)
			ret += *s == '%' ? \
				s += 1 : \
				ft_reg_str(print + ret, &s);
		write(1, print, ret);
	}
	va_end(vl);
	return (ret);
}

int		main(void)
{
	char *s = "asdfadfadf";
	ft_printf("something", +);
	return (0);
}