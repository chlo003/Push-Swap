#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

t_node	create_node(int data);

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

#endif