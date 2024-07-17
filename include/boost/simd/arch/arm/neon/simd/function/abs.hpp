#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_ABS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_ABS_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::double_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_f64(a0);
      }
   };

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::single_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_f32(a0);
      }
   };

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int64_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_s64(a0);
      }
   };

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int32_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_s32(a0);
      }
   };

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int16_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_s16(a0);
      }
   };

   BOOST_DISPATCH_OVERLOAD( abs_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::int8_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
      {
        return vabsq_s8(a0);
      }
   };
} } }

#endif
