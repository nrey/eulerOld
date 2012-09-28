#include"eu0396.h"

#include"principal.h"

void eu0396 :: solucion(){
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


void eu0396 :: printsolution(){
	cout << "Euler 0396\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
