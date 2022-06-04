
// Выведите все числа в диапазоне от 2 до N, у которых есть хотя бы три различных простых делителя.

// Ввод:Вводится одно натуральное число N <=1e7.

// Вывод: Выведите через пробел в возрастающем порядке все искомые числа.

// E.g.: input: 50 -> output: 30 42
input: 24 -> output (empty)



#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int n = 0;
	cin >> n;
	vector<int> p (n + 1, 0);
	for (int i = 2; i < p.size(); i++) {
		if (p[i] == 0) {
        for (int j = i + i; j < p.size(); j += i) {
        	p[j]++;
        	}
        } else if (p[i] >= 3) {
        	cout << i << ' ';
        }
	}
	
	return 0;
}
