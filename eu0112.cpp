#include"eu0112.h"

#include"principal.h"

void eu0112 :: solucion(){
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


void eu0112 :: printsolution(){
	cout << "Euler 0112\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
