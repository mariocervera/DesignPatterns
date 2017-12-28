/*
 * This header file declares the functions needed to transition to the Unlocked state.
 *
 * Author: Mario Cervera
 */
#ifndef UNLOCKED_H_
#define UNLOCKED_H_
#include "State.h"

/*
 * This function rearranges the function pointers of the state in order to simulate polymorphism.
 */
void Unlocked_transitionToUnlockedState(StatePointer state);

#endif /* UNLOCKED_H_ */
