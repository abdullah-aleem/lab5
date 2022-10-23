#include <iostream>
using namespace std;
int dice;

int main() { 
  srand(time(0)); 
  cout<<"how many time you want to throw dice"<<endl;
  cin >> dice;
  for(int i=0;i<dice;i++) {
    cout << (rand() % 6) + 1 << "   ";
  }
}