#include <stdlib.h>
#include <stdio.h>

#include "queue.h"

int main() {

	Queue *queue = unlimitedQueue();
	
	qPush(queue, 1);
	qPush(queue, 2);
	qTraverse(queue);
	printf("pop %d\n", qPop(queue));
	qPush(queue, 99);
	qTraverse(queue);
	return 0;
}
