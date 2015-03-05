#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int TrailingZeroes(int num){
	int count=0;
	int fivePower;

	for (int i = 1; ; ++i)
	{
		fivePower = pow(5,i);

		if ((num / fivePower) == 0){
			break;
		}

		else{
			count += (num / fivePower);
		}
	}
}

int main(int argc, char const *argv[])
{
	int number;

	cin>>number;

	cout<<TrailingZeroes(number);
	/* code */
	return 0;
}