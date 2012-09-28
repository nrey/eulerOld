#include"eu0213.h"

#include"principal.h"

void eu0213 :: solucion(){
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


void eu0213 :: printsolution(){
	cout << "Euler 0213\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
