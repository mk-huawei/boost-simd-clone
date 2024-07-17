//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================

#ifndef BOOST_SIMD_FUNCTION_SIMD_MAXIMUM_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SIMD_MAXIMUM_HPP_INCLUDED

#include <boost/simd/function/scalar/maximum.hpp>
#include <boost/simd/arch/common/generic/function/autodispatcher.hpp>

#if defined(BOOST_HW_SIMD_ARM_AVAILABLE)
#  if BOOST_HW_SIMD_ARM >= BOOST_HW_SIMD_ARM_NEON_VERSION
#    include <boost/simd/arch/arm/neon/simd/function/maximum.hpp>
#  endif
#endif

#endif
