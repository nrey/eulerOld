#include"eu0371.h"

#include"principal.h"

void eu0371 :: solucion(){
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


void eu0371 :: printsolution(){
	cout << "Euler 0371\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
