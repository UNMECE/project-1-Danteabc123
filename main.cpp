#include <iostream>
#include <cmath>
struct _capacitor
{
	double *time;
	double *voltage;
	double current;
	double C;
};

typedef struct _capacitor Capacitor;

int main()
{
	const double e = std::exp(1.0);
	double dt = (1 * e) - 10;
       	double fT = (5 * e) - 6;
	int timestep = 50000;
	int R = 1;
	double C = (100 * e) - 12;
	double V = 10.0;

	for(int x = 0; x <= timestep; x++)
	{

	}
	return 0;
}
