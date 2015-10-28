//==================================================================================================
/*!

  Copyright 2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/ifnotadd.hpp>
#include <stf.hpp>
#include <boost/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/logical.hpp>
//TODO LOGICAL

STF_CASE_TPL (" ifnotadd real",  STF_IEEE_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;

  using bs::ifnotadd;

  using bs::logical;
  using r_t = decltype(ifnotadd(T(),T(),T()));

  // return type conformity test
  STF_TYPE_IS( r_t, T );

  // specific values tests
  STF_EQUAL(ifnotadd(T(0),T(1),T(2)), T(3));
  STF_EQUAL(ifnotadd(T(1),T(1),T(2)), T(1));
//   STF_EQUAL(ifnotadd(bs::False<logical<T> >(),bs::Inf<T>(),bs::Inf<T>()), bs::Inf<r_t>());
//   STF_EQUAL(ifnotadd(bs::False<logical<T> >(),bs::Minf<T>(),bs::Minf<T>()), bs::Minf<r_t>());
//   STF_EQUAL(ifnotadd(bs::False<logical<T> >(),bs::Nan<T>(),bs::Nan<T>()), bs::Nan<r_t>());
//   STF_EQUAL(ifnotadd(bs::False<logical<T> >(),bs::Zero<T>(),bs::Zero<T>()), bs::Zero<r_t>());
} // end of test for floating_

STF_CASE_TPL (" ifnotadd integer",  STF_INTEGRAL_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;

  using bs::ifnotadd;

  using bs::logical;
  using r_t = decltype(ifnotadd(T(),T(),T()));

  // return type conformity test
  STF_TYPE_IS( r_t, T );

  // specific values tests
//   STF_EQUAL(ifnotadd(logical<T>(T(-1)),T(1),T(2)), T(1));
//   STF_EQUAL(ifnotadd(logical<T>(T(0)),T(1),T(2)), T(3));
//   STF_EQUAL(ifnotadd(logical<T>(bs::Zero<T>()),bs::Zero<T>(),bs::Zero<T>()), bs::Zero<r_t>());
} // end of test for integer_

