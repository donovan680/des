#pragma once

#include <stdlib.h>

#include "key.h"


/**
 * des_encrypt
 *
 * given a key and an input encrypts the input using the des algorithm
 * the encrypted input will be saved into input
 */
extern void des_encrypt(key key, uint64_t *input, size_t len);

/**
 * des_descrypt
 *
 * given a key and an encrypted input try and decrypt using the des algorithm
 * the decrypted input will be saved into input
 */
extern void des_decrypt(key key, uint64_t *input, size_t len);
