#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int r { 0 };
	while (n) {
		++r;
		std::cin >> n;
	}
	std::cout << r << std::endl;
	return 0;
}
