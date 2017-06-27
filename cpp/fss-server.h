#ifndef FSS_SERVER_H
#define FSS_SERVER_H

#include "fss-common.h"
#include <cmath>

// Initializes server with information from the client, namely aes_keys for PRF and numBits in input domain
void initializeServer(Fss* f, AES_KEY* aes_keys, uint32_t numBits);

// Run FSS given key on input x
mpz_class evaluateEq(Fss* f, ServerKeyEq *k, uint64_t x);

#endif