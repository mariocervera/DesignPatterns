/*
 * This header file declares the functions needed to transition to the Locked state.
 *
 * Author: Mario Cervera
 */
#ifndef LOCKED_H_
#define LOCKED_H_
#include "State.h"

/*
 * This function rearranges the function pointers of the state in order to simulate polymorphism.
 */
void Locked_transitionToLockedState(StatePointer state);

#endif /* LOCKED_H_ */
