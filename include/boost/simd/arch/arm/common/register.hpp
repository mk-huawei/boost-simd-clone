#ifndef BOOST_SIMD_ARCH_ARM_COMMON_REGISTER_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_COMMON_REGISTER_HPP_INCLUDED
#include <boost/simd/detail/nsm.hpp>
#include <boost/simd/detail/predef.hpp>

#if BOOST_HW_SIMD_ARM
namespace boost { namespace simd
{
  struct register_count
  {
    using general = nsm::size_t<2*sizeof(void*)>;
    using simd    = nsm::size_t<2*sizeof(void*)>;
  };
} }
#endif

#endif
