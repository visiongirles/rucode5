

// В данной задаче Вам необходимо найти для натурального числа a такое натуральное число x, не большее 10**9+9, что a*x - 1 делится на 10**9 + 9.

// Ввод: В первой строке записано число T, 1 ≤ T ≤ 10**5 - количество тестовых примеров. В каждой из следующих T строк записано натуральное число a, 1 ≤ a < 10**9 + 9.

// Вывод: Для каждого числа a выведите в отдельной строке одно число - ответ на задачу. Ответ не должен превышать 10**9+9.

// E.g.: input: 4
// 1                          1
// 2                          500000005
// 1000000007                 500000004
// 1000000008 -> output       1000000008






#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

const int64_t p = 1e9+9; 

unsigned long long f(unsigned long long a, unsigned long long n) {
    if (n == 0) return 1;
	if (n % 2 == 0) 
		return  f(a * a % p, n / 2) % p;
	else {
		 return a * f(a, n - 1) % p;
	}
}



int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int64_t requests = 0, x = 0;
    cin >> requests;
    vector<int64_t> a (requests, 0);
    for (int64_t i = 0; i < a.size(); i++) {
        cin >> a[i];
        cout << f(a[i], p - 2) << '\n';
    }

	return 0;
}
