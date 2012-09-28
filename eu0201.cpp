#include"eu0201.h"

#include"principal.h"

void eu0201 :: solucion(){
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


void eu0201 :: printsolution(){
	cout << "Euler 0201\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
