#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MAX_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MAX_HPP_INCLUDED
#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/is_nan.hpp>
#include <boost/simd/function/if_else.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::single_<A0>, bs::neon_>
                          , bs::pack_<bd::single_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_f32(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::double_<A0>, bs::neon_>
                          , bs::pack_<bd::double_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_f64(a1,a0);
    }
  };

  // BOOST_DISPATCH_OVERLOAD ( max_
  //                         , (typename A0)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int64_<A0>, bs::neon_>
  //                         , bs::pack_<bd::int64_<A0>, bs::neon_>
  //                        )
  // {
  //   BOOST_FORCEINLINE A0 operator() ( const A0 & a0
  //                                   , const A0 & a1 ) const BOOST_NOEXCEPT
  //   {
  //     return vmaxq_s64(a0,a1);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( max_
  //                         , (typename A0)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint64_<A0>, bs::neon_>
  //                         , bs::pack_<bd::uint64_<A0>, bs::neon_>
  //                        )
  // {
  //   BOOST_FORCEINLINE A0 operator() ( const A0 & a0
  //                                   , const A0 & a1 ) const BOOST_NOEXCEPT
  //   {
  //     return vmaxq_u64(a0,a1);
  //   }
  // };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_s32(a0,a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_u32(a0,a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_s16(a0,a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_u16(a0,a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_s8(a0,a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( max_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vmaxq_u8(a0,a1);
    }
  };

} } }

#endif
