#include <iostream>
#include <vector>

int main() 
{ 
	int n { 0 };
	std::cin >> n;
	std::vector<int> v(n);

	for (size_t i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}
	
	for (auto i: v) {
		if (i%2) {
			continue;
		}
		std::cout << i << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
