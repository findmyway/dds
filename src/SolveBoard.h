/*
   DDS, a bridge double dummy solver.

   Copyright (C) 2006-2014 by Bo Haglund /
   2014-2018 by Bo Haglund & Soren Hein.

   See LICENSE and README.
*/

#ifndef DDS_SOLVEBOARD_H
#define DDS_SOLVEBOARD_H

#include <vector>

#include "dds.h"

using namespace std;


void SolveSingleCommon(
  const int thrId,
  const int bno);

void CopySolveSingle(
  const vector<int>& crossrefs);

void SolveChunkCommon(
  const int thrId);

int SolveAllBoardsN(
  boards * bop,
  solvedBoards * solvedp,
  const int chunkSize,
  const int source); // 0 source, 1 calc

void DetectSolveDuplicates(
  boards const * bop,
  vector<int>& uniques,
  vector<int>& crossrefs);

#endif
