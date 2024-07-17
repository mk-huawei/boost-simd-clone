#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SUM_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SUM_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/slice.hpp>
#include <boost/simd/function/extract.hpp>
#include <boost/simd/detail/dispatch/meta/upgrade.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;

  // NOTE(Marek): For types smaller than 64-bit, there are vaddlvq_* intrinsics that return a result that is twice the size of the element type.

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_s64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_s32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_u64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( sum_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE typename A0::value_type operator()(const A0 & a0) const BOOST_NOEXCEPT
    {
      return vaddvq_u8(a0);
    }
  };

} } }

#endif
