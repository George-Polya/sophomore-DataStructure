#pragma once
#define Q_size 4
#define boolean unsigned char
#define true 1
#define false 0

typedef char Element;
char QueueArray[Q_size];

void AddQ(char item);
Element DeleteQ();
void Q_isFull();
void Q_isEmpty();
void Queue_show();

int rear = 0;
int front = 0;