module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task3;
namespace RBPO::Lab3::Task3
{
	double f4(const double eps)
	{
		double ress = 0;
		int i = 0;
		do
		{ 
			ress += a(i);
			i++;
		} while (abs(a(i) - a(i - 1)) <= eps);
		return ress;
	};
}