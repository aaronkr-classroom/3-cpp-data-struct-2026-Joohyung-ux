#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<string> words;
    string str;

    cout << "단어를 입력하세요 (종료하려면 '종료' 입력): " << endl;

    // 1. 단어 입력받기
    while (cin >> str && str != "종료") {
        words.push_back(str);
    }

    if (words.empty()) {
        cout << "입력된 단어가 없습니다." << endl;
        return 0;
    }

    // 2. 최장/최단 단어 찾기 (초기값을 첫 번째 원소로 설정)
    string longest = words[0];
    string shortest = words[0];

    for (const string& w : words) {
        if (w.length() > longest.length()) {
            longest = w;
        }
        if (w.length() < shortest.length()) {
            shortest = w;
        }
    }

    // 3. 결과 출력
    cout << "\n--- 결과 분석 ---" << endl;
    cout << "입력된 총 단어 수: " << words.size() << "개" << endl;
    cout << "최장 단어: " << longest << " (" << longest.length() << "자)" << endl;
    cout << "최단 단어: " << shortest << " (" << shortest.length() << "자)" << endl;

    // 4. (보너스) 정렬하여 모든 단어 보여주기
    sort(words.begin(), words.end());
    cout << "정렬된 단어 목록: ";
    for (const string& w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}