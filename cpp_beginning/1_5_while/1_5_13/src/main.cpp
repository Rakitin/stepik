#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;
	int n1 { n };
	int n2 { n };
	int count { 0 };
	while (n) {
		if (n1 < n2 and n2 > n) {
			++count;
		}
		n1 = n2;
		n2 = n;
		std::cin >> n;
	}
	std::cout << count << std::endl;
	return 0;
}
