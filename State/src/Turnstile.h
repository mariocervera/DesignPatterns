/*
 * This header file defines the interface that the clients of the State Machine will use
 *
 * Author: Mario Cervera
 */
#ifndef TURNSTILE_H_
#define TURNSTILE_H_
#include "states/State.h"

/**
 * The State Machine object contains an identifier and a pointer to its current state
 */
typedef struct Turnstile {
	char* id;
	StatePointer currentState;
} Turnstile;

/*
 * Constructor
 */
Turnstile* Turnstile_create(char* id);

/*
 * Destructor
 */
void Turnstile_destroy(Turnstile* turnstile);

/*
 * Event handler function: coin
 */
void Turnstile_coin(Turnstile* turnstile);

/*
 * Event handler function: pass
 */
void Turnstile_pass(Turnstile* turnstile);

#endif /* TURNSTILE_H_ */
