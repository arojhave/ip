#include <iostream>
#include <cstdlib>
#include "linkedlist.h"

struct ip_node_type* ip_traverse_end
(
	struct ip_node_type *start_node
)
{
	if (start_node->node_next == NULL)
	{
		return start_node;
	}
	else
	{
		ip_traverse_end(start_node->node_next);
		return NULL;
	}
}

bool ip_create_node
(
	struct ip_node_type **node_head,
	int node_val
)
{
	struct ip_node_type *node_to_add;
	if (*node_head == NULL)
	{
		*node_head = (struct ip_node_type*)malloc(sizeof(struct ip_node_type));
		(*node_head)->node_val = node_val;
		(*node_head)->node_next = NULL;
	}
	else
	{
		node_to_add = ip_traverse_end(*node_head);
		node_to_add->node_next = (struct ip_node_type*)malloc(sizeof(struct ip_node_type));
		node_to_add->node_next->node_val = node_val;
		node_to_add->node_next->node_next = NULL;
	}

	return true;
} /* ip_create_node */