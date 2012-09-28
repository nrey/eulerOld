#include"eu0173.h"

#include"principal.h"

void eu0173 :: solucion(){
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


void eu0173 :: printsolution(){
	cout << "Euler 0173\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
