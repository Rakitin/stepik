#include <iostream>

int main() 
{
	int n { 0 };
	std::cin >> n;

	int arr[100][100];
	for (int i { 0 }; i < n; ++i) {
		for (int j { 0 }; j < n; ++j) {
			std::cin >> arr[i][j];
		}
	}

	int k { 0 };
	std::cin >> k;
	
	for (int i { std::abs(k) }, j { 0 }; i < n; ++i, ++j) {
		std::cout << ((k >= 0) ? arr[i][j] : arr[j][i]) << " ";
	}
	std::cout << std::endl;

	return 0;
}
