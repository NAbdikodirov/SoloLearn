You are making a program for a bus service.
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.

Sample Input:
126

Sample Output:
24

Explanation: The first bus will transport 50 passengers, leaving 126-50=76 in the station. The next one will leave 26 in the station, thus, 
the last bus will take all of the 26 passengers, having 50-26=24 seats left empty.

	
	
	
	//This program calculates the number of the passenger than a bus takes, and how many passengers left to be taken.
	
	
	#include <iostream>
	using namespace std;

		int main() {
    //your code goes here
    int pasNo;
    int remSeat;
    
    
    cin >> pasNo;
    remSeat = pasNo % 50;
    remSeat = 50 - remSeat;
    cout << remSeat;
    return 0;
}
