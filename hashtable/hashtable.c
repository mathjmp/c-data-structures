#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

hashtable* new_hashtable(int capacity){

    hashtable *hashtable = (struct hashtable*) malloc(sizeof(hashtable));
    hashtable->capacity = get_prime(capacity);
    hashtable->array = (struct set*)malloc(capacity * sizeof(struct set));

    for (int index = 0; index < capacity; index++) {
        hashtable->array[index].key = 0;
        hashtable->array[index].data = 0;
    }

    return hashtable;
}

int hash(hashtable *hashtable, int key) {
    return (key % hashtable->capacity);
}

void insert(hashtable *hashtable, int key, int data) {

    int index = hash(hashtable, key);

    if (hashtable->array[index].data == 0) {
        hashtable->array[index].key = key;
        hashtable->array[index].data = data;
        hashtable->length += 1;
        printf("element %d inserted successfully at index %d\n", data, key);
        return;
    }

    if (hashtable->array[index].key == key) {
        hashtable->array[index].data = data;
        return;
    }

    printf("colision occurred");
}

void show(hashtable *hashtable) {

    set *array = hashtable->array;
    for (int index = 0; index < hashtable->length; index++) {
        printf("[%d] = [%d]\n", array[index].key, array[index].data);
    }
}

void delete(hashtable *hashtable, int key) {

    int index = hash(hashtable, key);

    if (hashtable->array[index].data == 0) {
        printf("the key %d does not exists\n", key);
        return;
    }

    hashtable->array[index].key = 0;
    hashtable->array[index].data = 0;
    hashtable->length -= 1;
    printf("key %d was removed successfully\n", key);
}

int check_prime(int number) {

    if (number == 1 || number == 0) {
        return 0;
    }

    for (int index = 2; index <= number / 2; index++) {
        if (number % index == 0) {
            return 0;
        }
    }

    return 1;
}

int get_prime(int number) {

    if (number % 2 == 0) {
        return number++;
    }

    while(!check_prime(number)) {
        number += 2;
    }

    return number;
}