#include"eu0200.h"

#include"principal.h"

void eu0200 :: solucion(){
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


void eu0200 :: printsolution(){
	cout << "Euler 0200\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
