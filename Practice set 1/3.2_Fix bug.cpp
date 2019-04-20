#include <iostream>
using namespace std;
int main () {
int n,i;
float sum1,sum2,sum;
sum1=0;
sum2=0;
sum=0;
cout << "How many terms?";
cin >> n;
i=0;
---------------------***---------------
while((i<=n) && (i%2==0)){            
sum1 = sum1 + (1/(float)(2*i+1.0));
i++;
}
while((i<=n) && (i%2==1)){
sum2 = sum2 - (1/(float)(2*i+1.0));
i++;
}
------------------***-------------------
<Replace above block by the one below>
-----------------------------------------
while(i<=n){
if(i%2==0)
 sum1 = sum1 + (1/(float)(2*i+1.0));
else if (i%2==1)
  sum2 = sum2 - (1/(float)(2*i+1.0));
i++;
}
------------------------------------
sum= sum1+ sum2;
cout << "The value Of Pi is" << 4*sum << endl;
return(0);
}
