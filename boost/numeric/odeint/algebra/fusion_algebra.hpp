/*
 [auto_generated]
 boost/numeric/odeint/algebra/fusion_algebra.hpp

 [begin_description]
 Algebra for boost::fusion sequences.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_ALGEBRA_FUSION_ALGEBRA_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_ALGEBRA_FUSION_ALGEBRA_HPP_INCLUDED

/* moved to config.hpp
#define BOOST_FUSION_UNFUSED_MAX_ARITY 15
#define BOOST_FUSION_UNFUSED_TYPE_MAX_ARITY 15
#define BOOST_FUSION_INVOKE_MAX_ARITY 15
#define BOOST_FUSION_INVOKE_PROCEDURE_MAX_ARITY 15
#define BOOST_FUSION_INVOKE_FUNCTION_OBJECT_MAX_ARITY 15
*/

#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/view.hpp>
#include <boost/fusion/functional.hpp>




namespace boost {
namespace numeric {
namespace odeint {


struct fusion_algebra
{
    template< class S1 , class Op >
    void for_each1( S1 &s1 , Op op )
    {
        boost::fusion::for_each( s1 , op );
    };


    template< class S1 , class S2 , class Op >
    void for_each2( S1 &s1 , S2 &s2 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& > Sequences;
        Sequences sequences( s1 , s2 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }


    template< class S1 , class S2 , class S3 , class Op >
    void for_each3( S1 &s1 , S2 &s2 , S3 &s3 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& > Sequences;
        Sequences sequences( s1 , s2 , s3 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class Op >
    void for_each4( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }


    template< class S1 , class S2 , class S3 , class S4 , class S5 , class Op >
    void for_each5( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }


    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class Op >
    void for_each6( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }


    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class Op >
    void for_each7( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }


    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class Op >
    void for_each8( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class Op >
    void for_each9( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class S10 , class Op >
    void for_each10( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& , S10& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class S10 , class S11 , class Op >
    void for_each11( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& , S10& , S11& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class Op >
    void for_each12( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& , S10& , S11& , S12& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class S13 , class Op >
    void for_each13( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , S13 &s13 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& , S10& , S11& , S12& , S13& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class S1 , class S2 , class S3 , class S4 , class S5 , class S6 , class S7 , class S8 , class S9 , class S10 , class S11 , class S12 , class S13 , class S14 , class Op >
    void for_each14( S1 &s1 , S2 &s2 , S3 &s3 , S4 &s4 , S5 &s5 , S6 &s6 , S7 &s7 , S8 &s8 , S9 &s9 , S10 &s10 , S11 &s11 , S12 &s12 , S13 &s13 , S14 &s14 , Op op )
    {
        typedef boost::fusion::vector< S1& , S2& , S3& , S4& , S5& , S6& , S7& , S8& , S9& , S10& , S11& , S12& , S13& , S14& > Sequences;
        Sequences sequences( s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14 );
        boost::fusion::for_each( boost::fusion::zip_view< Sequences >( sequences ) , boost::fusion::make_fused( op ) );
    }

    template< class Value , class S , class Reduction >
    Value reduce( const S &s , Reduction red , Value init)
    {
        return boost::fusion::accumulate( s , init , red );
    }
};



} // odeint
} // numeric
} // boost


#endif // BOOST_NUMERIC_ODEINT_ALGEBRA_FUSION_ALGEBRA_HPP_INCLUDED
