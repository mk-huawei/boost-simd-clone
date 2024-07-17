#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_EXTRACT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_EXTRACT_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/detail/dispatch/adapted/std/integral_constant.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int8_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_s8(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int16_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_s16(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int32_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_s32(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::int64_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_s64(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint8_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_u8(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint16_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_u16(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint32_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_u32(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::uint64_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_u64(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::single_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE float operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_f32(a0, value);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::double_<A0>, bs::neon_>
  //                         , bd::constant_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE float operator()(A0 const & a0, A1 const &) const
  //   {
  //     enum { value = A1::value };
  //     return vgetq_lane_f64(a0, value);
  //   }
  // };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_s8(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_s16(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_s32(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_s64(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_u8(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_u16(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_u32(a0, a1);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( extract_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
  {
    BOOST_FORCEINLINE bd::scalar_of_t<A0> operator()(A0 const & a0, A1 const & a1) const
    {
      return vgetq_lane_u64(a0, a1);
    }
  };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::single_<A0>, bs::neon_>
  //                         , bd::scalar_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE float operator()(A0 const & a0, A1 const & a1) const
  //   {
  //     return vgetq_lane_f32(a0, a1);
  //   }
  // };

  // BOOST_DISPATCH_OVERLOAD ( extract_
  //                         , (typename A0, typename A1)
  //                         , bs::neon_
  //                         , bs::pack_<bd::double_<A0>, bs::neon_>
  //                         , bd::scalar_<bd::integer_<A1>>
  //                         )
  // {
  //   BOOST_FORCEINLINE float operator()(A0 const & a0, A1 const & a1) const
  //   {
  //     return vgetq_lane_f64(a0, a1);
  //   }
  // };

} } }

#endif
