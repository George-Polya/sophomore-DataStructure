#pragma once
#define MAX_VERTICES 100

typedef struct node* nodeptr;
typedef struct node {
	int vertex;
	nodeptr link;
}node;

nodeptr adj[MAX_VERTICES];
int visited[MAX_VERTICES];

nodeptr queue;

void insert_edge(int v, int w);
void build_simple_graph();
void DFS(int v);
void addq(int e);
int deleteq();
void BFS(int v);