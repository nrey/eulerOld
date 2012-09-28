#include"eu0339.h"

#include"principal.h"

void eu0339 :: solucion(){
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


void eu0339 :: printsolution(){
	cout << "Euler 0339\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
