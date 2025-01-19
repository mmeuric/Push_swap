/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:01:50 by mmeuric           #+#    #+#             */
/*   Updated: 2025/01/19 19:33:31 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*  
  1- Initialise deux piles 'a' et 'b' avec NULL.                                
  2- Parse les arguments (entre "" ou séparements !!).                       
  3- Si 'a' n'est pas triée, applique un algorithme et ecris chaque          
    mouvements selon les commandes autorisées.                              
  4- Libère la mémoire allouée pour la pile 'a'.                             
*/
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_creator(&a, argv + 1);
	if (argc == 2)
		free_args(argv);
	if (!stack_is_sorted(a))
	{
		if (stack_size(a) == 2)
			sa(&a, false);
		else if (stack_size(a) == 3)
			sort_3(&a);
		else
			sort_turk(&a, &b);
	}
	free_stack(&a);
	return (0);
}
