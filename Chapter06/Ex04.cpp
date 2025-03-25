#include <iostream>
#include <vector>
#include <string>
using namespace std;

class name_value{
  string name = "";
  int value = 0;
  vector<name_value> v;
public:
  void getter();
  void displ();
  name_value() = default;
  name_value(string n, int v): name(n), value(v) {};
};

int main()
{
  cout << "Enter name and a value: \n" << "Terminate the session with \"NoName\" and \"0\"\n";
  name_value nv;
  
  nv.getter();
  nv.displ();
  
  return 0;
}

void name_value::getter()
{
  while(true)
  {
  cin >> name;
  cin >> value;
  if(name == "NoName" && value == 0) break;
  v.emplace_back(name, value);
  }
}

void name_value::displ()
{
  for(auto nv:v)
  {
  cout << nv.name << " = " << nv.value << '\n';
  }
}
