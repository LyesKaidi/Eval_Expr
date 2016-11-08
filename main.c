/*
** main.c for main.c in /home/kiwi/CPool_evalexpr
** 
** Made by Lyes Kaïdi
** Login   <kiwi@epitech.net>
** 
** Started on  Fri Oct 28 17:47:35 2016 Lyes Kaïdi
** Last update Fri Oct 28 18:01:51 2016 Lyes Kaïdi
*/

#include <unistd.h>
#include "./include/my_functs.h"
#include "./include/calc.h"

int	my_str_isnum_ope(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || str[i] == '+'
	  || str[i] == '-' || str[i] == '/' || str[i] == '*'
	  || str[i] == '%' || str[i] == '(' || str[i] == ')' || str[i] == ' ')
	i = i + 1;
      else
	return (1);
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

void	my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}

int	main(int ac, char **av)
{
  if (my_str_isnum_ope(av[1]) == 1)
    {
      my_putstr_error("The argument must only contain digits and operators\n");
      return (84);
    }
  if (ac == 2)
    {
      my_putnbr(eval_expr(av[1]));
      my_putchar('\n');
    }
  else
    {
      my_putstr_error("Invalid number of arguments\n");
      return (84);
    }
  return (0);
}
