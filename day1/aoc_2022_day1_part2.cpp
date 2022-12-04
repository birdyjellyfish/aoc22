#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> elfSums = {0};
	string input;
	
	//take in input
	for (int i = 0; i < 2248; i++){
		getline(cin, input);
		//new elf
		if (input == ""){
			elfSums.push_back(0);
		}
		else {
			elfSums[elfSums.size()-1] += stoi(input);
		}
	}
	//sort the vector in descending order
	sort(elfSums.begin(), elfSums.end(), greater<int>());

	//ouput the sum of the top 3 elfs
	cout << elfSums[0] + elfSums[1] + elfSums[2];
	
	return 0;
}
	
