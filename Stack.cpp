
#include <valarray>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void error (string message);

const int SIZE = 20;

struct Stack {
valarray<char> data = valarray<char> (20);  // using valarray instead of a normal one
  int  size;
};


Stack create() {  // a function that returns a new empty stack
  Stack s;
  s.size = 0;
  return s;
}

char pop(Stack& s) {   // delete the last char in the array and print the new one
  if (s.size == 0) error("Underflow");
  return s.data[--(s.size)];
}

void push(Stack& s, char v) {   // add a new char to the array
  if (s.size == SIZE) error("Overflow");
  s.data[s.size++] = v;
}

void error (string message) {    // print an error message if there is any
	cout << "\n" << message << "\n";
	exit (1);
}
void clear(Stack& s){  // clear the stack and set the size to 0
(s.data).resize(0);
s.size = 0;
}
bool isEmpty(Stack& s){   // test if the stack is empty or not
if (s.size == 0){
    return true;
}
else {
    return false;
}
}
int getsize(Stack& s){   // return the size of the stack
    return s.size;
}

int main () {
	Stack stack = create();
	push (stack, 'a');
	push (stack, 'b');
	push (stack, 'c');
	cout << "Size of the stack : "<< getsize(stack)<< endl;
	cout << pop(stack) << " ";
	cout << pop(stack) << " ";
	cout << pop(stack) << endl;

	clear(stack);
	cout << getsize(stack)<< "   (size after clear function)"<< endl;
	cout << isEmpty(stack)<< "    (empty or not)"<< endl;


}
