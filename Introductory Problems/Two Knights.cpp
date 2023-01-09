#include <iostream>
#include <vector>
 
using namespace std;
 
int n;
int64_t comb[10005];
 
int main()
{
 
	comb[1] = 0, comb[2] = 6, comb[3] = 28, comb[4] = 96;
	comb[5] = 252, comb[6] = 550, comb[7] = 1056;
 
	cin >> n;
	for (int64_t i = 1; i <= n; i++)
	{
		if (i > 7)
		{
			comb[i] += comb[i - 1];
			comb[i] -= (2*i - 1 - 5 - 4) * 4;
			comb[i] -= (4) * 3;
			comb[i] -= (5) * 2;
			comb[i] += (2*i - 1) * (2*i - 2)/2 - 2;
 
			comb[i] += (2*i - 1) * (i * i - 2*i + 1);
 
		}
		cout << comb[i] << endl;
	}
 
	return 0;
}
