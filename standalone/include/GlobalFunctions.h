//
// Created by nishant on 21/1/16.
//

#ifndef AISOFT_HW1_GLOBALFUNCTIONS_H
#define AISOFT_HW1_GLOBALFUNCTIONS_H

#define costOperator <=
#define maxIterations 100000000

#include "Sudoku.h"

#include <climits>
#include <sstream>
#include <string>
#include <vector>

enum SimulationType {
  HILL_CLIMBING,
  SIMULATED_ANNEALING,
  HILL_CLIMBING_PROBABILITY
};

using namespace std;

extern double temperature;
extern double temperatureDropConstant;
extern int temperatureDropIterations;

extern int iterationCount;

std::vector<std::string> split(const std::string &s, char delim);
std::vector<std::string> &split(const std::string &s, char delim,
                                std::vector<std::string> &elems);

void colorPrint(int n);

void HillClimbing(Sudoku &sudoku, unsigned int seed = time(NULL));
void SimulatedAnnealing(Sudoku &sudoku, unsigned int seed = time(NULL));
void HillClimbingProbability(Sudoku &sudoku, unsigned int seed = time(NULL));

void ReadFromFile(string filename, string &fileName, SimulationType &simType,
                  unsigned int &seed);
void ReadFromArgs(int argCount, char **argValues, string &fileName,
                  SimulationType &simType, unsigned int &seed);

#endif // AISOFT_HW1_GLOBALFUNCTIONS_H
