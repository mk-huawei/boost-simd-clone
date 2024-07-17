#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SLICE_LOW_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SLICE_LOW_HPP_INCLUDED

#include <boost/simd/function/bitwise_cast.hpp>
#include <boost/simd/meta/as_arithmetic.hpp>
#include <boost/simd/meta/hierarchy/simd.hpp>
#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/detail/dispatch/hierarchy.hpp>
#include <boost/config.hpp>
#include <boost/simd/logical.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;

//   BOOST_DISPATCH_OVERLOAD ( slice_low_
//                           , (typename T)
//                           , bs::neon_
//                           , bs::pack_< bd::double_<T>, bs::neon_ >
//                           )
//   {
//     static const std::size_t half = T::static_size/2;
//     using result_t   = typename T::template resize<half>;

//     BOOST_FORCEINLINE result_t operator()(T const& a0) const
//     {
//       return _mm256_extractf128_pd(a0, 0);
//     }
//   };

//   BOOST_DISPATCH_OVERLOAD ( slice_low_
//                           , (typename T)
//                           , bs::neon_
//                           , bs::pack_< bd::single_<T>, bs::neon_ >
//                           )
//   {
//     static const std::size_t half = T::static_size/2;
//     using result_t   = typename T::template resize<half>;

//     BOOST_FORCEINLINE result_t operator()(T const& a0) const
//     {
//       return _mm256_extractf128_ps(a0, 0);
//     }
//   };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::int8_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::int16_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::int32_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_s32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::int64_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_s64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::uint8_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_u8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::uint16_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::uint32_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slice_low_
                          , (typename T)
                          , bs::neon_
                          , bs::pack_< bd::uint64_<T>, bs::neon_ >
                          )
  {
    static const std::size_t half = T::static_size/2;
    using result_t   = typename T::template resize<half>;
    BOOST_FORCEINLINE result_t operator()(T const& a0) const
    {
      return vget_low_u64(a0);
    }
  };

//   BOOST_DISPATCH_OVERLOAD ( slice_low_
//                           , (typename T)
//                           , bs::neon_
//                           , bs::pack_< bs::logical_<T>, bs::neon_ >
//                           )
//   {
//     static const std::size_t half = T::static_size/2;
//     using result_t   = typename T::template resize<half>;
//     using base_t   = as_arithmetic_t<T>;

//     BOOST_FORCEINLINE result_t operator()(T const& a0) const
//     {
//       return bitwise_cast<result_t>( slice_low(bitwise_cast<base_t>(a0)) );
//     }
//   };
} } }

#endif
