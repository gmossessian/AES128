/*
 * aes128.h
 *
 *  Created on: Sep 22, 2015
 *      Author: gmoss
 */

#pragma once

	/*plaintext <in> MUST be correctly padded to a multiple of 16, or else behavior is undefined.*/
//unsigned char *AES128Encode(unsigned char * in, int len, unsigned char * key);
//unsigned char *AES128Decode(unsigned char * in, int len, unsigned char * key);
//unsigned char *AES128EncodeCBC(unsigned char * in, int len, unsigned char * key, unsigned char * IV);
//unsigned char *AES128DecodeCBC(unsigned char * in, int len, unsigned char * key, unsigned char * IV);

//in and key must both be 16-byte blocks.
unsigned char *AES128Encode(unsigned char *in, unsigned char *key);
unsigned char *AES128Decode(unsigned char *in, unsigned char *key);


