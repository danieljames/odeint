/*
 [auto_generated]
 boost/numeric/odeint/algebra/vector_space_algebra.hpp

 [begin_description]
 An algebra for types which have vector space semantics, hence types on which the operators +,-,* are well defined.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_ALGEBRA_VECTOR_SPACE_ALGEBRA_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_ALGEBRA_VECTOR_SPACE_ALGEBRA_HPP_INCLUDED

#include <boost/type_traits/remove_reference.hpp>


namespace boost {
namespace numeric {
namespace odeint {


/*
 * This class template has to be overload in order to call vector_space_algebra::reduce
 */
template< class State > struct vector_space_reduce;

/*
 * Example:
 */
//template< class LorenzState >
//class vector_space_reduce
//{
//	template< class Value , class Op >
//	Value operator()( const LorenzState &s , Op op , Value init ) const
//	{
//		init = op( init , s.x );
//		init = op( init , s.y );
//		init = op( init , s.z );
//		return init;
//	}
//};



struct vector_space_algebra
{
    template< class S1 , class Op >
    void for_each1( S1 &s1 , Op op )
    {
        // ToDo : build checks, that the +-*/ operators are well defined
        op( s1 );
    }

    template< class S1 , class S2 , class Op >
    void for_each2( S1 &s1 , S2 &s2 , Op op )
    {
        op( s1 , s2 );
    }

    template< class S1 , class S2 , class S3 , class Op >
    void for_each3( S1 &s1 , S2 &s2 , S3 &s3 , Op op )
    {
        op( s1 , s2 , s3 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class Op >
    void for_each4( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , Op op )
    {
        op( s1 , s2 , s3 , s4 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class Op >
    void for_each5( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class Op >
    void for_each6( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class Op >
    void for_each7( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class Op >
    void for_each8( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class Op >
    void for_each9( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class S10 , class Op >
    void for_each10( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class S10 , class S11 , class Op >
    void for_each11( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class Op >
    void for_each12( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class S13 , class Op >
    void for_each13( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , S13 &s13 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 ,class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class S13 , class S14 , class Op >
    void for_each14( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , S13 &s13 , S14 &s14 , Op op )
    {
        op( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14 );
    }

    template< class Value , class S , class Red >
    Value reduce( const S &s , Red red , Value init )
    {
        boost::numeric::odeint::vector_space_reduce< S > r;
        return r( s , red , init );
    }
};


} // odeint
} // numeric
} // boost


#endif // BOOST_NUMERIC_ODEINT_ALGEBRA_VECTOR_SPACE_ALGEBRA_HPP_INCLUDED
