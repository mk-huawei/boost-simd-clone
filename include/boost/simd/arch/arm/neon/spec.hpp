#ifndef BOOST_SIMD_ARCH_ARM_NEON_SPEC_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SPEC_HPP_INCLUDED

#include <boost/simd/detail/predef.hpp>

#if !defined(BOOST_SIMD_DEFAULT_FAMILY)
  #if BOOST_HW_SIMD_ARM == BOOST_HW_SIMD_ARM_NEON_VERSION
    #define BOOST_SIMD_DEFAULT_FAMILY ::boost::simd::neon_
    #define BOOST_SIMD_DEFAULT_SITE   ::boost::simd::neon_
  #endif
#endif

#if BOOST_HW_SIMD_ARM >= BOOST_HW_SIMD_ARM_NEON_VERSION
  #include <arm_neon.h>
  #include <boost/simd/arch/arm/neon/as_simd.hpp>
  #include <boost/simd/arch/arm/neon/pack_traits.hpp>
#endif

#endif
