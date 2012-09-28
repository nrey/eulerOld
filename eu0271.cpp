#include"eu0271.h"

#include"principal.h"

void eu0271 :: solucion(){
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


void eu0271 :: printsolution(){
	cout << "Euler 0271\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
