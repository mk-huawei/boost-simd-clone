#ifndef BOOST_SIMD_ARCH_ARM_NEON64_LIMITS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_LIMITS_HPP_INCLUDED

#include <boost/simd/arch/arm/tags.hpp>
#include <boost/simd/arch/common/limits.hpp>
#include <boost/simd/detail/nsm.hpp>

namespace boost { namespace simd
{
  template<> struct limits<boost::simd::neon64_>
  {
    using parent = boost::simd::simd_;

    struct largest_integer
    {
      template<typename Sign> struct apply : boost::dispatch::make_integer<8,Sign> {};
    };

    struct smallest_integer
    {
      template<typename Sign> struct apply : boost::dispatch::make_integer<1,Sign> {};
    };

    using largest_real   = float;
    using smallest_real  = float;

    enum { bits = 64, bytes = 8 };

    using supported_types = nsm::list < float
                                      , std::int8_t , std::int16_t , std::int32_t
                                      , std::uint8_t, std::uint16_t, std::uint32_t
                                      >;
  };
} }

#endif
