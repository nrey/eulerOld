#include"eu0108.h"

#include"principal.h"

void eu0108 :: solucion(){
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


void eu0108 :: printsolution(){
	cout << "Euler 0108\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
