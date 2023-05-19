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

	size_t count { 0 };
	for (size_t i { 0 }; i < v.size(); ++i) {
		for (size_t j { i + 1 }; j < v.size(); ++j) {
			if (v[i] != v[j]) {
				continue;
			}
			++count;
		}
	}
	std::cout << count << std::endl;
	
	return 0;
}
