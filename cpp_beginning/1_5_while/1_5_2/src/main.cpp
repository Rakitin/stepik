#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int i { 2 };
	while (n % i) {
		++i;
	}
	std::cout << i << std::endl;
	
	return 0;
}
