//Q#11.Calculate the sum of even numbers from 1 to 100 using do-while loop.
#include <iostream>
using namespace std;
int main(){
int num = 0 ;
int sum = 0 ;
do{
	if ( num%2 == 0 ){
		sum = sum + num ;
}
		num++ ;
} 
while ( num <= 100 ) ;
	cout << "The sum of first " << num - 1 << " even numbers is: " << sum << endl ;
return 0;
}