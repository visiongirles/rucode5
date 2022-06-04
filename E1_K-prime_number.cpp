// Нужно уметь отвечать на запрос вида “k-е по величине простое число”.

// Ввод: а первой строке целое число N не более 10**4 — количество запросов. Далее собственно запросы. Каждый запрос — целое число от 1 до 10**5.

// Вывод: Для каждого запроса выведите соответствующее простое число.

// E.g.: input: 4
//              1 2 3 100000 -> output: 2 3 5 1299709



#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	uint64_t requests = 0;
	cin >> requests;
    vector<uint64_t> r (requests, 0);
    for (uint64_t index = 0; index < requests; index++) cin >> r[index];
    uint64_t max = r[0]; 
    for (uint64_t index = 1; index < requests; index++) {
        if (r[index] > max) max = r[index];
    }

    uint64_t number = max;
    if (number == 1) cout << 2;
    uint64_t max_number = number * 13;
    vector<bool> prime (max_number, true);
    prime[0] = prime[1] = false;

    for (uint64_t i = 2; i < max_number; i++) {
        if (!prime[i]) continue;
        for (uint64_t j = i * i; j < max_number; j += i) prime[j] = false;
    }

    for (uint64_t i = 0; i < requests; i++) {
        uint64_t count = 0;
        for (uint64_t j = 0; j <max_number; j++) {
            if (prime[j]) count += 1;
            if (count == r[i]) {
                cout << j << ' ';
                break;
            }
        }        
    }	
	return 0;
}
