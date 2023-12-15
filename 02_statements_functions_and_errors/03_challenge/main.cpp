//# チャレンジ3
//C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。`exponent` のデフォルト値は2で、`power` は `base` を `exponent` 回累乗した結果を返します。baseを3、exponentを4としてこの関数を呼び出してください。

#include <iostream>

int power(int base, int exponent);

int main(){
  std::cout << "Power is " << power(3, 4) << std::endl;
  return 0;
}

int power(int base, int exponent){
  if (exponent == 0) {
    return 1;
  } else {
    return base * power(base, exponent - 1);
  }
};
