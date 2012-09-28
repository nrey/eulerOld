#include"eu0316.h"

#include"principal.h"

void eu0316 :: solucion(){
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


void eu0316 :: printsolution(){
	cout << "Euler 0316\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
