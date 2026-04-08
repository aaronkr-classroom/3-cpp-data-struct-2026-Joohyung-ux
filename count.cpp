#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;   

int main(void) {
    vector<string> words;
    string str;
    cout << "단어를 입력하세요: " << endl;

	//1.단어 입력받기
    cin >> str;

    //2.단어를 알파벳 순으로 정렬
	sort(str.begin(), str.end());

	//3.단어에서 각 알파벳이 몇 번 나오는지 세기
	cout << "단어 등장횟수 결과: " << endl;
    int count = 1;
	for (size_t i = 1; i < str.size(); ++i) {
        if(str[i] == str[i-1]) {
            count++;
        } else {
            cout << str[i-1] << ": " << count << endl;
            count = 1; //카운트 초기화
        }
    }
    return 0;

}