/*
 * Implementation of the state-specific behavior of the Locked state.
 *
 * Author: Mario Cervera
 */
#include <stdio.h>
#include "State.h"
#include "Unlocked.h"

/*
 * Coin event implementation in the Locked state
 */
void Locked_coin(StatePointer state) {
	printf("Coin event in Locked state. Action: unlock\n");
	Unlocked_transitionToUnlockedState(state);
}

/*
 * This function updates the function pointers of the state object so that they point to the
 * functions of the Locked state.
 * This function always calls "State_initialize" first in order to reset the pointers to the
 * default implementations.
 */
void Locked_transitionToLockedState(StatePointer state) {
	State_initialize(state);
	state->coin = Locked_coin;
	printf("Current state: Locked\n");
}
