#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=3; i<=100; ++i)
	{
		for(j=2; j<i && i%j; ++j);
		if(i==j)
			cout << i << " is a prime number.\n";
	}
	return 0;
}