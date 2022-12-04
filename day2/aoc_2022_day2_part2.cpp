#include <iostream>
using namespace std;

//A X for rock, B Y for paper, C Zfor scissors
//X for lose, Y for draw, Z for win

int main(){
	int total = 0;
	string oppMove, myMove, outcome;
	
	for (int i = 0; i < 2500; i++){
		cin >> oppMove >> outcome;
		
		//determine myMove
		//lose
		if (outcome == "X"){
			if (oppMove == "A"){myMove = "C";}
			else if (oppMove == "B"){myMove = "A";}
			else if (oppMove == "C"){myMove = "B";}
		} 
		else if (outcome == "Y"){
			myMove = oppMove;
			total += 3;
		} 
		else if (outcome == "Z"){
			total += 6;
			if (oppMove == "A"){myMove = "B";}
			else if (oppMove == "B"){myMove = "C";}
			else if (oppMove == "C"){myMove = "A";}
		}
		
		if (myMove == "A"){total += 1;}
		else if (myMove == "B"){total += 2;}
		else if (myMove == "C"){total += 3;}
	}
	cout << total;
	return 0;
}
