/*
 * Implementation of the state-specific behavior of the Unlocked state.
 *
 * Author: Mario Cervera
 */
#include <stdio.h>
#include "State.h"
#include "Locked.h"

/*
 * Pass event implementation in the Unlocked state
 */
void Unlocked_pass(StatePointer state) {
	printf("Pass event in Unlocked state. Action: lock\n");
	Locked_transitionToLockedState(state);
}

/*
 * This function updates the function pointers of the state object so that they point to the
 * functions of the Unlocked state.
 * This function always calls "State_initialize" first in order to reset the pointers to the
 * default implementations.
 */
void Unlocked_transitionToUnlockedState(StatePointer state) {
	State_initialize(state);
	state->pass = Unlocked_pass;
	printf("Current state: Unlocked\n");
}

