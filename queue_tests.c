#include <stdlib.h>
#include <stdio.h>

#include "queue.h"

int main() {

	Queue *queue = unlimitedQueue();
	
	qPush(queue, 1);

	qTraverse(queue);

	return 0;
}
