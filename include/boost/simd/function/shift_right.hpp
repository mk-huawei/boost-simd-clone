//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SHIFT_RIGHT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SHIFT_RIGHT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-operator

    return right shift of the first operand by the second
    that must be of integer type and of the same number
    of elements as the first parameter
    Infix notation can be used with operator '>>'

    @par Semantic:

    For every parameters of types respectively T0, T1:

    @code
    T0 r = shift_right(a0,a1);
    @endcode

    is similar to:

    @code
    T0 r = a0 >> a1;
    @endcode

    @par Alias:
    @c shra, @c shar, @c shrai

    @see  shift_left, shr, rshl, rshr, rol, ror


    @return a value of the same type as the second parameter

**/
  template<typename T> auto shift_right(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::shift_right

      @see simd::shift_right
    **/
    const boost::dispatch::functor<tag::shift_right_> shift_right = {};
  }
} }
#endif

#include <boost/simd/function/definition/shift_right.hpp>
#include <boost/simd/arch/common/scalar/function/shift_right.hpp>
//#include <boost/simd/arch/common/function/simd/shift_right.hpp>

#endif