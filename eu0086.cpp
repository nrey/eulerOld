#include"eu0086.h"

#include"principal.h"

void eu0086 :: solucion(){
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


void eu0086 :: printsolution(){
	cout << "Euler 0086\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
