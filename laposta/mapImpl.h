//Based on Pete Warden's map implementation. 

#ifndef __TLAMAPIMPL_H__
#define __TLAMAPIMPL_H__

#define NOMAP -4	//there is no map defined
#define NOVALUE -5 	//there is no value defined

typedef struct
{
    char* key_string;
    int value;
} variable_struct_t;

/*
 * Creates and resets the map if there was any 
 */
 void newMap();

/*
 * Put an element to the hashmap. Return 0 if ok or -1 if full.
 */
int putMap(char* key, int value);

/*
 * Get an element from the hashmap. Return 0 if ok or -3 if there is no such key in the map.
 */
int getValueMap(char* key, int * value);

/*
 * Return 1 if the map contains the key 0 if not.
 */
int containsKeyMap(char* key);


#endif
