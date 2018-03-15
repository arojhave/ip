#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <cstdlib>

struct ip_node_type
{
	int node_val;
	struct ip_node_type *node_next;
};

bool ip_create_node
(
	struct ip_node_type **node_head,
	int node_val
);

#endif