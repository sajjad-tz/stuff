#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand ((unsigned) time (NULL));
  int random = 1 + (rand () % 100);

  int guess;
  cout << "Enter your guess: ";
  cin >> guess;
  
  if (guess == random) {
    cout << "Bravo!" << endl;
  } else if (guess < random) {
    cout << "Your guess is smaller than actual number." << endl;
  } else if (guess > random) {
    cout << "Your guess is greater than actual number." << endl;
  }
}
