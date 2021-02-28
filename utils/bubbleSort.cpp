#include <algorithm>

using namespace std;

void bubbleSort(int array[], int array_size)
{
  for (int i = 0; i < array_size - 1; i++)
  {
    for (int j = 0; j < array_size - 1 - i; j++)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[j + 1]);
      }
    }
  }
}
