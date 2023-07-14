/*
Paizaさんはある事件について調査していて、事件発生日を調べたところ和暦で表示された文書が見つかりました。
西暦に直して今から何年前の出来事なのか計算しようとしましたが、その和暦が何年から始まったのかど忘れしてしまいました。

和暦が昭和または平成で与えられるので、Paizaさんの代わりに和暦を西暦に戻すプログラムを作成し、西暦で言うと何年の出来事なのか出力してください。

ただし、昭和は1926年から、平成は1989年から始まります。
*/

#include <iostream>
#include <string>

int convertToWesternYear(char era, int year)
{
    int westernYear;

    if (era == 'S')
    { // 昭和の場合
        westernYear = 1925 + year;
    }
    else if (era == 'H')
    { // 平成の場合
        westernYear = 1988 + year;
    }
    else
    {
        std::cout << "無効な和暦の入力です。" << std::endl;
        return 0;
    }

    return westernYear;
}
int main()
{
    char era {};
    int year {};

    std::cin >> era;
    std::cin >> year;

    int westernYear = convertToWesternYear(era, year);
    if (westernYear != 0)
    {
        std::cout << westernYear << std::endl;
    }

    return 0;
}

