#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int i { 1 };
	while (i < n) {
		i *= 2;
	}
	std::cout << ((i == n) ? "YES" : "NO") << std::endl;
	return 0;
}
