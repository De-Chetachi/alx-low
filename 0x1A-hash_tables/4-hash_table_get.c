#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key.
* @ht: hash table
* @key: the key
* Return: the value associated with the element, or NULL if key couldn’t
* be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *head, *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
