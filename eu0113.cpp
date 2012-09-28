#include"eu0113.h"

#include"principal.h"

void eu0113 :: solucion(){
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


void eu0113 :: printsolution(){
	cout << "Euler 0113\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
