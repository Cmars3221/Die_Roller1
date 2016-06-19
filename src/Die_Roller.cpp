//============================================================================
// Name        : Die_Roller.cpp
// Author      : Christopher Mars
// Version     :1.3
// Copyright   : Your copyright notice
// Description : Die_Roller guessing game.
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int cast() {

	// the die roll is based on a numerical limit range that we set forth
	// we use the rand( ) and time( ) to generate a random value.

	srand(static_cast<unsigned int>(time(0))); // seeding a random value

	int randomizednumber = rand(); //generates random number


	int die_cast = (randomizednumber % 10) + 1;  // get a number between 1-10.

	return die_cast;

}

int main() {

	int number_picked;
	bool exit;
	int count = 1;


	while (!exit) {

		cout << "Pick a number, my friend: " << flush;
		cin >> number_picked;
		cout << "You picked: " << number_picked << endl;

		cout << "The computer picks a: " << cast() <<endl;

		int die_cast = cast();

		if(count >=5){
			 cout<< "Sorry buddy...you had 5 chances..!"<<endl;
			 exit = true;
		}
		else if(die_cast == number_picked) {
			cout << " Nice, great guess. You win!"<<endl;
			exit = true;
		}
		else {
			cout << "We'll you're not a telepath. Try again!" << endl;
			count +=1;
			cout<<endl;
		}

	}

	return 0;
}
