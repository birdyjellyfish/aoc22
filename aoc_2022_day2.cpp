#include <iostream>
using namespace std;

//A for rock, B for paper, C for scissors

int main(){
	int total = 0;
	string oppMove, myMove;
	
	for (int i = 0; i < 2500; i++){
		cin >> oppMove >> myMove;
		//my rock against opp scissors
		if ((myMove == "X" && oppMove == "C") || (myMove == "Y" && oppMove == "A") || (myMove == "Z" && oppMove == "B")){
			total += 6;
		}
		//draw 
		else if ((myMove == "X" && oppMove == "A") || (myMove == "Y" && oppMove == "B") || (myMove == "Z" && oppMove == "C")){
			total += 3;
		}
		
		if (myMove == "X"){total += 1;}
		if (myMove == "Y"){total += 2;}
		if (myMove == "Z"){total += 3;}
	}
	cout << total;
	return 0;
}
		
