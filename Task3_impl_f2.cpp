module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task3;
namespace RBPO::Lab3::Task3
{
	double f2(const double x)
	{
		return ((x >= 0) ? cos(2 * x) : 1 / (x * x + 1));
	};
}