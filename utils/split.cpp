#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(string &s, char delimiter = ' ')
{
  vector<string> elems;
  stringstream ss(s);
  string item;
  while (getline(ss, item, delimiter))
  {
    if (!item.empty())
    {
      elems.push_back(item);
    }
  }
  return elems;
}