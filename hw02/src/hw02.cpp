#include "../src/include/hw02.h"
#include <iostream>
#include <string>
#include <set>
//1
using namespace std;

string hw02(const string str) {
  std::string result;

  for (char c : str) {
    if (result.find(c) == std::string::npos) {
      result += c;
    }
  }

  return result;
}