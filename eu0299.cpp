#include"eu0299.h"

#include"principal.h"

void eu0299 :: solucion(){
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


void eu0299 :: printsolution(){
	cout << "Euler 0299\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
