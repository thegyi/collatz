#include <crypto++/integer.h>
#include <iostream>

void CollatzAlgorithm(CryptoPP::Integer number) {
  CryptoPP::Integer startNum = number;
  while (number >= startNum) {
    if (number.IsEven()) {
      number = number.DividedBy(CryptoPP::Integer::Two());
    } else {
      number = number.Times(3).Plus(CryptoPP::Integer::One());
    }
  }
}

int main() {
  CryptoPP::Integer num = 5;
  while (true) {
    CollatzAlgorithm(num);
    std::cout << num << "\n";
    num = num.Plus(CryptoPP::Integer::One());
  }
  return 0;
}
