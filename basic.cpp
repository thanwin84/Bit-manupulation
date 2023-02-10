#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <queue>
#include<set>
#include<unordered_map>
#include<string>
#include<cmath>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

void changeKthBit(int number, int position) {
	int mask = (1 << position);
	int result = (number | mask);
	cout << result << endl;
}
void unsetKthBit(int number, int position) {
	int mask = ~(1 << position);
	int result = number & mask;
	cout << result << endl;
}
// if kth bit is 0, make it 1
// if kth bit is 1, make it 0
void toggleKthBit(int number, int position) {
	int mask = (1 << position);
	int result = number ^ mask;
	cout << result << endl;
}
// check if kth bit is on or off
void checkKthBit(int number, int position) {
	int mask = (1 << position);
	if ((number & mask) != 0) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}
void printRightmostSetBit(int number) {
	int rsb = (number & (-number));
	// getting the result in 8 bit representation 
	bitset<8> result(rsb);
	cout << result << endl;
}
int main() {
	changeKthBit(5, 1);
	unsetKthBit(7, 1);
	toggleKthBit(7, 1);
	checkKthBit(5, 1);
	printRightmostSetBit(18);
	
	return 0;
}
