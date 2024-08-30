#include <iostream>
#include "add.h"
#include "mathe.h"

using namespace std;
using namespace math::arithmetic;

void printMessage(){

	cout<<"hello world"<<endl;
}

int main(){

   int sum=IntegerOperations::add(77,55
   );
	printMessage();
	cout<<sum;
}
