#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int i { 1 };
	int q;
	while ((q = i * i) <= n) {
		std::cout << q << " ";
		++i;
	}
	std::cout << std::endl;
	
	return 0;
}
