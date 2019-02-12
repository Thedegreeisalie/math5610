#include <stdio.h>
#include <omp.h>

int main() {
	// Get the max number of threads openmp will allow
	int numThreads = omp_get_max_threads();
	// use that number to create said number of threads
	#pragma omp parallel num_threads(numThreads) 
	{
		int id = omp_get_thread_num();
		printf("hello world from thread: %d \n", id);
	}
	return 0;
}
