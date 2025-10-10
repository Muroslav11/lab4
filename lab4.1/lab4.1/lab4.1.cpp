#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double P;
	
	cout << "N = "; cin >> N;

	// 1) while
	P = 1;
	i = N;
	while (i <= 16)
	{
		P *= (1.0 * i * N) / (i * i + N * N);
		i++;
	}
	cout << P << endl;

	// 2) do while
	P = 1;
	i = N;
	do {
		P *= (1.0 * i * N) / (i * i + N * N);
		i++;
	} while (i <= 16);
	cout << P << endl;

	// 3) for з i++
	P = 1;
	for (i = N; i <= 16; i++)
	{
		P *= (1.0 * i * N) / (i * i + N * N);
	}
	cout << P << endl;

	// 4) for з i--
	P = 1;
	for (i = 16; i >= N; i--)
	{
		P *= (1.0 * i * N) / (i * i + N * N);
	}
	cout << P << endl;
	return 0;
}
