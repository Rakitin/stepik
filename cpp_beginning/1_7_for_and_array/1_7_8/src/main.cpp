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

	int r { 1 };
	for (size_t i { 1 }; i < v.size(); ++i) {
		if (v[i-1] == v[i]) {
			continue;
		}
		++r;
	}
	std::cout << r << std::endl;

	return 0;
}
