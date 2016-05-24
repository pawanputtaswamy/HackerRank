using namespace std;
#include <iostream>
#include <vector>

void fib_iter(int n)
{
	int F[8] = {0};
	F[0] = 0;
	F[1] = 1;
	F[2] = 1;

	for (int i = 3; i < n; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
		cout << F[i] << ",";
	}

}

int fact_iter(int n)
{
	int F = 1;

	for (int i = 1; i <= n; i++)
	{
		F = F * i;
	}
	return F;
}

int fact_recur(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	else return n * fact_recur(n - 1);
}

/*
int main()
{
	//fib(8);
	cout << fact_recur(10) << endl;
	cout << fact_iter(10);
	getchar();
	return 0;
}
*/