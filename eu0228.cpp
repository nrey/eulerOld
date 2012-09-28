#include"eu0228.h"

#include"principal.h"

void eu0228 :: solucion(){
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


void eu0228 :: printsolution(){
	cout << "Euler 0228\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
