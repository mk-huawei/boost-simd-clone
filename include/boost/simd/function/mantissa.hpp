//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MANTISSA_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MANTISSA_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-ieee

    Returns the signed mantissa of the floating input.

    @par Semantic:

    @code
    T r = mantissa(x);
    @endcode

    is similar to:

    @code
    T r = x*pow(2, -exponent(x));
    @endcode

    @par Note
    The exponent e and signed mantissa m of a floating point entry a are related by
    \f$a = m\times 2^e\f$, with the absolute value of m between one (included) ans two (excluded)


    @return a value of same type as the input

**/
  template<typename T> auto mantissa(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-ieee

      Function object tied to simd::mantissa

      @see simd::mantissa
    **/
    const boost::dispatch::functor<tag::mantissa_> mantissa = {};
  }
} }
#endif

#include <boost/simd/function/definition/mantissa.hpp>
#include <boost/simd/arch/common/scalar/function/mantissa.hpp>
//#include <boost/simd/arch/common/function/simd/mantissa.hpp>

#endif