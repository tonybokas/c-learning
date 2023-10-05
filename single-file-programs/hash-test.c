#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "openssl/include/openssl/evp.h"

void hash_text (unsigned char dest[], char *text, char *salt);
void assign_hash (char [], unsigned char []);

int main (void) {

	char text[] = "password";
	char salt[] = "12345678";
	unsigned char hash_u[32];
	char hash_s[65] = "";

	hash_text (hash_u, text, salt);
	assign_hash (hash_s, hash_u);

	printf ("Hash as a string: %s\n", hash_s);
}

void hash_text (unsigned char dest[], char *text, char *salt) {

	EVP_MD_CTX *context = EVP_MD_CTX_new ();
	EVP_DigestInit (context, EVP_sha3_256 ());

	size_t text_l = strlen (text);
	size_t salt_l = strlen (salt);
	char h[text_l + salt_l + 1];

	// PENDING: Issue with stpcpy on MSYS2. Check on Linux and possibly change:
	mempcpy (mempcpy (h, text, text_l), salt, salt_l);

	size_t i = sizeof (h);

	EVP_DigestUpdate (context, h, i);
	EVP_DigestFinal (context, dest, NULL);
	EVP_MD_CTX_free (context);
}

void assign_hash (char dest[], unsigned char hash_u[]) {

	char hash_s[65];

	for (int h = 0, i = 0; h < 32; h++, i += 2)
		sprintf (&hash_s[i], "%02x", hash_u[h]);

	printf ("Hash as a string: %s\n", hash_s);

	memcpy (dest, hash_s, 64);
}