#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SHIFT_LEFT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_SHIFT_LEFT_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint8_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_u8(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          , bd::scalar_< bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_s8(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint16_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_u16(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          , bd::scalar_< bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_s16(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint32_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_u32(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_s32(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_u64(a0, int(a1));
      }
   };

   BOOST_DISPATCH_OVERLOAD( shift_left_
                          , (typename A0, typename A1)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          , bd::scalar_<bd::integer_<A1>>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0, A1 a1) const BOOST_NOEXCEPT
      {
        return vshlq_n_s64(a0, int(a1));
      }
   };

//    BOOST_DISPATCH_OVERLOAD( shift_left_
//                           , (typename A0)
//                           , bs::neon_
//                           , bs::pack_<bd::uint64_<A0>, bs::neon_>
//                           , bs::pack_<bd::ints64_<A0>, bs::neon_>
//                           )
//    {
//       BOOST_FORCEINLINE A0 operator()(A0 const& a0, A0 const& a1) const BOOST_NOEXCEPT
//       {
//         return _mm_sllv_epi64(a0, a1);
//       }
//    };

} } }

#endif
