#include <iostream>
#include <cstdlib>
#include "linkedlist.h"
#include "swap.h"
#include "sort_bubble.h"
#include "sort_selection.h"

using namespace std;

static void 
test_linkedlist
(
	void
)
{
	std::cout << "Start Linked List test\n";
	struct ip_node_type *node = new struct ip_node_type;
	node = NULL;
	ip_create_node(&node, 5);
	ip_create_node(&node, 10);
	ip_create_node(&node, 15);
	ip_create_node(&node, 20);
	ip_create_node(&node, 25);
	std::cout << "End Linked List test\n";
	return;
}


static void
test_swap
(
	void
)
{
	std::cout << "Start Swap test\n";
	int x = 5, y = 10;
	swap(&x,&y);
	std::cout << "End Swap test\n";
	return;
}

static void
test_sort_bubble
(
	void
)
{
	std::cout << "Start Bubble Sort test\n";
	std::vector<int> x = { 2, 7, 4, 1, 5, 3 };
	sort_bubble(&x);
	std::cout << "End Bubble Sort test\n";
	return;
}

static void
test_sort_selection
(
	void
)
{
	std::cout << "Start Selection Sort test\n";
	int x[] = { 2, 7, 4, 1, 5, 3 };
	sort_selection(x,sizeof(x)/sizeof(int));
	print_sort_selection(x, sizeof(x) / sizeof(int));
	std::cout << "End Selection Sort test\n";
	return;
}

int main
(
	void
)
{
	// -----------------
	// Linked List Test
	// -----------------
	//test_linkedlist();

	// ----------
	// Swap Test
	// ----------
	// test_swap();

	// -----------------
	// Bubble Sort Test
	// -----------------
	//test_sort_bubble();

	// -----------------
	// Selection Sort Test
	// -----------------
	test_sort_selection();

	
	cout << "End of main";

	return 0;

}