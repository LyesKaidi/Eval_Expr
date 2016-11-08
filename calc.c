/*
** calc.c for calc.c in /home/kiwi/CPool_evalexpr
** 
** Made by Lyes Kaïdi
** Login   <kiwi@epitech.net>
** 
** Started on  Fri Oct 28 17:41:57 2016 Lyes Kaïdi
** Last update Fri Oct 28 17:44:15 2016 Lyes Kaïdi
*/

#include "./include/calc.h"
#include "./include/my_functs.h"
#include "functions.c"

char	**all_tokens(char *str)
{
  char	**tokens = (char**)malloc(sizeof(char*)*50);
  char	*token;
  int	i;

  i = 0;
  while (*(token = next_token(str)))
    {
      tokens[i++] = token;
      while (*str == ' ')
	str = str + 1;
      while (*token != '\0')
	{
	  str = str + 1;
	  token++;
	}
    }
  tokens[i] = NULL;
  return tokens;
}

char	*next_token(char *str)
{
  char	*token;
  int	i;
  char	c;

  i = 0;
  c = 0;
  token = (char*)malloc(sizeof (char)*5);
  return (ope_finder(token, i, c, str));
}

int	term(char **tokens)
{
  int	factor_1;
  int	factor_2;
  char	*next_token;

  factor_2 = 0;
  factor_1 = factor(tokens);
  next_token = tokens[next_token_index];
  return (term_helper(factor_1, tokens, factor_2, next_token));
}

int	factor(char **tokens)
{
  char	*token;
  int	factor;

  token = tokens[next_token_index];
  if (token[0] == '(')
    {
      next_token_index = next_token_index + 1;
      factor = expr(tokens);
      next_token_index = next_token_index + 1;
    }
  else
    {
      factor = integer(tokens);
    }
  return factor;
}

int	integer(char **tokens)
{
  char	*token;

  token = tokens[next_token_index];
  next_token_index = next_token_index + 1;
  return my_atoi(&token);
}
