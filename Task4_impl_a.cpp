module;
#include <cmath>;
module  BPZ1901.Lepko.Lab3.Task4: a;
namespace RBPO::Lab3::Task4
{
	double a(const int i)
	{
		return (pow(-1.0, i) * (1.0 + 3.0 * i)) / pow(3.0, i);
	};
}