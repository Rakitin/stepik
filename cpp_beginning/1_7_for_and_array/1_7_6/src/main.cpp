#include <iostream>
#include <vector>
#include <limits>

int main() 
{
	int n { 0 };
	std::cin >> n;
	std::vector<int> v(n);

	for (size_t i { 0 }; i < v.size(); ++i) {
		std::cin >> v[i];
	}

	int r { std::numeric_limits<int>::max() };
	for (size_t i { 0 }; i < v.size(); ++i) {
		if (v[i] <= 0) {
			continue;
		}
		r = std::min(r, v[i]);
	}
	std::cout << r << std::endl;

	return 0;
}
