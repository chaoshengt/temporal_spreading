#ifndef GUARD_main_h
#define GUARD_main_h

#include <string>
#include <vector>
#include "graph.h"

struct Parameters{
  unsigned int patient_zero;
  unsigned int day_zero;
  unsigned int sample_size;
  unsigned int infectious_period;
  unsigned int detection_period;
  unsigned int use_groups;
  unsigned int transmission_probability;
  unsigned int RANDOM_FLAG; // 0 means original network, 1 temporal randomized
  
  std::string out_file_name;
  std::string simulation_type;
};

int 						  parseInput(Parameters& p, int argc, char** argv);
double 						getMean(std::vector<unsigned int>& vector);
double            GetFraction(std::vector<unsigned int>& vector,bool (*condition)(unsigned int));

Graph::GroupResult 	  CallSimulation(Graph& graph, Parameters& p);
std::vector<unsigned int> 	  GetFinalInfectionSizes(Graph& graph, Parameters& p);
double 						    GetMeanFinalInfectionSize(Graph& graph, Parameters& p);
double                GetEndemicFraction(Graph& graph, Parameters& p);
void 						      printEndemicFractions(Graph& graph, Parameters& p);

#endif