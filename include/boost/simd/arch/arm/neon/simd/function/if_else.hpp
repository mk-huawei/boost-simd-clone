#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_IF_ELSE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_IF_ELSE_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/detail/dispatch/meta/as_floating.hpp>
#include <boost/simd/meta/cardinal_of.hpp>
#include <boost/simd/function/bitwise_cast.hpp>
#include <boost/simd/function/genmask.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::int64_<A1>, bs::neon_>
                              , bs::pack_<bd::int64_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_s64(vreinterpretq_u64_s64(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::int32_<A1>, bs::neon_>
                              , bs::pack_<bd::int32_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_s32(vreinterpretq_u32_s32(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::int16_<A1>, bs::neon_>
                              , bs::pack_<bd::int16_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_s16(vreinterpretq_u16_s16(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::int8_<A1>, bs::neon_>
                              , bs::pack_<bd::int8_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_s8(vreinterpretq_u8_s8(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::uint64_<A1>, bs::neon_>
                              , bs::pack_<bd::uint64_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_u64(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::uint32_<A1>, bs::neon_>
                              , bs::pack_<bd::uint32_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_u32(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::uint16_<A1>, bs::neon_>
                              , bs::pack_<bd::uint16_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_u16(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD_IF ( if_else_
                              , (typename A0, typename A1)
                              , (nsm::bool_<bs::cardinal_of<A0>::value <= 8>)
                              , bs::neon_
                              , bs::pack_<logical_<A0>, bs::neon_>
                              , bs::pack_<bd::uint8_<A1>, bs::neon_>
                              , bs::pack_<bd::uint8_<A1>, bs::neon_>
                              )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0,A1 const& a1,A1 const& a2) const
     {
        return vbslq_u8(a0, a1, a2);
     }
   };

} } }

#endif
