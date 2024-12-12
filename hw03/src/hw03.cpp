#include "/home/andrey/Desktop/AndreyM_CPP_HW/hw03/src/include/hw03.h"
#include <cstring>
#include <string>
using namespace std;

void hw03(char *str, const char *pattern) {
  string str1(str);
  size_t finder = str1.find(pattern);

  while (finder != std::string::npos) {
    str1.erase(finder, strlen(pattern));
    finder = str1.find(pattern);
  }

  strncpy(str, str1.c_str(), str1.size() + 1);
}
//1