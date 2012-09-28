#include"eu0350.h"

#include"principal.h"

void eu0350 :: solucion(){
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


void eu0350 :: printsolution(){
	cout << "Euler 0350\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
