#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	cout << "Welcome to Blackjack!\n" 
	<< "How many players? (1-7): ";
	int number_of_players;
	cin >> number_of_players;
	vector<string> players(0);
	for (int i=0; i < number_of_players; ++i){
		cout << "Player " << i << ": ";
		players.push_back (cin);
	}
return 0;
}