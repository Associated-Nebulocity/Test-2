#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <random>
#include "disk.h"

class System {
    public:
        System(int N, double displacement, double dt, double boxSize, int seed);

        std::vector<Disk> disks;
        double boxSize;
        double displacement;
        std::mt19937 gen;
        std::uniform_real_distribution<double>dist;

        void step();
        void save(const std::string &filename);
        void enforceBoundaries(Disk & disk);
        bool overlap(int i);
        double uniform(double min, double max);

};

#endif