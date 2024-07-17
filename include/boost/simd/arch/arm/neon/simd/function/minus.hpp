#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MINUS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_MINUS_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_s64(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_s32(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_s16(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_s8(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_u64(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_u32(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_u16(a0,a1);
      }
   };

   BOOST_DISPATCH_OVERLOAD( minus_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
      {
        return vsubq_u8(a0,a1);
      }
   };

} } }

// #include <boost/simd/arch/arm/neon/simd/function/minus_s.hpp>

#endif
