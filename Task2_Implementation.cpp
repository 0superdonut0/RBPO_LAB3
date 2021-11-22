#include <cmath>;
module BPZ1901.Lepko.Lab3.Task2;
namespace RBPO::Lab3::Task2
{
	double f1(const double x, const double y)
	{
		return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	};
	double f2(const double x)
	{
		if (x >= 0) return  cos(2 * x);
		else return 1 / (x * x + 1);
	};
	double a(const int i)
	{
		return (pow(-1.0, i) * (1.0 + 3.0 * i)) / pow(3.0, i);
	};
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
};