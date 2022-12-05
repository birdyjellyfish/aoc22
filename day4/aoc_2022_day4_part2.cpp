#include <bits/stdc++.h>
using namespace std;

void splitComma(string str, string* elf1, string* elf2){
	int delimIndex = str.find(',');
	int len = str.length();
	*elf1 = str.substr(0, delimIndex);
	*elf2 = str.substr(delimIndex + 1, len - delimIndex - 1);
}

void splitDash(string str, int* elfLower, int* elfUpper){
	int delimIndex = str.find('-');
	int len = str.length();
	*elfLower = stoi(str.substr(0, delimIndex));
	*elfUpper = stoi(str.substr(delimIndex + 1, len - delimIndex - 1));
}

int main(){
	string pair, elf1, elf2;
	int count = 0;
	int elf1Lower, elf1Upper, elf2Lower, elf2Upper; //lower annd upper limits
	for (int i = 0; i < 1000; i++){
		cin >> pair;
		//split into elf1 and elf2
		splitComma(pair, &elf1, &elf2);
		splitDash(elf1, &elf1Lower, &elf1Upper);
		splitDash(elf2, &elf2Lower, &elf2Upper);
		
		if ((elf1Lower <= elf2Lower && elf2Lower <= elf1Upper) ||
			(elf1Lower <= elf2Upper && elf2Upper <= elf1Upper) ||
			(elf2Lower <= elf1Lower && elf1Lower <= elf2Upper) ||
			(elf2Lower <= elf1Upper && elf1Upper <= elf2Upper)){
				count += 1;
		}
	}
	cout << count;
	return 0;
}
