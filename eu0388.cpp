#include"eu0388.h"

#include"principal.h"

void eu0388 :: solucion(){
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


void eu0388 :: printsolution(){
	cout << "Euler 0388\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
