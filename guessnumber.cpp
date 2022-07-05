#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  cout << "Welcome to my guessing number game!" << endl;
  int chances;
  cout << "How many chances you want? ";
  cin >> chances;
  
  srand ((unsigned) time (NULL));
  int random = 1 + (rand() % 100);
  
  for (int i = 0; i < chances; i++) {
    int guess;
    cout << "\nEnter your guess between 1 to 100: ";
    cin >> guess;
      
    if (guess == random) {
      cout << "Bravo!" << endl;
      return 0;
    } else if (guess < random) {
      cout << "Your guess is smaller than actual number." << endl;
    } else if (guess > random) {
      cout << "Your guess is greater than actual number." << endl;
    }
  }
  
  return 0;
}
