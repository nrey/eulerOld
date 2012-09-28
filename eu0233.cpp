#include"eu0233.h"

#include"principal.h"

void eu0233 :: solucion(){
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


void eu0233 :: printsolution(){
	cout << "Euler 0233\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
