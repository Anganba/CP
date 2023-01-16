#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<int> myvector;
	myvector ={1,2,3};


	for (auto it = myvector.begin();
		it != myvector.end(); ++it)
		cout << ' ' << *it;
	return 0;
}