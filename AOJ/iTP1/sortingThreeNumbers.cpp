#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int nums[3] = {a, b, c};
  int nums_length = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < nums_length - 1; i++)
  {
    for (int j = 0; j < nums_length - 1 - i; j++)
    {
      if (nums[j] > nums[j + 1])
      {
        swap(nums[j], nums[j + 1]);
      }
    }
  }
  cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
}