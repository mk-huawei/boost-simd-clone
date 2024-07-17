#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BROADCAST_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BROADCAST_HPP_INCLUDED

#include <boost/simd/detail/nsm.hpp>
#include <boost/simd/detail/overload.hpp>
#include <boost/simd/detail/dispatch/adapted/std/integral_constant.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 2)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_s64(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 4)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_s32(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 8)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_s16(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 16)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_s8(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 2)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_u64(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 4)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_u32(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 8)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_u16(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

  BOOST_DISPATCH_OVERLOAD ( broadcast_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::constant_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return do_(a0,nsm::bool_<(A1::value >= 0 && A1::value < 16)>{});
    }

    static BOOST_FORCEINLINE A0 do_(A0 const& a0, nsm::bool_<true> const&) BOOST_NOEXCEPT
    {
      return vdupq_laneq_u8(a0, A1::value);
    }

    static BOOST_FORCEINLINE A0 do_(A0 const&, nsm::bool_<false> const&) BOOST_NOEXCEPT
    {
      return Zero<A0>();
    }
  };

} } }

#endif
