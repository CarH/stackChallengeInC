#ifndef __STACK_H__
#define __STACK_H__
#include <limits.h>
#include <stdio.h>

// Max number of elements that the stack can have
#define MAX_SIZE 1000


struct Stack {
	// Stores the index of the top element of the stack. -1 means it is empty
	int top;

	// Stack to stores the integers
	int list[MAX_SIZE];	
};

typedef struct Stack STACK; 
STACK stack, minValues;

/**
 * Pushes an integer onto the stack
 * Complexity: O(1)
 * 
 * @param value the integer to be put onto the stack
 */
void push(int value);

/**
 * Retrieves the stack's top element if there is any element inserted, otherwise returns INT_MIN
 * to indicate that there is no element to return
 * Complexity: O(1)
 * 
 * @return int the stack's top element or INT_MIN if the stack is empty
 */
int pop();

/**
 * Retrieves the minValues stack's top element that corresponds to the minimum integer in the
 * stack at the current state
 * Complexity: O(1)
 * 
 * @return int minimum integer in minValues stack
 */
int min();

/**
 * Initializes the stacks's top counter to conform to the logic: top points aways to the top element
 * or is equals to -1 when the stack is empty
 * Complexity: O(1)
 */
void initializeStacks();

#endif