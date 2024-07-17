#ifndef BOOST_SIMD_ARCH_ARM_NEON64_AS_SIMD_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_AS_SIMD_HPP_INCLUDED

#include <boost/simd/arch/common/simd/as_simd.hpp>
#include <boost/simd/arch/arm/tags.hpp>

namespace boost { namespace simd
{
  template<typename T> struct logical;

  namespace ext
  {
    template<> struct as_simd<float, boost::simd::neon64_>
    {
      using type = float32x2_t;
    };

    // template<> struct as_simd<double, boost::simd::neon64_>
    // {
    //   using type = double;
    // };

    template<> struct as_simd<char, boost::simd::neon64_>
    {
      using type = uint8x8_t;
    };

    template<> struct as_simd<int8_t, boost::simd::neon64_>
    {
      using type = int8x8_t;
    };

    template<> struct as_simd<int16_t, boost::simd::neon64_>
    {
      using type = int16x4_t;
    };

    template<> struct as_simd<int32_t, boost::simd::neon64_>
    {
      using type = int32x2_t;
    };

    // template<> struct as_simd<int64_t, boost::simd::neon64_>
    // {
    //   using type = int64x2_t;
    // };

    template<> struct as_simd<uint8_t, boost::simd::neon64_>
    {
      using type = uint8x8_t;
    };

    template<> struct as_simd<uint16_t, boost::simd::neon64_>
    {
      using type = uint16x4_t;
    };

    template<> struct as_simd<uint32_t, boost::simd::neon64_>
    {
      using type = uint32x2_t;
    };

    // template<> struct as_simd<uint64_t, boost::simd::neon64_>
    // {
    //   using type = uint64_t;
    // };

    template<typename T>
    struct  as_simd<logical<T>, boost::simd::neon64_>
          : as_simd<T, boost::simd::neon64_> {};
  }
} }

#endif
