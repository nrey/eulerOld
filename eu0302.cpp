#include"eu0302.h"

#include"principal.h"

void eu0302 :: solucion(){
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


void eu0302 :: printsolution(){
	cout << "Euler 0302\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
