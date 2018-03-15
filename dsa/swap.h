#ifndef SWAP_H
#define SWAP_H

#include <iostream>
#include <cstdlib>

inline void 
swap
(
	int *a,
	int *b
)
{
	//std::cout << "before a " << *a << " b " << *b << "\n";
	//*a = *a + *b;
	//*b = *a - *b;
	//*a = *a - *b;

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	//std::cout << "after a " << *a << " b " << *b << "\n";
}

#endif
