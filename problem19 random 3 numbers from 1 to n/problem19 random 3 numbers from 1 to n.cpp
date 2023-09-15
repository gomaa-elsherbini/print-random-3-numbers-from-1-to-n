#include <iostream>
#include <cstdlib>
using namespace std;



int getRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


int main()
{
	srand((unsigned)time(NULL));

	//print 3 random numbers

	cout << getRandomNumber(1, 1000)<<endl;
	//cout << getRandomNumber(1, 5)<<endl;
	//cout << getRandomNumber(1, 5)<<endl;



	return 0;
}