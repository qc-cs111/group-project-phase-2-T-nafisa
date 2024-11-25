#include <iostream>
using namespace std;

void inputArr(int h[], char c[], int size){
    	cout << "Please enter six non-negative integers." << endl;
    	for(int i=0; i<size; i++){
        	cout << "Integer #" << i << ": ";
        	cin >> h[i];
    	}
    	cout << endl;
    	cout << "Please enter six characters." << endl;
    	for(int i=0; i<size; i++){
        	cout << "Character " << i << ": ";
        	cin >> c[i];
    	}
	}
    
int main() {
	int size=6;
	int heights[size];
	char lebels[size];
    
	inputArr(heights, lebels, size);
	return 0;
}
