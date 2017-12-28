/*
 ========================================================================================
 Author      : Mario Cervera
 Description : a test client for a State Machine implemented following the State pattern
 ========================================================================================
 */
#include "Turnstile.h"

int main(void) {

	Turnstile* turnstile = Turnstile_create("test");

	Turnstile_pass(turnstile);
	Turnstile_coin(turnstile);
	Turnstile_coin(turnstile);
	Turnstile_pass(turnstile);

	Turnstile_destroy(turnstile);

	return 0;
}
