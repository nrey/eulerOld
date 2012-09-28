#include"eu0308.h"

#include"principal.h"

void eu0308 :: solucion(){
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


void eu0308 :: printsolution(){
	cout << "Euler 0308\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
