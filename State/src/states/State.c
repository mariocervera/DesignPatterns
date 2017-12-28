/*
 * Implementation of default functions for state objects
 *
 * Author: Mario Cervera
 */
#include <stdio.h>
#include "State.h"

/*
 * Default implementation of coin event
 */
void defaultCoin(StatePointer state) {
	printf("A coin event has not been handled\n");
}

/*
 * Default implementation of pass event
 */
void defaultPass(StatePointer state) {
	printf("A pass event has not been handled\n");
}

/*
 * Initializer.
 * This function connects the function pointers to the default implementations of the events.
 */
void State_initialize(StatePointer state) {
	state->coin = defaultCoin;
	state->pass = defaultPass;
}
