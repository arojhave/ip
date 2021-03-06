#include <iostream>
#include <cstdlib>
#include "linkedlist.h"
#include "swap.h"
#include "sort_bubble.h"
#include "sort_selection.h"
#include "sort_insertion.h"
#include "sort_merge.h"
#include "sort_quick.h"
#include "numeric.h"

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
	int x[] = { 7, 2, 4, 1, 5, 3 };
	sort_selection(x,sizeof(x)/sizeof(int));
	print_sort_selection(x, sizeof(x) / sizeof(int));
	std::cout << "End Selection Sort test\n";
	return;
}

static void
test_sort_insertion
(
	void
)
{
	std::cout << "Start Insertion Sort test\n";
	int x[] = { 7, 2, 4, 1, 5, 3 };
	sort_insertion(x, sizeof(x) / sizeof(int));
	std::cout << "End Insertion Sort test\n";
	return;
}

static void
test_sort_merge
(
	void
)
{
	std::cout << "Start Merge Sort test\n";
	int x[] = { 2, 4, 1, 6, 8, 5, 3, 7 };
	sort_merge(x, sizeof(x) / sizeof(int));
	print_sort(x, sizeof(x) / sizeof(int));
	std::cout << "End Merge Sort test\n";
	return;
}

static void
test_sort_quick
(
	void
)
{
	std::cout << "Start Quick Sort test\n";
	int x[] = { 7, 2, 1, 6, 8, 5, 3, 4 };
	sort_quick(x, 0, (sizeof(x) / sizeof(int) ) -1);
	print_sort(x, sizeof(x) / sizeof(int));
	std::cout << "End Quick Sort test\n";
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
	//test_sort_selection();

	// -----------------
	// Insertion Sort Test
	// -----------------
	//test_sort_insertion();

	// -----------------
	// Merge Sort Test
	// -----------------
	//test_sort_merge();

    // -----------------
	// Quick Sort Test
	// -----------------
	//test_sort_quick();

	// -----------------
	// Numeric : Is Prime
	// -----------------
	int n = 7;
	cout << n << " isPrime " << isPrime(n) << endl;

	cout << "End of main";

	return 0;

}