#include <iostream>

 using namespace std ;
  
  int main() {
  
  float avg ,s_avg = 0;
  int number_std;
  cout << "Pls Enter The Number Of Student :" ;
  cin >> number_std; 
  
  for(int i=0 ; i<number_std ; i++){
    cout <<"Pls Enter Student average :" ;
    cin >> avg ;
    s_avg = s_avg + avg ;
  }
    cout << "average Of this Class :" << s_avg / number_std ;
  
  return 0;
  
  }
