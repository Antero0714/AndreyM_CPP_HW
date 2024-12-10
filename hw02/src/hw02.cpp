#include "../src/include/hw02.h"
#include <iostream>
#include <string>
#include <set>
//1
using namespace std;

string hw02(string input_str)
{
    set<char> simb_input_str;
    for (auto itr = input_str.begin(); itr != input_str.end(); itr++) {
      if (simb_input_str.find(*itr) == simb_input_str.end()) {
        input_str.erase(itr);
      }
    }
// 6
    return input_str;
}
