


// Пусть функция f(k) равна минимальному простому делителю числа k. Найти сумму значений f(k) для всех k от 2 до N включительно.

// Ввод: Одно целое положительное число N (2 ≤ N ≤ 107).

// Вывод: Выведите одно целое число — ответ к задаче.

// E.g.: input: 50 -> output: 414

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int n = 0;
	cin >> n;
	vector<bool> p (n + 1, false);
	unsigned long long sum = 0;

    uint64_t d = 3;
    while (d <= n) {
        if (p[d] == false) sum += d;
        for (auto i = d * d; i < p.size(); i = i + d * 2) {
            if (p[i] == false) {
                p[i] = true;
                sum += d;
            }
        }
        d = d + 2;
    }

    sum = sum + (n % 2 == 0 ? n : (n - 1));
	cout << sum << '\n';
	return 0;
}
