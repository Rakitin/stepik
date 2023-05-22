#include <iostream>

int main() 
{
	size_t n { 0 };
	size_t m { 0 };
	std::cin >> n >> m;

	int arr[100][100];
	for (size_t k { 0 }; k < n; ++k) {
		for (size_t l { 0 }; l < m; ++l) {
			std::cin >> arr[k][l];
		}
	}

	size_t i { 0 };
	size_t j { 0 };
	std::cin >> i >> j;

	for (size_t k { 0 }; k < n; ++k) {
		std::swap(arr[k][i], arr[k][j]);
	}

	for (size_t k { 0 }; k < n; ++k) {
		for (size_t l { 0 }; l < m; ++l) {
			std::cout << arr[k][l] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
