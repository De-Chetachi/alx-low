#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: hash_table
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int  i, size;
	hash_node_t *head, *temp;
	int first = 1;

	if (ht != NULL)
	{
		printf("{");
		size = ht->size;
		i = 0;
		while (i < size)
		{
			head = ht->array[i];
			temp = head;
			while (temp)
			{
				if (first)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					first = 0;
				}
				else
					printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
			i++;
		}
		printf("}\n");
	}
}
