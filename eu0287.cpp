#include"eu0287.h"

#include"principal.h"

void eu0287 :: solucion(){
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


void eu0287 :: printsolution(){
	cout << "Euler 0287\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
