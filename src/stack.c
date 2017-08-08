#include "stack.h"

void push(int value) {
	if (stack.top < MAX_SIZE) {
		stack.list[++stack.top] = value;

		if (minValues.top < 0 || value <= minValues.list[minValues.top]) {
			minValues.list[++minValues.top] = value;
		}
	}
	else {
		printf("Can not push more than %d elements into the stack. %d will not be pushed.\n", MAX_SIZE, value);
	}
}

int pop() {
	if (stack.top >= 0) {
		int top = stack.list[stack.top];
		stack.top--;

		if (top == minValues.list[minValues.top]) {
			minValues.top--;
		}
		return top;
	}
	return INT_MIN;
}

int min() {
	if (minValues.top >= 0){
		return minValues.list[minValues.top];
	}
	return INT_MIN;
}

void initializeStacks() {
	stack.top = -1;
	minValues.top = -1;
}