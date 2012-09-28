#include"eu0241.h"

#include"principal.h"

void eu0241 :: solucion(){
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


void eu0241 :: printsolution(){
	cout << "Euler 0241\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
