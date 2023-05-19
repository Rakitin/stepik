#include <iostream>
#include <vector>

int main() 
{
	int n { 0 };
	std::cin >> n;
	std::vector<int> v(n);

	for (size_t i { 0 }; i < v.size(); ++i) {
		std::cin >> v[i];
	}

	for (size_t i { v.size() - 1 }; i > 0; --i) {
		std::swap(v[i], v[i-1]);
	}

	for (int i: v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}
