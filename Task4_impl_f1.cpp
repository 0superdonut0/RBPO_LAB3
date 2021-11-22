module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task4: f1;
namespace RBPO::Lab3::Task4
{
	double f1(const double x, const double y)
	{
		return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	};
}