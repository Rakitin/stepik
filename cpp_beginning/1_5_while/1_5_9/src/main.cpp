#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int max { 0 };
	int second_max { 0 };
	while (n) {
		if (max <= n) {
			second_max = max;
			max = n;
		}
		else {
			if (second_max < n) {
				second_max = n;
			}
		}
		std::cin >> n;
	}
	std::cout << second_max << std::endl;
	return 0;
}
