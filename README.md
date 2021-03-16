# caesar
This is a Caesar Cipher, a project from the Harvard's CS50x course (2020), entirely written in C.

It is a command line program that encripts messages by "rotating" each letter by K positions.

At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime.

Example: suppose you wanna encript the word Hello using a key, K, of 3, the encripted message will be Khoor.

Usage:  $ ./caesar K
	
  	$ ./caesar 1
        plaintext:  hello
      	ciphertext: ifmmp
