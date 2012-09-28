#include"eu0363.h"

#include"principal.h"

void eu0363 :: solucion(){
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


void eu0363 :: printsolution(){
	cout << "Euler 0363\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
