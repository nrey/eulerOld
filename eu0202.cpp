#include"eu0202.h"

#include"principal.h"

void eu0202 :: solucion(){
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


void eu0202 :: printsolution(){
	cout << "Euler 0202\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
