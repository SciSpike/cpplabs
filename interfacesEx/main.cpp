#include "DoubleSidedPrinter.h"
#include "MyDoubleSidedPrinter.h"

template <class X, int howManyTimes>
void callConstructorManyTimes() {
	for (int i = 0; i < howManyTimes; i++) {
		X * x = new X;
		delete x;
	}
}


int main() {
	
	const int numberOfTimes = 100000;
	/*
	callConstructorManyTimes<DoubleSidedPrinter, numberOfTimes>();
	callConstructorManyTimes<MyDoubleSidedPrinter, numberOfTimes>();
	*/
	
	for (int i = 0; i < numberOfTimes; i++) {
		DoubleSidedPrinter * x = new DoubleSidedPrinter;
		delete x;
		MyDoubleSidedPrinter * y = new MyDoubleSidedPrinter;
		delete y;
	}
	
}