#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SPLAT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SPLAT_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of float
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value> >
                          , bd::target_<bs::pack_<bd::single_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_f32( static_cast<float>(v) );
    }
  };

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of double
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value> >
                          , bd::target_<bs::pack_<bd::double_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_f64( static_cast<double>(v) );
    }
  };

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of 8 bits integers
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_s8(v);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_u8(v);
    }
  };

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of 16 bits integers
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_s16(v);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_u16(v);
    }
  };

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of 32 bits integers
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_s32(v);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_u32(v);
    }
  };

  //------------------------------------------------------------------------------------------------
  // splat from a scalar into a pack of 64 bits integers
  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_s64(v);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( splat_
                          , (typename Target, typename Value)
                          , bs::neon_
                          , bd::scalar_<bd::unspecified_<Value>>
                          , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target operator()(Value const& v, Target const&) const BOOST_NOEXCEPT
    {
      return vdupq_n_u64(v);
    }
  };
} } }

#endif
