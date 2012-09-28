#include"eu0386.h"

#include"principal.h"

void eu0386 :: solucion(){
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


void eu0386 :: printsolution(){
	cout << "Euler 0386\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
