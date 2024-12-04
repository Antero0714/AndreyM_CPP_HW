#include "../src/include/hw02.h"
#include <iostream>
#include <string>
#include <set>
//1
using namespace std;

string hw02(string input_str)
{
    set<char> simb_input_str;
    string str;
    for (auto itr = input_str.begin(); itr != input_str.end(); itr++) {
      if (input_str.find(*itr) == string::npos) {
        input_str.erase(itr); 
      }
    }

    return input_str;
}
