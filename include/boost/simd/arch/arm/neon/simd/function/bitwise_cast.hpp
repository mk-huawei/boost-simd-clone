#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_CAST_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_CAST_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_s32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s64_u64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_s32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_s64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_u8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_u16(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u64_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_s64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s32_u64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_s32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_s64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_u16(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u32_u64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_s8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_s32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_s64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_u16(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_u32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s16_u64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_s8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_s32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_s64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_u32(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u16_u64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_s16(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_s32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_s64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_u8(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_u16(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_s8_u64(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_s8(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_s16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_s32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_s64(a0);
    }
  };

   BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_u16(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_u32(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( bitwise_cast_
                          , (typename A0, typename Target)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>,bs::neon_>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(A0 const& a0, Target const&) const
    {
      return vreinterpretq_u8_u64(a0);
    }
  };

} } }

#endif
