#include"eu0352.h"

#include"principal.h"

void eu0352 :: solucion(){
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


void eu0352 :: printsolution(){
	cout << "Euler 0352\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
