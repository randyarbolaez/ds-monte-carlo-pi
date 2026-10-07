#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main(){
	struct timespec start_time;
	clock_gettime(CLOCK_REALTIME, &start_time);

	long long inside_counter = 0;
	long long total_points = 100000000000;
	//long long total_points = 100000000;

	#pragma omp parallel reduction(+ : inside_counter) num_threads(8)
	{
		
		unsigned int seed = (unsigned int)(time(NULL) + omp_get_thread_num());

		#pragma omp for
		for (long long i = 0; i < total_points; i++){
			float x = (float)(rand_r(&seed))/(float)(RAND_MAX);
			float y = (float)(rand_r(&seed))/(float)(RAND_MAX);
			float distance_squared = x * x + y * y; 
			if (distance_squared <= 1){
				inside_counter++;
			}
		}

	}
	struct timespec end_time;
	clock_gettime(CLOCK_REALTIME, &end_time);
	
	long double result = 4.0 * ((float)inside_counter/(float)total_points);

	printf("inside_counter(%lli)/total_points(%lli) = %Lf\n", inside_counter, total_points, result);
	printf("Seconds the program took to run was: %ld\n", (end_time.tv_sec- start_time.tv_sec));
	return 0;
}

