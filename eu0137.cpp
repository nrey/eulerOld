#include"eu0137.h"

#include"principal.h"

void eu0137 :: solucion(){
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


void eu0137 :: printsolution(){
	cout << "Euler 0137\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
