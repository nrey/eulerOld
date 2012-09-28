#include"eu0215.h"

#include"principal.h"

void eu0215 :: solucion(){
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


void eu0215 :: printsolution(){
	cout << "Euler 0215\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
