#include"eu0098.h"

#include"principal.h"

void eu0098 :: solucion(){
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


void eu0098 :: printsolution(){
	cout << "Euler 0098\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
