/*
** my_functs.c for my_functs.c in /home/kiwi/CPool_evalexpr
** 
** Made by Lyes Kaïdi
** Login   <kiwi@epitech.net>
** 
** Started on  Fri Oct 28 17:50:11 2016 Lyes Kaïdi
** Last update Fri Oct 28 18:01:12 2016 Lyes Kaïdi
*/

#include <unistd.h>
#include "./include/my_functs.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      my_putnbr(-nb);
      return ;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  else
    my_putchar(nb + '0');
}

int	my_atoi(char **str)
{
  int	nbr;

  nbr = 0;
  while (**str >= '0' && **str <= '9')
    {
      nbr = nbr * 10 + (**str - '0');
      (*str)++;
    }
  return (nbr);
}
