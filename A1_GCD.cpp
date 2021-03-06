// Заданы два целых положительных числа a и b. Найти их наибольший общий делитель.

// Ввод: В первой строке входа задано число a, во второй - число b (1 ≤ a,b ≤ 10**9).

// Вывод: Одно число — наибольший общий делитель введённых чисел.

// E.g.: input: 26 44 -> output: 2

#include <iostream>
using namespace std;

int nod(int a, int b) {
	while (a != 0 && b != 0) {
	if (a > b)
    	a = a % b; 
    else 
    	b = b % a;
	}
	return a + b;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int a, b;
	cin >> a >> b;
	
	cout << nod(a, b) << '\n';
	return 0;
}
