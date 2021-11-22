#include <cmath>;
export module BPZ1901.Lepko.Lab3.Task1;
namespace RBPO::Lab3::Task1
{
	export double f1(const double x, const double y)
	{
		return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	};
	export double f2(const double x)
	{
		return ((x >= 0) ? cos(2 * x) : 1 / (x * x + 1));

	};
	export double a(const int i)
	{
		return (pow(-1.0, i) * (1.0 + 3.0 * i)) / pow(3.0, i);
	};
	export double f3(const int n)
	{
		double res = 0;
		for (int i = 0; i <= n; i++)
		{
			res += a(i);
		}
		return res;
	};
	export double f4(const double eps)
	{
		double ress = 0;
		for (int i = 0; abs(a(i) - a(i-1)) <= eps; i++)
		{
			ress += a(i);
		}
		return ress;
	};
}