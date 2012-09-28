#include"eu0222.h"

#include"principal.h"

void eu0222 :: solucion(){
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


void eu0222 :: printsolution(){
	cout << "Euler 0222\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
