// Недописана фукнция
// ссылка на лекцию https://www.youtube.com/watch?v=Jz_6YGFCpZs
// ссылка на разбор https://www.youtube.com/watch?v=aNzG2k6sZC8

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct BigInt {
public:
    BigInt() {
        number.resize(1);
        number[0] = 0;
    }
    BigInt(string s) {
        // for int i = 0; i < s.lenth(); i++ digit = s[i]
        for (auto digit: s) {
            number.push_back(digit - '0');
        }
        reverse(number.begin(), number.end());
    }

    void write_reversed() const {
        for (auto digit: number) cout << digit;
        cout << '\n';
    }

    void write() const {
        for (int i = number.size() - 1; i >= 0; i--) cout << number[i];
        cout << '\n';
    }

    BigInt operator + (BigInt &a) {
        vector<int> result;
        int carry = 0;
        for (int i = 0; i < min(a.number.size(), this->number.size()), i++) {
            int cur_sum = carry + a.number[i] + this->number[i];
            result.push_back(cur_sum % 10);
            carry = cur_sum / 10;
        }
        for (int i = 0; i < min(a.number.size(), this->number.size()), i++) {
            if (a.number.size() > this->number.size()) {
                int cur_sum = carry + a.number[i] + this->number[i];
                result.push_back(cur_sum % 10);
                carry = cur_sum / 10;
            }
        }

    }

private:
    vector<int> number;
};

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    BigInt a("1256");
    a.write_reversed();
    a.write();

	return 0;
}
