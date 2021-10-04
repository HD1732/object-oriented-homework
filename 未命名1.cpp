#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<string>fruits;
	int i;
	string str;
	for (i = 0; i < 3; i++) {
		cin >> str;
		fruits.push_back(str);
		cout << fruits[i] << endl;
	}
	sort(fruits.begin(), fruits.end());
	for (i = 0; i < fruits.size(); i++) {
		cout << fruits[i] << endl;
	}

}
