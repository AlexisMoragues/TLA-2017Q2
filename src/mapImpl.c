#include <stdlib.h>
#include <stdio.h>
#include "hashmap.h"
#include "mapImpl.h"

map_t mymap;
variable_struct_t* data;
int initialized;


void newData(){
    data = malloc(sizeof(variable_struct_t));
}

void newMap(){
    if(initialized){
        hashmap_free(mymap);
    }
    initialized = 1;
    mymap = hashmap_new();
    newData();
}


int putMap(char* key, int value){
    if(!initialized) newMap();
    data->key_string=key;
    data->value=value;
    return hashmap_put(mymap,data->key_string,data->value);
}

int getValueMap(char* key, int * value){
    if(value==NULL){
        return 	NOVALUE;
    }
    if(!initialized) return NOMAP;
    int error, type;
    error=hashmap_get(mymap,key,&type);
    if(error == MAP_OK){
        *value=type;
        return MAP_OK;
    }
    return MAP_MISSING;
}

int containsKeyMap(char* key){
    int a;
    return !getValueMap(key, &a);
}