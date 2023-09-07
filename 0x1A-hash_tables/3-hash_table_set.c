#include "hash_tables.h"

/**
* hash_table_set -  adds an element to the hash table.
* @ht:  the hash table you want to add or update the
* @key: the key. key can not be an empty string
* @value: the value associated with the key. value must be
* duplicated. value can be an empty string
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *position, *head;

	if (strcmp(key, "") == 0)
		return (0);
	if (ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	position = ht->array[index];
	head = node_add_begin(&position, (char *)key, (char *)value);
	if (head == NULL)
		return (0);
	return (1);

}

/**
* node_add_begin - adds a new node to the chain
* @head: pointer to the head of the chain
* @key: the key
* @value: the value
* Return: pointer to the modified head
*/

hash_node_t *node_add_begin(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = key;
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);

}
