#include"eu0136.h"

#include"principal.h"

void eu0136 :: solucion(){
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


void eu0136 :: printsolution(){
	cout << "Euler 0136\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
