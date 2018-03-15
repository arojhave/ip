#include <iostream>
#include "sort_selection.h"
#include "swap.h"

void 
print_sort_selection
(
	int *array,
	int num_of_elements
)
{
	std::cout << "Sort Step Total Elements [" << num_of_elements << "] : ";
	for (int i = 0; i < num_of_elements; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}


void
sort_selection
(
	int *array,
	int num_of_elements
)
{

	print_sort_selection(array, num_of_elements);

	if (num_of_elements == 1)
		return;

	int min_value_index = 0;
	bool is_min_found = false;

	for (int i = 1; i < num_of_elements; i++)
	{
		//std::cout << "i: " << array[i] << " 0: " << array[0] << "\n";
		if (array[i] < array[min_value_index])
		{
			min_value_index = i;
		}
	}

	swap(&array[0], &array[min_value_index]);

	//print_sort_selection(array, num_of_elements);

	sort_selection(array+1, num_of_elements-1);

	return;

}