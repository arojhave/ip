#include <vector>
#include <iostream>
#include <ostream>
#include "sort_bubble.h"

static void
print_bubblesort
(
	std::vector<int> *num_list
)
{
	std::cout << "Vector Content ";

	for (std::vector<int>::iterator it = num_list->begin(); it < num_list->end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
	return;
}

static bool is_swap_done = false;

static void 
bubblesort_phase_1
(
	std::vector<int>::iterator it_start,
	std::vector<int>::iterator it_end,
	std::vector<int> *num_list
)
{
	
	if (it_start >= it_end-1)
	{
		return;
	}

	std::cout << "START -------------------------------------\n";

	std::cout << "it start " << *it_start << "\n";

	if (*it_start > *(it_start+1))
	{
		int temp;
		temp = *it_start;
		*it_start = *(it_start + 1);
		*(it_start + 1) = temp;
		is_swap_done = true;
	}

	std::vector<int>::iterator new_it_start = it_start + 1;
	bubblesort_phase_1(new_it_start, it_end, num_list);

	print_bubblesort(num_list);
	std::cout << "END -------------------------------------\n";

	return;
}


void 
sort_bubble
(
	std::vector<int> *num_list
)
{
	std::vector<int>::iterator it_start = num_list->begin();
	std::vector<int>::iterator it_end = num_list->end();

	int length = num_list->size();
	std::cout << "Number of Elements " << length << "\n";
	print_bubblesort(num_list);
	for (int i = 0; i < length; i++)
	{
		is_swap_done = false;
		std::cout << "\n\n\nLOOP START -------------------------------------\n";
		bubblesort_phase_1(it_start, it_end, num_list);
		std::cout << "LOOP END -------------------------------------\n\n\n\n";
		if (is_swap_done == false)
			break;
	}
	print_bubblesort(num_list);
	return;

}