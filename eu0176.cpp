#include"eu0176.h"

#include"principal.h"

void eu0176 :: solucion(){
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


void eu0176 :: printsolution(){
	cout << "Euler 0176\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
