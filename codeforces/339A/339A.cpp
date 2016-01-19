#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int bucket[3] = {0, 0, 0};
	char sum[105];
	int ap = 0;

	cin >> sum;
	for(int i=0 ; i<strlen(sum) ; i+=2)
	{
		bucket[sum[i] - '1'] ++;
	}

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<bucket[i] ; j++ )
		{
			sum[ap] = i + '1';
			ap += 2;
		}
	}

	cout << sum;
}
