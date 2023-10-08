#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int k, N, i;
	double S;
	cout << "N = "; cin >> N;

	// While цикл
	S = 0;
	k = N;
	i = 1;
	while (i <= k)
	{
		S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
		i++;
	}
	cout << "While: " << S << endl;

	// Do-while цикл
	S = 0;
	i = 1;
	do {
		S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
		i++;
	} while (i <= k);
	cout << "Do-while: " << S << endl;

	// For цикл (++)
	S = 0;
	for (i = 1; i <= k; i++)
	{
		S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
	}
	cout << "For (++): " << S << endl;

	// For цикл (--)
	S = 0;
	for (i = k; i >= 1; i--)
	{
		S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
	}
	cout << "For (--): " << S << endl;

	return 0;
}