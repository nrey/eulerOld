#include"eu0327.h"

#include"principal.h"

void eu0327 :: solucion(){
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


void eu0327 :: printsolution(){
	cout << "Euler 0327\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
