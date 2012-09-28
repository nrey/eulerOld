#include"eu0291.h"

#include"principal.h"

void eu0291 :: solucion(){
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


void eu0291 :: printsolution(){
	cout << "Euler 0291\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
