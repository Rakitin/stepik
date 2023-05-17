#include <iostream>
#include <cmath>

int main() 
{
	int p { 0 };
	int x { 0 };
	int y { 0 };
	std::cin >> p;
	std::cin >> x;
	std::cin >> y;
	
	int t = x*100 + y;
	t += (t * p)/100;
	std::cout << t/100 << " " << t%100 << std::endl;
	return 0;
}
