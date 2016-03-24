#ifndef HELPERS

#define HELPERS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NOMEMORY 100
double get_average(int n, double *arr);
void printVector(int n, double *vector);
int load_prices(char* filename, double **prices_pointer, int n, int *indices, int *time_pointer, int max_period);
int import_positions(char* filename, double **px, int* num_of_asset, int** indices_pointer, double max);

#endif