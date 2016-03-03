/*
** use.c for  in /home/maison_f/rendu/CPE_2015_Pushswap
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Mon Nov 16 10:14:16 2015 Maisonnave Florian
** Last update Sun Nov 22 18:29:02 2015 Maisonnave Florian
*/

#include "struct.h"

void	use_pa(int *l_a, int *l_b, int *size_a, int *size_b)
{
  int	i;

  i = *size_a - 1;
  while (i >= 0)
    {
      l_a[i + 1] = l_a[i];
      i--;
    }
  l_a[0] = l_b[0];
  i = 1;
  while (i < *size_b)
    {
      l_b[i - 1] = l_b[i];
      i++;
    }
  *size_a = *size_a + 1;
  *size_b = *size_b - 1;
  my_putstr("pa");
}

void	use_pb(int *l_a, int *l_b, int *size_a, int *size_b)
{
  int	i;

  i = *size_b - 1;
  while (i >= 0)
    {
      l_b[i + 1] = l_b[i];
      i--;
    }
  l_b[0] = l_a[0];
  i = 1;
  while (i < *size_a)
    {
      l_a[i - 1] = l_a[i];
      i++;
    }
  *size_b = *size_b + 1;
  *size_a = *size_a - 1;
  my_putstr("pb ");
}

void	use_ra(int *l_a, int *size_a)
{
  int	i;
  int	k;

  i = 0;
  k = *size_a;
  k = l_a[0];
  while (i < *size_a - 1)
    {
      l_a[i] = l_a[i + 1];
      i++;
    }
  l_a[i] = k;
  my_putstr("ra ");
}
