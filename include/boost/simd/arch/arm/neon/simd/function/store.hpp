#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_STORE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_STORE_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/meta/is_pointing_to.hpp>
#include <boost/simd/detail/dispatch/adapted/common/pointer.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::int64_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_s64(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::int32_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_s32(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::int16_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_s16(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::int8_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_s8(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::uint64_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_u64(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::uint32_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_u32(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::uint16_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_u16(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF( store_
                            , (typename Vec, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Vec::value_type>)
                            , bs::neon_
                            , bs::pack_<bd::uint8_<Vec>, bs::neon_>
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_u8(a1, a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( store_
                          , (typename Vec, typename Pointer)
                          , bs::neon_
                          , bs::pack_<bd::double_<Vec>, bs::neon_>
                          , bd::pointer_<bd::scalar_<bd::double_<Pointer>>,1u>
                          )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_f64(a1,a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( store_
                          , (typename Vec, typename Pointer)
                          , bs::avx_
                          , bs::pack_<bd::single_<Vec>, bs::avx_>
                          , bd::pointer_<bd::scalar_<bd::single_<Pointer>>,1u>
                          )
  {
    BOOST_FORCEINLINE void operator() (const Vec& a0, Pointer a1) const BOOST_NOEXCEPT
    {
      vst1q_f32(a1,a0);
    }
  };
} } }

#endif
