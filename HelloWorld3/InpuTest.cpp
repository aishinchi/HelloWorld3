#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> v1;
	string word;
	while (cin >> word)
	{
		v1.push_back(word);
	}
	int num;
	num = v1.size();
	for (int i = 0; i < num; ++i)
		cout << v1[num-1-i]<<" ";
	cout << endl;
	return 0;
}