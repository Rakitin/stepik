#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;

	int arr[100][100];
	for (int i { 0 }; i < n; ++i) {
		for (int j { 0 }; j < n; ++j) {
			arr[i][j] = (i - j < 0) ? j - i : i - j;
		}
	}

	for (int i { 0 }; i < n; ++i) {
		for (int j { 0 }; j < n; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
