#include"eu0390.h"

#include"principal.h"

void eu0390 :: solucion(){
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


void eu0390 :: printsolution(){
	cout << "Euler 0390\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
