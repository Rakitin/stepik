#include <iostream>

int main() 
{
	double a { 0.0 };
	double b { 0.0 };
	double c { 0.0 };
	double d { 0.0 };
	double e { 0.0 };
	double f { 0.0 };

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	std::cin >> f;

	double dd = a*d - b*c;
	double dx = e*d - b*f;
	double dy = a*f - e*c;
	
	std::cout << dx/dd << " " << dy/dd << std::endl;

	return 0;
}
