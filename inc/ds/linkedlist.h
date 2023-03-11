#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int value;
	struct Node *next;
} node;

node *createLL(int value)
{
	node firstNode;
	firstNode.value = value;
	firstNode.next = NULL;

	node *first = (node *)malloc(sizeof(node));
	*first = firstNode;

	return first;
}

node *appendLL(node *current, int value)
{
	node nextNode;
	nextNode.value = value;
	nextNode.next = NULL;

	node *next = (node *)malloc(sizeof(node));
	*next = nextNode;

	current->next = next;
	return next;
}

void printLL(node *ll)
{
	while (1)
	{
		printf("[ %d | %p ]", ll->value, ll);
		if (ll->next == NULL)
		{
			printf("\n");
			break;
		}
		printf(" ->\n");
		ll = ll->next;
	}
}

void destroyLL(node *ll)
{
	int end = 1;
	node *next;
	while (end)
	{
		if (ll->next == NULL) end = 0;
		else next = ll->next;

		free(ll);
		ll = next;
	}
}
