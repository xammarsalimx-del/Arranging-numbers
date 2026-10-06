#include <iostream>
using namespace std;
int main() {
	int size ;
	cout << "Enter the number of digits to be sorted : "<< endl;
	cin >> size  ;
	int count, x, i,* nums = new int [size];
	for (i = 0; i < size ;i++) {
		cout << "Enter the num "<< i+1 <<" : " << endl;
		cin >> nums [i]; 
	}
	for (count = 0;count < size  ; count ++) {
		for (i = count + 1; i < size ; i++) {
			if (nums[count] > nums[i]) {
				x= nums [count];
				nums [count]=nums [i];
				nums [i]=x;
			}
		}
	}
	cout << "Numbers Arranged : "<< endl;
	for ( int i= 0 ;i < size  ;i++) {
		cout << nums[i] << endl;
	}
	delete [] nums ;
	return 0;
}