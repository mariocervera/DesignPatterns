/*
 * Implementation of the State Machine: the turnstile.
 *
 * Author: Mario Cervera
 */
#include <stdlib.h>
#include "Turnstile.h"
#include "states/State.h"
#include "states/Locked.h"

/*
 * Constructor
 */
Turnstile* Turnstile_create(char* identifier) {
	// Allocate memory for the turnstile object
	Turnstile* instance = malloc(sizeof(Turnstile));

	//Set the identifier
	instance->id = identifier;

	// Set the initial state (Locked)
	StatePointer state = malloc(sizeof(StatePointer));
	Locked_transitionToLockedState(state);
	instance->currentState = state;

	return instance;
}

/*
 * Destructor
 */
void Turnstile_destroy(Turnstile* turnstile) {
	free(turnstile);
}

/*
 * Event handler function: coin.
 * This function delegates to the current state of the turnstile.
 */
void Turnstile_coin(Turnstile* turnstile) {
	turnstile->currentState->coin(turnstile->currentState);
}

/*
 * Event handler function: pass.
 * This function delegates to the current state of the turnstile.
 */
void Turnstile_pass(Turnstile* turnstile) {
	turnstile->currentState->pass(turnstile->currentState);
}
