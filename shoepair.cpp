#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  map<int, int>l,r;
  
  // intintMap l,r;
  int cap, size, res = 0;
  char foot;
  cin >> cap;
  while (cap--) {
    cin >> size >> foot;
    if (foot == 'L')
      l[size]++;
    else
      r[size]++;
  }
  for (auto i : l) {
    for (auto j : r)
      if (i.first == j.first)
        res += min(i.second, j.second);
  }
  cout << res << endl;
  
  // intintMap::iterator pos;
  // intintMap::iterator pos2;
  for(auto pos = l.begin(); pos != l.end(); ++pos){
   cout << "lkey: " << pos->first << endl;
   cout << "lvalue: " << pos->second << endl;
  }
  
  for(auto pos2 = r.begin(); pos2 != r.end(); ++pos2){
   cout << "rkey: " << pos2->first << endl;
   cout << "rvalue: " << pos2->second << endl;
  }

  return 0;
}