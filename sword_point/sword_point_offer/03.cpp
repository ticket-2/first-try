#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> documents;
int main()
{
	//TODO: ֻд�ڲ���Ҫ����
	unordered_map<int, bool> map;
	for (int j : documents)
	{
		if (map[j]) return j;
		map[j] = true;
	}
	return -1;
}