#define LINEAR     1
#define ASYMMETRIC 2
#define PROLATE    3
#define OBLATE     4
#define SPHERICAL  5
#define PLANAR     6

struct symmetry_t {
    int ishape,numsym,chiral;
    double xi,yi,zi;
    };

extern struct symmetry_t symmetry;

void ptgrp(int,char *,double **);
int findh(double **, double **, int);
int findi(double **,double **);
