#include"eu0122.h"

#include"principal.h"

void eu0122 :: solucion(){
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


void eu0122 :: printsolution(){
	cout << "Euler 0122\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
