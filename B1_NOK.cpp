// Заданы два целых положительных числа a и b. Найти их наименьшее общее кратное

// Ввод: В первой строке входа заданы два целых числа a и b (1 ≤ a,b ≤ 10**9).

// Вывод: Одно число — наименьшее целое положительное число, которое делится на оба введённых числа.

// E.g.: input: 26 44 -> output: 572

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	long long a, b, c, d;
	cin >> a >> b;
	c = a;
	d = b;
	while (a != 0 && b != 0) {
		if (a > b)
    		a = a % b; 
    	else 
    		b = b % a;
	}
	long long  nod = a + b;
	long long  nok = (c / nod) * d;
	cout << nok << '\n';
	return 0;
}
