#include <iostream>
using namespace std;
int main () {
int i, largest, second_largest, n;
int a[n];
cout<<"How many elements in array?";
cin>>n;
for(i=0; i<n; i++) cin>>a[i];
if(a[0]>=a[1]){
  largest=a[0];
  second_largest=a[1];
}
else{
  largest=a[1];
  second_largest=a[0];
}
for(i=2; i<n; i++){
  if(a[i]>largest){
    second_largest=largest;
    largest=a[i];
  }
  else if(a[i]>second_largest){
    second_largest=a[i];
  }
}
cout<<"2nd largest is "<<second_largest;
return(0);
}
