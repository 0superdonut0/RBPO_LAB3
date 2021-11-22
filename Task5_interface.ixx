module;
#include <cmath>;
export module BPZ1901.Lepko.Lab3.Task5;
namespace RBPO::Lab3::Task5
{
	export double f1(const double x, const double y);
	export double f2(const double x);
	export double f3(const int n);
	export double f4(const double eps);
}
module :private;
namespace RBPO::Lab3::Task5
{
	double f1(const double x, const double y)
	{
		return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	};
	double f2(const double x)
	{
		return ((x >= 0) ? cos(2 * x) : 1 / (x * x + 1));

	};
	double a(const int i)
	{
		return (pow(-1.0, i) * (1.0 + 3.0 * i)) / pow(3.0, i);
	};
	double f3(const int n)
	{
		double res = 0;
		for (int i = 0; i <= n; i++)
		{
			res += a(i);
		}
		return res;
	};
	double f4(const double eps)
	{
		double ress = 0;
		for (int i = 0; abs(a(i) - a(i - 1)) <= eps; i++)
		{
			ress += a(i);
		}
		return ress;
	};
}