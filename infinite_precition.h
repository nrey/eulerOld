#ifndef infinite_precition_h
#define infinite_precition_h

#include"principal.h"

class infinite_precition{

	public:
		
		infinite_precition( unsigned long long size_in );
		~infinite_precition();
		unsigned long long getsize(){ return size; };
		void setvalue( unsigned long long position, unsigned long long value );
		void setvalue( unsigned long long value ); // Mas q todo usado para borrar o para poner valores iniciales, los cuales deben ser menores o iguales a 9 digitos
		unsigned long long getvalue( unsigned long long position );
		void show();
		
		void copyto( infinite_precition *rhs ); // Esto deberia estar implicito, "copy consutructor" pero no sirvio (bueno no es exactamente lo q necesito, pero el caso es q tampoco me sicvio el cop constructor.
		
		void add( infinite_precition *rhs, infinite_precition *lhs );
		void sub( infinite_precition *rhs, infinite_precition *lhs );
		void mul( infinite_precition *rhs,  unsigned long long lhs );
		
		unsigned long long sumdig( );
		unsigned long long numdig( );
		
		bool ispalind( );
		void reverse( infinite_precition* lhs );
		
// 		infinite_precition operator+( const infinite_precition& rhs ) const;
// 		infinite_precition operator=( const infinite_precition& rhs );

		
	private:
		
		unsigned long long *data_;
		unsigned long long size;
		unsigned long long size_div9;
		
		unsigned long long temp_1_;
		unsigned long long temp_2_;
		unsigned long long temp_3_;
		unsigned long long temp_4_;
		unsigned long long temp_5_;
		unsigned long long temp_6_;
		unsigned long long temp_7_;
		unsigned long long temp_8_;
		
		long temp_sub_1_;
		
		ostringstream ostvar_1_;
		ostringstream ostvar_2_;
		ostringstream ostvar_3_;
		ostringstream ostvar_4_;
		ostringstream ostvar_5_;
		
		string strvar_1_;
		string strvar_2_;
		string strvar_3_;
		string strvar_4_;
		string strvar_5_;
		
};

#endif