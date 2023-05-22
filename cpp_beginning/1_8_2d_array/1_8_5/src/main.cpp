#include <iostream>

int main() 
{
	size_t n { 0 };
	std::cin >> n;

	int arr[100][100];
	for (size_t i { 0 }; i < n; ++i) {
		for (size_t j { 0 }; j < n; ++j) {
			std::cin >> arr[i][j];
		}
	}

	bool result { true };
	for (size_t i { 0 }; i < n; ++i) {
		for (size_t j { 0 }; j < n; ++j) {
			if (!result) {
				break;
			}
			if (arr[i][j] != arr[j][i]) {
				result = false;
				break;
			}
		}
	}
	std::cout << (result ? "YES" : "NO") << std::endl;
	return 0;
}
