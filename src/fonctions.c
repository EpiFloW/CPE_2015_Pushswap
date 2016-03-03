/*
** fonctions.c for  in /home/maison_f/rendu/CPE_2015_Pushswap
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Mon Nov 16 10:21:44 2015 Maisonnave Florian
** Last update Sun Nov 22 19:08:32 2015 Maisonnave Florian
*/

#include "struct.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int     my_getnbr(char *str)
{
  int	nb;
  int	mult;
  int	i;
  int	a;

  nb = 0;
  mult = 1;
  a = 0;
  i = 0;
  while (a < (my_strlen(str) - 1))
    {
      mult = mult * 10;
      a++;
    }
  while (str[i])
    {
      nb = nb + (mult * (str[i] - 48));
      mult = mult / 10;
      i++;
    }
  return (nb);
}

void	my_putnbr(int nb)
{
  int	i;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  i = nb % 10;
  if (nb >= 10)
    my_putnbr(nb / 10);
  my_putchar(i + 48);
}
