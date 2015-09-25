/*
 * Copyright SciSpike
 *
 * This file test the algorithms
 */

// Disable the warnings from microsoft
#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <functional>
#include <stack>
#include <queue>
#include <iostream.h>
using namespace std;

void stackTest() {
	stack<int> stack;
          stack.push( 1 );
	stack.push( 2 );
	stack.push( 3 );

	   // should print out 3 2 1 
	while ( !stack.empty() ) {
	   cout << stack.top() << " ";
	   stack.pop();
	}
	cout << endl;
}

void queueTest() {
	queue<int> aQueue;
	aQueue.push( 1 );
	aQueue.push( 2 );
	aQueue.push( 3 );

	   // should print out 1 2 3 
	while ( !aQueue.empty() ) {
		cout << aQueue.front() << " ";
		aQueue.pop();
	}
	cout << endl;
}

void priorityQueueCheck() {
	priority_queue<int> aQueue;
	aQueue.push( 2 );
	aQueue.push( 3 );
	aQueue.push( 1 );

	   // should print out 3 2 1 
	while ( !aQueue.empty() ) {
		cout << aQueue.top() << " ";
		aQueue.pop();
	}
	cout << endl;
}

int main() {
	stackTest();
	queueTest();
	priorityQueueCheck();
	return 0;
}
