#include"eu0356.h"

#include"principal.h"

void eu0356 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0356 :: printsolution(){
	cout << "Euler 0356\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
