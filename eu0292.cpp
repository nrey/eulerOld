#include"eu0292.h"

#include"principal.h"

void eu0292 :: solucion(){
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


void eu0292 :: printsolution(){
	cout << "Euler 0292\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
