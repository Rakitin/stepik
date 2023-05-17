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
	
	int count { 0 };
	for (auto i: v) {
		if (i <= 0) {
			continue;
		}
		++count;
	}
	std::cout << count << std::endl;

	return 0;
}
