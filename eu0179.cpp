#include"eu0179.h"

#include"principal.h"

void eu0179 :: solucion(){
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


void eu0179 :: printsolution(){
	cout << "Euler 0179\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
