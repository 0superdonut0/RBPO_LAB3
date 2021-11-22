module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task4: f4;
import :a;
namespace RBPO::Lab3::Task4
{
	double f4(const double eps)
	{
		double ress = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) <= eps)
		{
			ress += a(i);
			i++;
		}
		return ress;
	};
}