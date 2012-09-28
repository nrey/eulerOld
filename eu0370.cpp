#include"eu0370.h"

#include"principal.h"

void eu0370 :: solucion(){
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


void eu0370 :: printsolution(){
	cout << "Euler 0370\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
