#include <bits/stdc++.h>
using namespace std;

int main(){
	//int max_elf = 0;
	int max_sum = 0;
	int curr_sum = 0;
	//int curr_elf = 1;
	string input;
	
	for (int i = 0; i < 2248; i++){
		getline(cin, input);
		//new elf
		if (input == ""){
			if (curr_sum > max_sum){
				//max_elf = curr_elf;
				max_sum = curr_sum;
			}
			curr_sum = 0;
			//curr_elf++;
		} 
		else curr_sum += stoi(input);
	}
	cout << max_sum;
	return 0;
}
