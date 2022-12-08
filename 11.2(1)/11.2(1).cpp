#include <iostream>
using namespace std;

const unsigned int N = 10;

int main()
{
	bool fail = false;
	float A[N];
	for (int n = 0; n < N; n++)
	{
		do
		{
			fail = false;
			cout << "Enter a value for " << n + 1 << " array item: ";
			cin >> A[n];
			if (cin.fail())
			{
				cout << "\nIncorrect valye has been entered!" << endl << endl;
				fail = true;
			}
			cin.clear();
			cin.ignore();
		} while (fail);
	}
	cout << "\nAn array has been obtained: ";
	for (int n = 0; n < N; n++)
	{
		cout << A[n] << " ";
	}

	unsigned int eq_length[N], counter = 0, prev = 0;
	for (int n = 0; n < N; n++)
	{
		if (A[n] == A[prev])
			counter++;
		else
			counter = 1;
		eq_length[n] = counter;
		prev = n;
	}

	float max_val = eq_length[0];
	for (int i = 0; i < N; i++)
	{
		if (max_val < eq_length[i])
		{
			max_val = eq_length[i];
		}
	}
	cout << "\n\nMaximum number of arranged array elements: " << max_val << endl;
}