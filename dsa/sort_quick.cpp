#include <iostream>
#include "swap.h"

static int
sort_quick_partition
(
	int *array,
	int start,
	int end
)
{
	int partition = start;
	int pivot = end;

	for (int i = start; i < end; i++)
	{
		if (array[i] <= array[pivot])
		{
			swap(&array[i], &array[partition]);
			partition = partition+1;
		}
	}
	
	swap(&array[pivot], &array[partition]);

	return partition;
}

void
sort_quick
(
	int *array,
	int start,
	int end
)
{
	int pivot;

	print_sort(array, end-start+1);

	if (start >= end)
	{
		return;
	}

	pivot = sort_quick_partition(array, start, end);

	sort_quick(array, start, pivot-1);
	sort_quick(array, pivot+1,end);
}

