#include"eu0155.h"

#include"principal.h"

void eu0155 :: solucion(){
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


void eu0155 :: printsolution(){
	cout << "Euler 0155\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
