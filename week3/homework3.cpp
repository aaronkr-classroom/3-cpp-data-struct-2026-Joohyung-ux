#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	char word;

	cout << "문장을 입력하시오: ";
	getline(cin, str);
	cout << "찾고자 하는 문자를 입력하세요: ";
	cin >> word;
	
	int  count = 0;
	for (char c : str) {
		if (c == word) {
			count++;
		}
	}
	cout <<  word << "'문자는 문자열에서 " << count << "번 등장합니다." << endl;

	return 0;
}