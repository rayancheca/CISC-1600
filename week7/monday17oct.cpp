/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{  
  srand(time(0));  // Initialize random number generator.
 
  cout<<"Random numbers generated between 1 and 10:"<<endl;
  for(int i=0;i<10;i++)
      cout << 1+(rand() % 8) + 1<<" ";
  return 0;
}
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
   int max;
   max = 100; //set the upper bound to generate the random number
   srand(time(0));
   cout << "The random number is: "<<rand()%max;
}