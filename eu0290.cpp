#include"eu0290.h"

#include"principal.h"

void eu0290 :: solucion(){
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


void eu0290 :: printsolution(){
	cout << "Euler 0290\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
