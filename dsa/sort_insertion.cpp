#include <iostream>
#include "sort_insertion.h"
#include "swap.h"

static void
sort_insertion_r
(
	int *sorted_arr,
	int sorted_arr_len,
	int *unsorted_arr,
	int unsorted_arr_len
)
{
	print_sort(sorted_arr, sorted_arr_len+ unsorted_arr_len);

	if (unsorted_arr_len == 0)
	{
		return;
	}


	int element_from_unsorted = unsorted_arr[0];

	for (int i = (sorted_arr_len - 1); i >= 0; i--)
	{
		if (element_from_unsorted < sorted_arr[i])
		{
			swap(&sorted_arr[i], &sorted_arr[i+1]);
		}
	}

	sort_insertion_r( sorted_arr, sorted_arr_len+1, unsorted_arr+1, unsorted_arr_len-1 );

	return;
}

void
sort_insertion
(
	int *array,
	int num_of_elements
)
{
	sort_insertion_r(array,1, array+1, num_of_elements-1);
}