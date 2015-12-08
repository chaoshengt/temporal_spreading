#ifndef GUARD_custom_io_h
#define GUARD_custom_io_h

#include <string>
#include "graph.h"

void ReadEdgesTxt(std::string filename, Graph::DayEdges& edges );

void WriteEdgesToFile(Graph::DayEdges& edges,std::string filename);
void ReadEdgesC(std::string filename, Graph::DayEdges& edges, const int EDGE_NUMBER, const int RANDOM_FLAG=0 );

unsigned int ReadGroups(std::string filename, Graph::NodeProperty& groups );

#endif