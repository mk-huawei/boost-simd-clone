#ifndef BOOST_SIMD_ARCH_ARM_NEON64_SPEC_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_SPEC_HPP_INCLUDED

#include <boost/simd/detail/predef.hpp>

#if !defined(BOOST_SIMD_DEFAULT_FAMILY)
  // sic(!) don't use 64-bit Neon, it's just a workaround to define a 64-bit pack
  #if BOOST_HW_SIMD_ARM == BOOST_VERSION_NUMBER(0, 5, 0)
    #define BOOST_SIMD_DEFAULT_FAMILY ::boost::simd::neon64_
    #define BOOST_SIMD_DEFAULT_SITE   ::boost::simd::neon64_
  #endif
#endif

#if BOOST_HW_SIMD_ARM >= BOOST_HW_SIMD_ARM_NEON_VERSION
  #include <arm_neon.h>
  #include <boost/simd/arch/arm/neon64/as_simd.hpp>
  #include <boost/simd/arch/arm/neon64/pack_traits.hpp>
#endif

#endif
