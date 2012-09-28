#include"eu0262.h"

#include"principal.h"

void eu0262 :: solucion(){
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


void eu0262 :: printsolution(){
	cout << "Euler 0262\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
