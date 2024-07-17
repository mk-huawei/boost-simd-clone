#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_IS_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_IS_EQUAL_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/logical_and.hpp>
#include <boost/simd/meta/as_logical.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vreinterpretq_s64_u64(vceqq_s64(a0, a1));
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vreinterpretq_s32_u32(vceqq_s32(a0, a1));
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vreinterpretq_s16_u16(vceqq_s16(a0, a1));
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vreinterpretq_s8_u8(vceqq_s8(a0, a1));
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vceqq_u64(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vceqq_u32(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vceqq_u16(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( is_equal_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          )
  {
    using result = bs::as_logical_t<A0>;
    BOOST_FORCEINLINE result operator() ( const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return vceqq_u8(a0, a1);
    }
  };
} } }

#endif
