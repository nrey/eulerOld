#include"eu0367.h"

#include"principal.h"

void eu0367 :: solucion(){
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


void eu0367 :: printsolution(){
	cout << "Euler 0367\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
