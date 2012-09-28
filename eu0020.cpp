#include"eu0020.h"

#include"principal.h"

void eu0020 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	infivar_1 = new infinite_precition(301);
	
	// ---------------------------------------------------- //
	
	infivar_1->setvalue(1,1);
	
	for( unsigned long long i=1; i<=100; i++ ){
		infivar_1->mul(infivar_1,i);
	}
	
	output = infivar_1->sumdig();
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0020 :: printsolution(){
	cout << "Euler 0020\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
