#include"eu0313.h"

#include"principal.h"

void eu0313 :: solucion(){
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


void eu0313 :: printsolution(){
	cout << "Euler 0313\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
