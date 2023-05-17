#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int count { 0 };
	int max { 0 };
	int prev { n };
	while (n) {
		if (n == prev) {
			++count;
			max = (max < count) ? count : max;
		}
		else {
			prev = n;
			count = 1;
		}
		std::cin >> n;
	}
	std::cout << max << std::endl;
	return 0;
}
