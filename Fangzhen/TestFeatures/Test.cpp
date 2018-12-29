#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>

#include <algorithm>    // Ëã·¨
#include <numeric>    // Ëã·¨
#include <functional>    // Ëã·¨

#include <iostream>
using namespace std;

class test
{
public:
	int age;
	double salary;
};

int main()
{
	string s;
	vector<test> mmm;
	
	map<int, string> mapStudent;
	pair<int, string> m_pair(222,"firststring");
	pair<map<int, string>::iterator, bool> Insert_Pair;
	mapStudent.insert(m_pair);
	mapStudent.insert(pair<int, string>(9, "secondstring"));
	map<int, string>::iterator iter = mapStudent.begin();
	cout << "map[0]" << mapStudent[0] << endl;
	cout << "map[1]" << mapStudent[9] << endl;

	map<string, string> mstringmap;
	mstringmap.insert(pair<string, string>("abc", "kkk"));
	mstringmap.insert(pair<string, string>("jjj", "kpp"));

	cout << mstringmap["abc"] << endl;
	cout << mstringmap["jjj"] << endl;

	cout << mstringmap["hhh"] << endl;

	cout << m_pair.first << endl;
	cout << m_pair.second << endl;
	//if (mapStudent[2] == false)
	//
	//	cout << "bingo!" << endl;
	//}
	system("pause");

}
