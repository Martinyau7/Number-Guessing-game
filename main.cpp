#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));

    cout << "I want to play play a little game..." << endl;
    cout << "Guess a number between 1 through 6" << endl;

    // takes a random number and stores a random number from 1-6 in x.
    int x = 1+(rand()%5);
    float guess;

    // user inputs the guessed number
    for (int i = 0; i < 1000 ; i++){
         cin >> guess;
    if (x == guess)
    {
        cout << "Congratulations! You guessed right!" << endl;
        return 0;
    }
    if (x < guess)
    {
        cout << "try little less" << endl;
    }
    else{
        cout << "try little more" << endl;
    }
    }

}
