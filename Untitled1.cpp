#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	bool prime = true;

	cout << "Enter a natural number: ";
	cin >> n;

    //initial number is 2
        if(n<2){
            cout << "Error";
        }else{
	for(i=2; i <= n/2; i++){
		if(n % i == 0){
			prime = false;
			break;
		}
	}

	if (prime){
		cout << "This is a prime number";
	}
		else{
        cout << "This is a not prime number";
		}
        }
	return 0;
}
