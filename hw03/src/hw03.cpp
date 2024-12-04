#include "/home/andrey/Desktop/AndreyM_CPP_HW/hw03/src/include/hw03.h"
#include <cstring>
#include <string>
using namespace std;

void hw03(char* str, const char* pattern)
{
     const char* ptr_itr = pattern;
     char* first_ch = str+strlen(ptr_itr);
     char* last_ch = str+strlen(ptr_itr);

     bool isEqviv = true;
    for(char* str_itr = str; *str_itr != '\0'; str_itr++) {
      for(int i = 0; ptr_itr[i] != '\0'; i++) {
        if(*str_itr != *ptr_itr) {
          isEqviv = false;
          break;
        }
        if(isEqviv) {
          memmove(str_itr, first_ch, strlen(first_ch+1));
      }

  }

}
}