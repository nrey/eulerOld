#include"eu0387.h"

#include"principal.h"

void eu0387 :: solucion(){
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


void eu0387 :: printsolution(){
	cout << "Euler 0387\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
