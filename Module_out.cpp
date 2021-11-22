#include <iostream>;
import BPZ1901.Lepko.Lab3.Task1;
import BPZ1901.Lepko.Lab3.Task2;
import BPZ1901.Lepko.Lab3.Task3;
import BPZ1901.Lepko.Lab3.Task4;
import BPZ1901.Lepko.Lab3.Task5;

int main() {
	using namespace std;
	double x; double y; int i; int n; double eps;
	int Task;
	cout << "Enter your data:" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "i = "; cin >> i;
	cout << "n = "; cin >> n;
	cout << "eps = "; cin >> eps;

	cout << " Please, choose number of the Task, what you want to output:" << endl;
	cout <<"Variants: "<<"	Task 1\n" << "		Task 2\n" << "		Task 3\n" << "		Task 4\n" << "		Task 5\n";
	cout << "Task "; cin >> Task;
	if (Task <= 0) return 0;
	switch (Task) {
	case(1):
			cout << endl << "Task 1:" << endl;
			cout << "	f(" << x << "," << y << ") = " << RBPO::Lab3::Task1::f1(x, y) << endl;
			cout << "	f2(" << x << ") = " << RBPO::Lab3::Task1::f2(x) << endl;
			cout << "	a(" << i << ") = " << RBPO::Lab3::Task1::a(i) << endl;
			cout << "	f3(" << n << ") = " << RBPO::Lab3::Task1::f3(n) << endl;
			cout << "	f4(" << eps << ") = " << RBPO::Lab3::Task1::f4(eps) << endl;
	break;
	case(2):
			cout << endl << "Task 2:" << endl;
			cout << "	f(" << x << "," << y << ") = " << RBPO::Lab3::Task2::f1(x, y) << endl;
			cout << "	f2(" << x << ") = " << RBPO::Lab3::Task2::f2(x) << endl;
			cout << "	f3(" << n << ") = " << RBPO::Lab3::Task2::f3(n) << endl;
			cout << "	f4(" << eps << ") = " << RBPO::Lab3::Task2::f4(eps) << endl;
	break;
	case(3):
			cout << endl << "Task 3:" << endl;
			cout << "	f(" << x << "," << y << ") = " << RBPO::Lab3::Task3::f1(x, y) << endl;
			cout << "	f2(" << x << ") = " << RBPO::Lab3::Task3::f2(x) << endl;
			cout << "	a(" << i << ") = " << RBPO::Lab3::Task3::a(i) << endl;
			cout << "	f3(" << n << ") = " << RBPO::Lab3::Task3::f3(n) << endl;
			cout << "	f4(" << eps << ") = " << RBPO::Lab3::Task3::f4(eps) << endl;
			break;
	case(4):
			cout << endl << "Task 4:" << endl;
			cout << "	f(" << x << "," << y << ") = " << RBPO::Lab3::Task4::f1(x, y) << endl;
			cout << "	f2(" << x << ") = " << RBPO::Lab3::Task4::f2(x) << endl;
			cout << "	f3(" << n << ") = " << RBPO::Lab3::Task4::f3(n) << endl;
			cout << "	f4(" << eps << ") = " << RBPO::Lab3::Task4::f4(eps) << endl;
			break;
	case(5):
		cout << endl << "Task 5:" << endl;
		cout << "	f(" << x << "," << y << ") = " << RBPO::Lab3::Task4::f1(x, y) << endl;
		cout << "	f2(" << x << ") = " << RBPO::Lab3::Task4::f2(x) << endl;
		cout << "	f3(" << n << ") = " << RBPO::Lab3::Task4::f3(n) << endl;
		cout << "	f4(" << eps << ") = " << RBPO::Lab3::Task4::f4(eps) << endl;
		break;
		cout << "End of Task. Thanks for using." << endl;
	}
}