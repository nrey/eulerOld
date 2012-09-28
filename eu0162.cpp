#include"eu0162.h"

#include"principal.h"

void eu0162 :: solucion(){
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


void eu0162 :: printsolution(){
	cout << "Euler 0162\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
