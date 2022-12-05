//I'll be using a vector of deques here, but vector and stack can also be used
//push and pop operations from the front
//test case:
//deque<char> stack1 = {'N', 'Z'}
//deque<char> stack2 = {'D', 'C', 'M'}
//deque<char> stack3 = {'P'}
//vector<deque> stacks = {stack1, stack2, stack3}

#include <bits/stdc++.h>
using namespace std;

//func that decodes the action into numbers
void movement(string action, int* crateNum, int* start, int* end){
	//the following indexes is where the word from and to are in
	//the action string provided
	int len = action.length();
	int fromIndex = action.find("from");
	int toIndex = action.find("to");
	*crateNum =  stoi(action.substr(5, fromIndex - 5));
	*start = stoi(action.substr(fromIndex + 5, toIndex - fromIndex - 5));
	*end = stoi(action.substr(toIndex + 3, len - toIndex - 3));
}

int main(){
	int crateNum, start, end;
	string action;
	
	deque<char> stack1 = {'N', 'H', 'S', 'J', 'F', 'W', 'T', 'D'};
	deque<char> stack2 = {'G', 'B', 'N', 'T', 'Q', 'P', 'R', 'H'};
	deque<char> stack3 = {'V', 'Q', 'L'};
	deque<char> stack4 = {'Q', 'R', 'W', 'S', 'B', 'N'};
	deque<char> stack5 = {'B', 'M', 'V', 'T', 'F', 'D', 'N'};
	deque<char> stack6 = {'R', 'T', 'H', 'V', 'B', 'D', 'M'};
	deque<char> stack7 = {'J', 'Q', 'B', 'D'};
	deque<char> stack8 = {'Q', 'H', 'Z', 'R', 'V', 'J', 'N', 'D'};
	deque<char> stack9 = {'S', 'M', 'H', 'N', 'B'};
	vector<deque<char>> stacks = {stack1, stack2, stack3, stack4, stack5,
								  stack6, stack7, stack8, stack9};
	
	for (int i = 0; i < 502; i++){
		getline(cin, action);
		movement(action, &crateNum, &start, &end);
		for (int j = 0; j < crateNum; j++){
			stacks[end-1].push_front(stacks[start-1].front()); //transfer crate
			stacks[start-1].pop_front(); //remove transferred crate
		}
	}
	cout << stacks[0].front() << stacks[1].front() << stacks[2].front();
	cout << stacks[3].front() << stacks[4].front() << stacks[5].front();
	cout << stacks[6].front() << stacks[7].front() << stacks[8].front();
	
	return 0;
}
