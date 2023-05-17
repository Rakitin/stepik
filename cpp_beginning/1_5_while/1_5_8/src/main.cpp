#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int max { 0 };
	int count { 0 };
	while (n) {
		if (max < n) {
			max = n;
			count = 1;
		}
		else if (n == max) {
			++count;
		}
		std::cin >> n;
	}
	std::cout << count << std::endl;
	return 0;
}
