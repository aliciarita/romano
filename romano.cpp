// Copyright 2021 <Alícia Rita Oliveira dos Reis>

#include "romano.hpp"
#include <string>

int main() {
  string s;
  int num;
  cin >> s;
  num = romanoParainteiro(s);
  cout << num << "\n";
  return 0;
}
