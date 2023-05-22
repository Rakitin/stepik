#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;

	char arr[100][100];
	for (int i { 0 }; i < n; ++i) {
		for (int j { 0 }; j < n; ++j) {
			if (i == n/2 or i == j or i == n - j - 1 or j == n/2)
				arr[i][j] = '*';

			else
				arr[i][j] = '.';
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
