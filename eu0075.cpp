#include"eu0075.h"

#include"principal.h"

void eu0075 :: solucion(){
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


void eu0075 :: printsolution(){
	cout << "Euler 0075\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
