#include <iostream>
#include <stdlib.h>
/*Common Functions in <stdlib.h>:
Function	Purpose
rand()	    Generate random numbers
srand() 	Seed the random number generator
exit()	    Exit the program manually
abs()	    Absolute value of integer*/
#include <ctime>
/* Common Functions in <ctime>:
Function	Purpose
time(0) 	Get current time
ctime() 	Convert time_t to readable form
difftime()	Difference between two time values
clock()	    Processor time used by the program*/
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int number = (rand() % 100) + 1;
    /* i took mod because i wanna generate values
     less than 100 to get 100  i have to inckude +1 bcz 1000 % 100 = 0
      && 9999 % 100 = 99*/

    // first set guess to zero
    int guess = 0;
    do
    {
        cout << " Enter any number between 1 - 100 " << endl;
        cin >> guess;
        if (guess > number)
            cout << " Guess lower number ! " << endl;
        else if (guess < number)
            cout << " Guess higher number ! " << endl;
        else
            cout << " Congrats You Won the Game !" << endl;

    } while (guess != number);
    return 0;
}