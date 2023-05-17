#include <iostream>

int main()
{
	int n { 0 };
	std::cin >> n;
	if (n == 0) {
		std::cout << "0" << std::endl;
	}
	else if (n == 1) {
		std::cout << "1" << std::endl;
	}
	else {
		int i { 1 };
		int n1 { 0 };
		int n2 { 1 };
		while (i < n) {
			int tmp = n2 + n1;
			n1 = n2;
			n2 = tmp;
			++i;
		}
		std::cout << n2 << std::endl;
	}
	return 0;
}
