#ifndef HASH_TABLE_H
#define HASH_TABLE_H

typedef struct set {
    int key;
    int data;
} set;

typedef struct hashtable {
    set *array;
    int capacity;
    int length;
} hashtable;

hashtable* new_hashtable(int capacity);
void insert(hashtable*, int key, int data);
void delete(hashtable*, int key);
void show(hashtable*);
int hash(hashtable*, int key);
int check_prime(int number);
int get_prime(int number);

#endif