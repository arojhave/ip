#include <iostream>

bool
isPrime
(
	int n
)
{
	for (int i = 2; i < n; i++ )
	{
		//std::cout << "\n i " << i;
		for (int j = 1; j < sqrt(n); j++)
		{
			//std::cout << "j " << j << " ";

			if (i*j == n)
			{
				return false;
			}
		}
	}

	return true;

}