#ifndef BOOST_SIMD_ARCH_ARM_NEON64_PACK_TRAITS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_PACK_TRAITS_HPP_INCLUDED

#include <boost/config.hpp>
#include <boost/simd/detail/nsm.hpp>
#include <boost/simd/detail/pack_traits.hpp>
#include <boost/simd/arch/common/simd/abi_of.hpp>

#if defined __GNUC__ && __GNUC__>=6
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-attributes"
#endif

namespace boost { namespace simd
{
  namespace detail
  {
    BOOST_SIMD_DEFINE_PACK_TRAITS(float, 2, float32x2_t);
    // BOOST_SIMD_DEFINE_PACK_TRAITS(double, 1, double);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::int8_t, 8, int8x8_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::int16_t, 4, int16x4_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::int32_t, 2, int32x2_t);
    // BOOST_SIMD_DEFINE_PACK_TRAITS(std::int64_t, 1, int64_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::uint8_t, 8, uint8x8_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::uint16_t, 4, uint16x4_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(std::uint32_t, 2, uint32x2_t);
    // BOOST_SIMD_DEFINE_PACK_TRAITS(std::uint64_t, 1, uint64_t);
    BOOST_SIMD_DEFINE_PACK_TRAITS(char, 8, uint8x8_t);
  }

  namespace ext
  {
    template<typename Enable> struct abi_of<float,2,Enable>
    {
      using type = ::boost::simd::neon64_;
    };

    // template<typename Enable> struct abi_of<double,1,Enable>
    // {
    //   using type = ::boost::simd::neon64_;
    // };

    template<typename T, std::size_t N>
    struct abi_of<  T, N
                  , typename std::enable_if<   std::is_integral<T>::value
                                            && (N*sizeof(T) == 8)
                                            >::type
                  >
    {
      using type = ::boost::simd::neon64_;
    };
  }
} }

#if defined __GNUC__ && __GNUC__>=6
#pragma GCC diagnostic pop
#endif

#endif
