#ifndef LIST_H
#define LIST_H

#define MAX_NODES 100

typedef struct node {
    int data;
    struct node* next;
} node;

Graph* create_graph(int num_vertices);
void initialize_graph(Graph* graph);
void read_graph_from_file(Graph* graph, const char* filename);
void display_graph(const Graph* graph);
void display_vertex_degrees(const Graph* graph);
int is_connected(const Graph* graph);
void depth_first_search(const Graph* graph, int vertex, int* visited);
void find_components(const Graph* graph);
int are_adjacent(const Graph* graph, int vertex1, int vertex2);

#endif