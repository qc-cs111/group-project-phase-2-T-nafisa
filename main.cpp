#include <iostream>
using namespace std;

// Function prototypes
void swap(int h[], char c[], int a, int b);
void printChart(int h[], char c[], int cap);

int main() {
	// Test case 1
	int heights1[] = {3, 1, 4, 1, 5};
	char labels1[] = {'a', 'b', 'c', 'd', 'e'};
	const int SIZE1 = 5;

	cout << "Test Case 1 - Original Arrays:" << endl;
	for (int i = 0; i < SIZE1; i++) {
    	cout << heights1[i] << " " << labels1[i] << endl;
	}

	// Testing printChart for Test Case 1
	cout << "\nTest Case 1 - Bar Chart:" << endl;
	printChart(heights1, labels1, SIZE1);

	// Testing swap for Test Case 1
	swap(heights1, labels1, 1, 3);
	cout << "\nTest Case 1 - After swap(1, 3):" << endl;
	for (int i = 0; i < SIZE1; i++) {
    	cout << heights1[i] << " " << labels1[i] << endl;
	}

	// Test case 2
	int heights2[] = {2, 6, 5, 3, 7};
	char labels2[] = {'x', 'y', 'z', 'w', 'v'};
	const int SIZE2 = 5;

	cout << "\nTest Case 2 - Original Arrays:" << endl;
	for (int i = 0; i < SIZE2; i++) {
    	cout << heights2[i] << " " << labels2[i] << endl;
	}

	// Testing printChart for Test Case 2
	cout << "\nTest Case 2 - Bar Chart:" << endl;
	printChart(heights2, labels2, SIZE2);

	// Testing swap for Test Case 2
	swap(heights2, labels2, 0, 4);
	cout << "\nTest Case 2 - After swap(0, 4):" << endl;
	for (int i = 0; i < SIZE2; i++) {
    	cout << heights2[i] << " " << labels2[i] << endl;
	}

	return 0;
}

// Function to swap elements in both arrays
void swap(int h[], char c[], int a, int b) {
	int tempH = h[a];
	h[a] = h[b];
	h[b] = tempH;

	char tempC = c[a];
	c[a] = c[b];
	c[b] = tempC;
}

// Function to print the bar chart
void printChart(int h[], char c[], int cap) {
	// Find the maximum height
	int maxHeight = 0;
	for (int i = 0; i < cap; i++) {
    	if (h[i] > maxHeight) {
        	maxHeight = h[i];
    	}
	}

	// Print the chart row by row
	for (int row = maxHeight; row > 0; row--) {
    	for (int col = 0; col < cap; col++) {
        	if (h[col] >= row) {
            	cout << c[col];
        	} else {
            	cout << " ";
        	}
    	}
    	cout << endl;
	}
}
