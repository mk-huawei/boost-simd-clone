#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_OR_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_OR_HPP_INCLUDED
#include <boost/simd/detail/overload.hpp>


namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_s64(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_u64(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_s32(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                         )
  {

    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_u32(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                         )
  {

    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_s16(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                         )
  {

    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_u16(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                         )
  {

    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_s8(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_or_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                         )
  {

    BOOST_FORCEINLINE A0 operator() ( const A0 & a0
                                    , const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vorrq_u8(a0, a1);
    }
  };


} } }

#endif
