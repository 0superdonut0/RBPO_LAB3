module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task3;
namespace RBPO::Lab3::Task3
{
	double f3(const int n)
	{
		double res = 0;
		int i = 0;
		do {
			res += a(i);
			i++;
		} while (i <= n);
		return res;
	};
}