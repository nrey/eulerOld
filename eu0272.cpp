#include"eu0272.h"

#include"principal.h"

void eu0272 :: solucion(){
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


void eu0272 :: printsolution(){
	cout << "Euler 0272\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
