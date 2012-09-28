#include"eu0084.h"

#include"principal.h"

void eu0084 :: solucion(){
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


void eu0084 :: printsolution(){
	cout << "Euler 0084\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
