#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool moveMin(vector<int> &in, vector<int> &out){
  int flag = true;
  int temp;
  for (int i = 0;i<in.size();i++){

    for (int j = in.size()-1; j >0; j--) {
     
      if (in[j] < in[j - 1]){
       
        temp = in[j];
        in[j] = in[j - 1];
        in[j - 1] = temp;
        
      }
    }
}
return true;
}
bool testMoveMin(){
  vector<int> temp,temp2;
  
  int dice;

  srand(time(0));
  dice = rand() % 100 + 1;
   for (int i = 0; i < 5; i++) {

    temp.push_back(rand()%100+1);

    
  }

  sort(temp.begin(), temp.end());
  temp.push_back(rand() % 100 + 1);
  temp2 = temp;
 

   sort(temp2.begin(),temp2.end());
   cout << (temp == temp2) << endl;

   moveMin(temp, temp2);

   if (temp == temp2) {
     return true;
  }
  return false;
}

int main() { cout << testMoveMin(); }