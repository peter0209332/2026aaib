// week13-5a.cpp SOIT107_ADVANCE_009_C_C++
#include <iostream>
using namespace std;

int max_digit(int n)
{
    int ans = n % 10; // ъ程计讽﹍程
    while (n > 0) {
        if (n % 10 > ans) ans = n % 10; // 狦讽玡计ゑ ans 碞穝 ans
        n = n / 10; // 奔程计膥尿浪琩
    }
    return ans;
}
