#include"eu0238.h"

#include"principal.h"

void eu0238 :: solucion(){
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


void eu0238 :: printsolution(){
	cout << "Euler 0238\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
