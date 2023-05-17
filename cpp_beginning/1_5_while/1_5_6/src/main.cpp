#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int sum { 0 };
	while (n) {
		sum += n;
		std::cin >> n;
	}
	std::cout << sum << std::endl;
	return 0;
}
