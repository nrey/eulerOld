#include"eu0250.h"

#include"principal.h"

void eu0250 :: solucion(){
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


void eu0250 :: printsolution(){
	cout << "Euler 0250\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
