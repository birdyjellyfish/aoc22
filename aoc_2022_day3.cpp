#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	string firstHalf;
	string secondHalf;
	int total = 0;
	int halfSize;
	
	for (int i = 0; i < 300; i++){
		cin >> str;
		halfSize = str.length() / 2;
		//cout << halfSize*2 << ' ' << halfSize << endl;
		firstHalf = str.substr(0, halfSize);
		secondHalf = str.substr(halfSize, halfSize);
		//cout << firstHalf << endl;
		//cout << secondHalf << endl;
		for (char c : firstHalf){
			//duplicate char is found
			if (secondHalf.find(c) != std::string::npos) {
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
