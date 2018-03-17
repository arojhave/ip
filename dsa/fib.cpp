
#include <iostream>

int fib(int seed_a, int seed_b, int n, int count)
{
	if (count>=n)
	{
		return 0;
	}
	else
	{
		std::cout<<" "<<seed_a;
		fib(seed_b, seed_a+seed_b, n, ++count);
	} 
}

int fib2(int n)
{
   if (n <= 1)
   {
   		//std::cout<<" "<<n;
   		return n;
	}
	else
	{
		int y = fib2(n-1) + fib2(n-2);
		std::cout<<" "<<y;
		return y;
	}
}


int main( void )
{
	//fib(0,1,10,0);
	fib2(10);
	return 0;
}

