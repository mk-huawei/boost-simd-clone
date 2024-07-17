#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MAXIMUM_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MAXIMUM_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_s32(a0);
    }
  };

  // BOOST_DISPATCH_OVERLOAD ( maximum_
  //                         , (typename A0)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int64_<A0>, bs::neon_>
  //                        )
  // {
  //   BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
  //   {
  //     return vmaxvq_s64(a0);
  //   }
  // };

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_u8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( maximum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return vmaxvq_u32(a0);
    }
  };

  // BOOST_DISPATCH_OVERLOAD ( maximum_
  //                         , (typename A0)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint64_<A0>, bs::neon_>
  //                        )
  // {
  //   BOOST_FORCEINLINE typename A0::value_type operator() ( const A0 & a0) const BOOST_NOEXCEPT
  //   {
  //     return vmaxvq_u64(a0);
  //   }
  // };

} } }

#endif
