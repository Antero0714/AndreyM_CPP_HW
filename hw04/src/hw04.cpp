#include <hw04.h>
#include <iostream>
using namespace std;

std::size_t hw04(const int* input_array, std::size_t elem_count) {
  if (input_array[0] < 0 || input_array == nullptr || elem_count < 1) {
    return 0;
  }

  std::size_t sum = 0;
  int size_output_array = 1;
  int* p_output_array = new int[size_output_array]{};

  for(int i = 0; i < elem_count; i++) {
    if(i > size_output_array) {
      int* new_array = new int[size_output_array];
      copy(p_output_array, p_output_array + size_output_array, new_array);
      size_output_array = i*2;//5
      delete[] p_output_array;
      p_output_array = new_array;
    }

    if(input_array[i] > 0) {
      sum += input_array[i];
      p_output_array[i] = input_array[i];
    }
    else {
      delete[] p_output_array;
      p_output_array = nullptr;
      return sum;
    }
  }
  delete[] p_output_array;
  p_output_array = nullptr;
  return sum;
}






/*using namespace std;

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
}*/
