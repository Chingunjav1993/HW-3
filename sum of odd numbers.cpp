#include <iostream>
using namespace std;

int main() {
	
	int a, sum = 0;
	cout << " Please enter number : ";
	cin >> a;
	
      
    
    for ( int b = 1; b <= a; b++ ){
    	    
    	    if ( b % 2 != 0 ){
    	    	
    	    	sum += b;
			}    		    	
	}
	
	
	cout << " Sum of odd numbers are : "<< sum;
	
	
	
	return 0;
}

