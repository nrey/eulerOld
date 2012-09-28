#include"eu0198.h"

#include"principal.h"

void eu0198 :: solucion(){
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


void eu0198 :: printsolution(){
	cout << "Euler 0198\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
