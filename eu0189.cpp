#include"eu0189.h"

#include"principal.h"

void eu0189 :: solucion(){
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


void eu0189 :: printsolution(){
	cout << "Euler 0189\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
