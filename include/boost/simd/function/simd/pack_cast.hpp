#ifndef BOOST_SIMD_FUNCTION_SIMD_PACK_CAST_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SIMD_PACK_CAST_HPP_INCLUDED

#include <boost/simd/function/scalar/pack_cast.hpp>
#include <boost/simd/arch/common/generic/function/autodispatcher.hpp>
#include <boost/simd/arch/common/simd/function/pack_cast.hpp>

#if defined(BOOST_HW_SIMD_X86_OR_AMD_AVAILABLE)
#  if BOOST_HW_SIMD_X86_OR_AMD >= BOOST_HW_SIMD_X86_SSE2_VERSION
#    include <boost/simd/arch/x86/sse2/simd/function/pack_cast.hpp>
#  endif
#  if BOOST_HW_SIMD_X86_OR_AMD >= BOOST_HW_SIMD_X86_AVX_VERSION
#    include <boost/simd/arch/x86/avx/simd/function/pack_cast.hpp>
#  endif
#  if BOOST_HW_SIMD_X86_OR_AMD >= BOOST_HW_SIMD_X86_AVX2_VERSION
#    include <boost/simd/arch/x86/avx2/simd/function/pack_cast.hpp>
#  endif
#elif defined(BOOST_HW_SIMD_ARM_AVAILABLE)
#  if BOOST_HW_SIMD_ARM >= BOOST_HW_SIMD_ARM_NEON_VERSION
#    include <boost/simd/arch/arm/neon/simd/function/pack_cast.hpp>
#  endif
#endif

#endif
