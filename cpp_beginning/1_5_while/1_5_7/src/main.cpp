#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int max { 0 };
	while (n) {
		max = max < n ? n : max;
		std::cin >> n;
	}
	std::cout << max << std::endl;
	return 0;
}
