#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SLIDE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SLIDE_HPP_INCLUDED

#include <boost/simd/constant/zero.hpp>
#include <boost/simd/detail/overload.hpp>
#include <boost/simd/detail/nsm.hpp>
#include <boost/simd/function/bitwise_cast.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;
  namespace tt = nsm::type_traits;

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int64_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_s64(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_s64(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int32_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_s32(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_s32(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int16_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_s16(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_s16(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int8_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_s8(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_s8(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint64_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_u64(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_u64(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint32_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_u32(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_u32(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint16_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_u16(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_u16(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint8_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, Offset const&) const BOOST_NOEXCEPT
    {
      if constexpr (Offset::value >= 0)
      {
        return vextq_u8(a0, Zero<T>(), Offset::value);
      }
      else
      {
        return vextq_u8(Zero<T>(), a0, T::static_size + Offset::value);
      }
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int64_<T>, bs::neon_ >
                          , bs::pack_< bd::int64_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_s64(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int32_<T>, bs::neon_ >
                          , bs::pack_< bd::int32_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_s32(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int16_<T>, bs::neon_ >
                          , bs::pack_< bd::int16_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_s16(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::int8_<T>, bs::neon_ >
                          , bs::pack_< bd::int8_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_s8(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint64_<T>, bs::neon_ >
                          , bs::pack_< bd::uint64_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_u64(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint32_<T>, bs::neon_ >
                          , bs::pack_< bd::uint32_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_u32(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint16_<T>, bs::neon_ >
                          , bs::pack_< bd::uint16_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_u16(a0, a1, Offset::value);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( slide_
                          , (typename T, typename Offset)
                          , bs::neon_
                          , bs::pack_< bd::uint8_<T>, bs::neon_ >
                          , bs::pack_< bd::uint8_<T>, bs::neon_ >
                          , bd::constant_<bd::integer_<Offset>>
                          )
  {
    BOOST_FORCEINLINE T operator()(T const& a0, T const& a1, Offset const&) const BOOST_NOEXCEPT
    {
      return vextq_u8(a0, a1, Offset::value);
    }
  };

} } }

#endif
