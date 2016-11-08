/*
** calc.h for calc.h in /home/kiwi/Downloads/Evalexpr/include
** 
** Made by Lyes Kaïdi
** Login   <kiwi@epitech.net>
** 
** Started on  Fri Oct 28 15:11:41 2016 Lyes Kaïdi
** Last update Fri Oct 28 17:57:57 2016 Lyes Kaïdi
*/

#ifndef CALC_H_
# define CALC_H_
# include <stdio.h>
# include <stdlib.h>

int	eval_expr(char *str);
int	expr(char **tokens);
char	**all_tokens(char *str);
char	*next_token(char *str);
int	term(char **str);
int	factor(char **str);
int	integer(char **str);

#endif /* !CALC_H_ */
