/*
** pushswap.c for  in /home/maison_f/rendu/CPE_2015_Pushswap
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Mon Nov 16 09:17:51 2015 Maisonnave Florian
** Last update Mon Nov 23 15:45:29 2015 Maisonnave Florian
*/

#include "struct.h"

void	parseur_comb(int *l_a, int *l_b, int size_a, int size_b)
{
  int	size;

  size = size_b;
  while (size > 0)
    {
      use_pa(l_a, l_b, &size_a, &size_b);
      if (size > 1)
	my_putchar(' ');
      size--;
    }
}

void	parseur(int *l_a, int *l_b, int size_a, int size_b)
{
  int	i;
  int	size;
  int	little;

  size = size_a;
  while (size > 0)
    {
      i = 0;
      little = l_a[0];
      while (i < size_a)
        {
          if (l_a[i] < little)
            little = l_a[i];
          i++;
        }
      while (l_a[0] != little)
	use_ra(l_a, &size_a);
      if (l_a[0] == little)
	use_pb(l_a, l_b, &size_a, &size_b);
      size--;
    }
  size = size_b;
  parseur_comb(l_a, l_b, size_a, size_b);
}

int	main(int av, char **ac)
{
  int	*l_a;
  int	*l_b;
  int	size_a;
  int	size_b;
  int	a;

  a = 0;
  size_a = av - 1;
  size_b = 0;
  l_a = malloc(sizeof(av) * (size_a));
  l_b = malloc(sizeof(av) * (size_a));
  if (l_a == NULL || l_b == NULL)
    return (-1);
  while (ac[a + 1])
    {
      l_a[a] = my_getnbr(ac[a + 1]);
      a++;
    }
  a++;
  parseur(l_a, l_b, size_a, size_b);
  my_putchar('\n');
  return (0);
}
