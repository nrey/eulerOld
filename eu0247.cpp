#include"eu0247.h"

#include"principal.h"

void eu0247 :: solucion(){
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


void eu0247 :: printsolution(){
	cout << "Euler 0247\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
