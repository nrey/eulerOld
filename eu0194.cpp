#include"eu0194.h"

#include"principal.h"

void eu0194 :: solucion(){
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


void eu0194 :: printsolution(){
	cout << "Euler 0194\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
