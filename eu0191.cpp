#include"eu0191.h"

#include"principal.h"

void eu0191 :: solucion(){
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


void eu0191 :: printsolution(){
	cout << "Euler 0191\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
