#include <iostream>
#include <limits>

int main() 
{
	size_t n { 0 };
	size_t m { 0 };
	std::cin >> n >> m;

	int arr[100][100];
	for (size_t i { 0 }; i < n; ++i) {
		for (size_t j { 0 }; j < m; ++j) {
			std::cin >> arr[i][j];
		}
	}

	size_t row { 0 };
	size_t column { 0 };
	for (size_t i { 0 }; i < n; ++i) {
		for (size_t j { 0 }; j < m; ++j) {
			if (arr[row][column] < arr[i][j]) {
				row = i;
				column = j;
			}
		}
	}
	std::cout << row << " " << column << std::endl;

	return 0;
}
