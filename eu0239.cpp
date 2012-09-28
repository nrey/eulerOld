#include"eu0239.h"

#include"principal.h"

void eu0239 :: solucion(){
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


void eu0239 :: printsolution(){
	cout << "Euler 0239\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
