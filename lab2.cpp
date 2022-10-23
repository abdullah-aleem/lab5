#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <sys/time.h>
using namespace std;


bool moveMin(vector<int> &in, vector<int> &out){
  int flag = true;
  int temp;

  
    for (int j = in.size()-1; j >0; j--) {
     
      if (in[j] < in[j - 1]){
       
        temp = in[j];
        in[j] = in[j - 1];
        in[j - 1] = temp;
        
      }
      else
      {

        break;
      }    
    };
  
    return true;
}
bool testMoveMin(){
  vector<int> temp,temp2;
  
  int dice;

  srand(time(0));
  dice = rand() % 100 + 1;
   for (int i = 0; i < 100000; i++) {

    temp.push_back(rand()%100+1);

    
  }

  sort(temp.begin(), temp.end());
  temp.push_back(101);
  temp2 = temp;
 

   sort(temp2.begin(),temp2.end());
   struct timeval start, end;

   // start timer.
   gettimeofday(&start, NULL);

   // unsync the I/O of C and C++.
   ios_base::sync_with_stdio(false);
   moveMin(temp, temp2);

   gettimeofday(&end, NULL);

   // Calculating total time taken by the program.
   double time_taken;

   time_taken = (end.tv_sec - start.tv_sec) * 1e6;
   time_taken = (time_taken + (end.tv_usec -
                               start.tv_usec)) *
                1e-6;

   cout << "Time taken by program is : " << fixed
        << time_taken;
   cout << " sec" << endl;
   if (temp == temp2) {
     return true;
  }
  return false;
}

int main() {
  

  cout << testMoveMin()<<endl;

  return 0;
  }