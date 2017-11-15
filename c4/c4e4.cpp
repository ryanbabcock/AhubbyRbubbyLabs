#include <iostream>

using namespace std;

char yes_or_no;
int guess = 0;

void guesser(int max, int min, int we_are_on){
		cin >> yes_or_no;
		if (yes_or_no == 'y')
			max=we_are_on;
		else if (yes_or_no == 'n')
			min=we_are_on;
		else
			cout << "Bad Input!\n";
		//cout << "Max: "<<max << " Min: " << min << " Running Guess: " << we_are_on;
		we_are_on= min + ((max-min)/2 );//(integer division alway truncates, rememeber this)
		if (max - min <= 1){
			guess = we_are_on;
			return;
		}
		cout << "\nIs your number less than " << we_are_on << "? y/n: ";
		guesser(max, min, we_are_on);
}

int main() {
	cout << "Is your number less than 50? y/n: ";
	guesser(101, 1, 50);
	cout << "\nYour number is " << guess;
	return 0;
}
