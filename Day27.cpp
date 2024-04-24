#include <iostream>
#include <vector>
using namespace std;

int main()
{
  //todo 42.Trapping Rain Water leet_code - hard
  vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
  int n = height.size(), water = 0;
  int left_max = 0, right_max = 0, max_height = height[0], index = 0;

  //* find maximum height of building
  for (int i = 1; i < n; i++)
  {
    if (max_height < height[i])
    {
      max_height = height[i];
      index = i;
    }
  }

  //* left part
  for (int i = 0; i < index; i++)
  {
    if (left_max > height[i])
      water += left_max - height[i];
    else
      left_max = height[i];
  }
  //* right part
  for (int i = n - 1; i > index; i--)
  {
    if (right_max > height[i])
      water += right_max - height[i];
    else
      right_max = height[i];
  }
  cout << "Total units of water : " << water;
}