#include"eu0114.h"

#include"principal.h"

void eu0114 :: solucion(){
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


void eu0114 :: printsolution(){
	cout << "Euler 0114\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
