#include <bits/stdc++.h>
using namespace std;

int main(){
	string elf1, elf2, elf3;
	int total = 0;
	
	for (int i = 0; i < 300; i = i+3){
		cin >> elf1 >> elf2 >> elf3;
		for (char c : elf1){
			//duplicate char is found
			if (elf2.find(c) != std::string::npos && elf3.find(c) != std::string::npos) {
				//condition if char is lowercase
				if (islower(c)){
					total += int(c) - 96;
				}
				//condition if char is uppercase
				else {
					total += int(c) - 38;
				}
				break;
			}
		}
	}
	cout << total;
	return 0;
}

