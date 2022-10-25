#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data of a linked list.
 * @head: Pointer to the head of linked list.
 * Return: if list is empty -0 else sum of data in list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);
}
