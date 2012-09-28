#include"eu0347.h"

#include"principal.h"

void eu0347 :: solucion(){
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


void eu0347 :: printsolution(){
	cout << "Euler 0347\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
