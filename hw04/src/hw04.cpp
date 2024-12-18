#include <hw04.h>
#include <iostream>
#include <algorithm> // Для std::copy
using namespace std;

std::size_t hw04(const int* input_array, std::size_t elem_count) {
  if (input_array == nullptr || elem_count < 1 || input_array[0] < 0) {
    return 0;
  }

  std::size_t sum = 0;
  int size_output_array = 1;
  int* p_output_array = new int[size_output_array]{};

  for (std::size_t i = 0; i < elem_count; i++) {
    if (i >= size_output_array) {
      size_output_array = i * 2; // Увеличиваем размер массива
      int* new_array = new int[size_output_array];
      copy(p_output_array, p_output_array + i, new_array); // Копируем только заполненные элементы
      delete[] p_output_array;
      p_output_array = new_array;
    }

    if (input_array[i] > 0) {
      sum += input_array[i];
      p_output_array[i] = input_array[i];
    }
    else {
      delete[] p_output_array; // Освобождаем память перед выходом
      return sum;
    }
  }

  delete[] p_output_array; // Освобождаем память перед возвратом
  return sum;
}