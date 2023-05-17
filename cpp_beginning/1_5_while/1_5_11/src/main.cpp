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
		int tmp;
		while ((tmp = n2 + n1) <= n) {
			n1 = n2;
			n2 = tmp;
			if (n2 == n) {
				break;
			}
			++i;
		}
		std::cout << (n2 == n ? i+1 : -1) << std::endl;
	}
	return 0;
}
