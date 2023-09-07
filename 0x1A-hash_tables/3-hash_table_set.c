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
	hash_node_t *head;

	if (ht == NULL || value == NULL || key == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	head = node_add_begin(ht->array, index, (char *)key, (char *)value);
	if (head == NULL)
		return (0);
	return (1);

}

/**
* node_add_begin - adds a new node to the chain
* @head: pointer to the head of the chain
* @index: index
* @key: the key
* @value: the value
* Return: pointer to the modified head
*/

hash_node_t *node_add_begin(hash_node_t **head, unsigned long int index,
		char *key, char *value)
{
	hash_node_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (head[index] == NULL)
		head[index] = new_node;
	else
	{
		temp = head[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->value);
				free(new_node->key);
				free(new_node);
				return (head[index]);
			}
			temp = temp->next;
		}
		new_node->next = head[index];
		head[index] = new_node;
	}
	return (head[index]);

}
