#include<iostream>
using namespace std;

// This function returns the reversed version of the given number
int reverse(int n) {
	
    int reversed;
    while (abs(n) > 0) {
        int lastNum = n % 10; 
        reversed = reversed * 10 + lastNum;
        n /= 10;  
    } 
    
    if( !n > 0 ){	
	    return reversed;
	}
	else{
	    return -reversed;
	}  
}

int main(){
	
	int input;
	cout << "Input an integer: ";
	cin >> input;
	
	if(cin.fail()){
		cout << "Invalid input!" << endl;
	}
	else{
		int reversed = reverse(input);
		
		if(reversed == input){
			cout << "The number: " << input << " is palindrome." << endl; 
		}
		else{
			cout << "The number: " << input << " is NOT palindrome." << endl;
		}
	}
	
	system("pause");
	return 0;
}