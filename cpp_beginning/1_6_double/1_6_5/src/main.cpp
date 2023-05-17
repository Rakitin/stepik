#include <iostream>
#include <cmath>

int main() 
{
	int p { 0 };
	int x { 0 };
	int y { 0 };
	int k { 0 };
	std::cin >> p;
	std::cin >> x;
	std::cin >> y;
	std::cin >> k;
	
	int total = x*100 + y;
	while (k--) {
		total += (total * p)/100;
	}
	std::cout << total/100 << " " << total%100 << std::endl;
	return 0;
}
