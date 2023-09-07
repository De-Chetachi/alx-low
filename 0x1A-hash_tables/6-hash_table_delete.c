#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table.
* @ht: the hash table
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int  i, size;
	hash_node_t *head, *temp, *next;

	if (ht)
	{
		size = ht->size;
		i = 0;
		while (i < size)
		{
			head = ht->array[i];
			temp = head;
			while (temp)
			{
				next = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = next;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
