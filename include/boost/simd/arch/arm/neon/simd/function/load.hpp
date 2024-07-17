#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_LOAD_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_LOAD_HPP_INCLUDED

#include <boost/simd/meta/hierarchy/simd.hpp>
#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/detail/dispatch/adapted/common/pointer.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::int8_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_s8(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::int16_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_s16(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::int32_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_s32(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::int64_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_s64(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::uint8_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_u8(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::uint16_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_u16(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::uint32_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_u32(p);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::neon_
                          , bd::pointer_<bd::scalar_<bd::uint64_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;
    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return vld1q_u64(p);
    }
  };
} } }

#endif
