/*
あなたは入力された文字列を縦に表示しようとしています。
文字列の長さ n と文字列 S が与えられるので改行区切りで出力してください。

入力例 1 の場合
5
Paiza
と入力されるので
P
a
i
z
a
と出力してください。
*/
#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;

    // 文字列の長さと文字列を入力
    std::cin >> n;
    std::cin >> s;

    // 文字列を縦に表示
    for (int i = 0; i < n; ++i) {
        std::cout << s[i] << std::endl;
    }

    return 0;
}