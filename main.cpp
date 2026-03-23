#include <iostream>

struct _capacitor
{
	double *time;
	double *voltage;
	double *current;
	double C;
};
typedef struct _capacitor Capacitor;


int main()
{
	double deltaT = 1e-10;
	double finalT = 5e-6;
	double r = 1000.0;
	double c = 100e-12;
	double ioft = 1e-2;
	double vi = 10.0;
	double T = (finalT / deltaT);
	
	Capacitor *capacitor = new Capacitor;
	capacitor->C = c;
	capacitor->time = new double[T];
	capacitor->voltage = new double[T];
	capacitor-> current = new double[T];

	for(double i = 0; i < T; i++)
	{
		if (i % 200 == 0)
		{
			std::cout << "T = " << capacitor->time[i]
				  << " V = " << capacitor->voltage[i]
				  << " I = " << capacitor->current[i] << std::endL
		}	
	}	

	delete[] capacitor->time;
	delete[] capacitor->voltage;
	delete[] capacitor->current;

	delete capacitor;


	return 0;
}
