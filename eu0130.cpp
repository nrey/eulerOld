#include"eu0130.h"

#include"principal.h"

void eu0130 :: solucion(){
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


void eu0130 :: printsolution(){
	cout << "Euler 0130\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
