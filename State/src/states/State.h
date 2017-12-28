/*
 * This header file defines the interface of the objects that encapsulate state-specific behavior
 *
 * Author: Mario Cervera
 */
#ifndef STATE_H_
#define STATE_H_

typedef struct State* StatePointer;

/*
 * Event function pointers
 */
typedef void (*Coin)(StatePointer);
typedef void (*Pass)(StatePointer);

/**
 * Virtual table of the State object.
 * It contains the pointers to the functions that will change at runtime to simulate polymorphism.
 */
typedef struct State {
	Coin coin;
	Pass pass;
} State;

/*
 * Initializer of State objects.
 */
void State_initialize(StatePointer state);

#endif /* STATE_H_ */
