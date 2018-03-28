#include <iostream>
#include <cstdlib>
#include "swap.h"

static void
merge
(
	int *left,
	int num_of_left,
	int *right,
	int num_of_right,
	int *array,
	int num_of_array
)
{
	int curr_idx_left = 0;
	int curr_idx_right = 0;

	for (int i = 0; i < num_of_array; i++)
	{
		if ((curr_idx_left < num_of_left) && (curr_idx_right < num_of_right))
		{
			if (left[curr_idx_left] < right[curr_idx_right])
			{
				array[i] = left[curr_idx_left];
				curr_idx_left++;
			}
			else
			{
				array[i] = right[curr_idx_right];
				curr_idx_right++;
			}
		}
	}
}


void
sort_merge
(
	int *array,
	int num_of_elements
)
{
	int m = 0;
	int *left;
	int *right;
	int arr_idx = 0;

	print_sort(array, num_of_elements);

	if (num_of_elements == 1)
	{
		return;
	}

	m = num_of_elements / 2;

	left = (int*)malloc(sizeof(int)* (m) );
	for (int i = 0; i < m; i++)
	{
		left[i] = array[arr_idx];
		arr_idx++;
	}

	right = (int*)malloc(sizeof(int)* (num_of_elements - m));
	for (int i = 0; i < (num_of_elements - m); i++)
	{
		right[i] = array[arr_idx];
		arr_idx++;
	}

	sort_merge(left, m);
	sort_merge(right, num_of_elements - m);

	merge(left, m, right, num_of_elements - m, array, num_of_elements);

	free(left);
	free(right);

	return;

}