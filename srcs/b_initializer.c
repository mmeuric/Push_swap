/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_initializer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:02:22 by mmeuric           #+#    #+#             */
/*   Updated: 2025/01/19 19:46:07 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*  
  Met à jour le nœud cible pour chaque élément de la pile B en trouvant    
  le nœud correspondant dans la pile A.                                    
*/
static void	update_btarget(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr > b->nbr && current_a->nbr < best_match_index)
			{
				best_match_index = current_a->nbr;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

/*  
  Utilise les fonctions précédentes pour initialiser les propriétés des     
  éléments de la pile B, telles que les indices, les nœuds cibles.          
*/
void	bnode_initializer(t_stack *a, t_stack *b)
{
	update_index(a);
	update_index(b);
	update_btarget(a, b);
}
