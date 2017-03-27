#ifndef SOLVER_H
#define SOLVER_H

#include "Problem.h"
#include "Solution.h"

typedef unsigned long long ull;

class Solver
{
public:
    Solver();
    ~Solver();

    void run(const Problem* problem);

private:
    ull combinations(uint n, uint k) const;
    uint calculatePrice(const std::vector<uint>& state);

    const Problem* m_problem;
    Solution* m_solution;
};

#endif // SOLVER_H
