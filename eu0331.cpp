#include"eu0331.h"

#include"principal.h"

void eu0331 :: solucion(){
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


void eu0331 :: printsolution(){
	cout << "Euler 0331\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
