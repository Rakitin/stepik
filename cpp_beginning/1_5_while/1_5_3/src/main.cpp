#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int i { 1 };
	while (i <= n) {
		std::cout << i << " ";
		i *= 2;
	}
	std::cout << std::endl;
	
	return 0;
}
