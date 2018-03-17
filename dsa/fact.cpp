// Example program
#include <iostream>
#include <string>

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
  int val = fact(5);
  std::cout << "res = " << val << "!\n";
}

