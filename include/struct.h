/*
** struct.h for  in /home/maison_f/rendu/CPE_2015_Pushswap
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Thu Nov 19 14:54:56 2015 Maisonnave Florian
** Last update Sun Nov 22 20:23:06 2015 Maisonnave Florian
*/

# ifndef STRUCT_H_
# define STRUCT_H_

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int, char **);
void	my_putchar(char);
void	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_putnbr(int);
void	parseur(int *, int *, int, int);
void	parseur_comb(int *, int *, int, int);
void	use_pa(int *, int *, int *, int *);
void	use_pb(int *, int *, int *, int *);
void	use_ra(int *, int *);

# endif
