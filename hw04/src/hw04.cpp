#include <hw04.h>
#include <iostream>
using namespace std;

std::size_t hw04(const int* input_array, std::size_t elem_count)
{
  int* out_data = new int[1];
  size_t out_size = 0;
  int sum = 0;
  if (input_array == nullptr || elem_count == 0) {
    return 0;
  }
  for (std::size_t i = 0; i < elem_count; i++) {
    if (input_array[i] < 0) {
      break;
    }


    int* new_out_data = new int[out_size + 1];
    for (std::size_t j = 0; j < out_size; j++) {
      new_out_data[j] = out_data[j];
    }
    new_out_data[out_size] = input_array[i];
    delete[] out_data;
    out_data = new_out_data;
    out_size++;
    sum += input_array[i];
  }
  delete[] out_data;
  return sum;
}
