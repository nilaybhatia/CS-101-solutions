//program that tries to find out how many times A[0] 
//repeats in an array of 5 integers
//Something wrong here.. fix it
#include <iostream>
using namespace std;

int main() {

int A[5];
int i, count;

 cout << "Input 5 integers:\n";
 i=0;
 count = 1;
 while (i<5) { cin >> A[i]; i++;}
 
 i=1;
 while (i<5) { 
	if (A[i]==A[0]) 
		count=count+1;
	i++;
 }
 cout << A[0] << " repeats " << count << " times\n";

}
//Consider the inputs 2, 4, 6, 8, 10--all distinct. It'll print 2 repeats 1 times. We should add : if(count==1) cout<<"Number does not repeat";
