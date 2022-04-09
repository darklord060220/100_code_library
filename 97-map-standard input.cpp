#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main ()
{
  map<int,int> m1;
  vector<int> x;
int n;
cout<<"enter no of element of vector : ";
cin>>n;
cout<<"\n";
  for(int i=0;i<n;i++)
  { int p;
      cin>>p;
      x.push_back(p);
  }
  for(int i=0;i<x.size();i++)
  {
      cout<<x[i]<<"\t";
  }
/*
  //insert in map
  //1
  cout<<"\n";
  m1[1221] = 100;
  m1[21212] = 200;
  m1[100000] = 300;
*/
//2 counting frequency of numbers
for(int c : x)
  {
      m1[c]++;
  }
cout<<"\n";
  // show content: diffreent ways
  //1-only showing those no which come even times
  for (map<int,int>::iterator it=m1.begin(); it!=m1.end(); ++it)
  {
      if((it->second )%2==0)
   cout << it->first << " => " << it->second << '\n';
  }

  //2
   for (auto& y: m1) {
    cout << y.first << ": " << y.second << '\n';
  }
  return 0;
}
