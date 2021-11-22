module;
#include <cmath>;
module BPZ1901.Lepko.Lab3.Task4: f3;
import :a;
namespace RBPO::Lab3::Task4
{
	double f3(const int n)
	{
		double res = 0;
		int i = 0;
		while (i <= n)
		{
			res += a(i);
			i++;
		}
		return res;
	};
}