#include "dijkstra.h"
#include "graph.h"

int main(int argc, char const *argv[]) {
	graph G = graph_create();
	graph_add_vertex(G, "0");
	graph_add_vertex(G, "1");
	graph_add_vertex(G, "2");
	graph_add_vertex(G, "3");
	graph_add_vertex(G, "4");
	graph_add_vertex(G, "5");
	graph_add_vertex(G, "6");
	graph_add_vertex(G, "7");

	graph_add_edge(G, "0", "1", 1);
	graph_add_edge(G, "1", "2", 1);
	graph_add_edge(G, "2", "3", 1);
	graph_add_edge(G, "2", "6", 1);
	graph_add_edge(G, "2", "7", 1);
	graph_add_edge(G, "3", "4", 1);
	graph_add_edge(G, "7", "5", 1);
	graph_add_edge(G, "6", "5", 1);
	graph_add_edge(G, "4", "5", 1);
	graph_add_edge(G, "5", "4", 1);

	graph_shortest_path(G, "0");
	graph_view_path(G, "4");

	graph_destroy(G);

	return 0;
}
