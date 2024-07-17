#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_SELECT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_BITWISE_SELECT_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/bitwise_cast.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int64_<A0>, bs::neon_>
                            , bs::pack_<bd::int64_<A1>, bs::neon_>
                            , bs::pack_<bd::int64_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return  vbslq_s64(vreinterpretq_u64_s64(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint64_<A0>, bs::neon_>
                            , bs::pack_<bd::int64_<A1>, bs::neon_>
                            , bs::pack_<bd::int64_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return  vbslq_s64(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int64_<A0>, bs::neon_>
                            , bs::pack_<bd::uint64_<A1>, bs::neon_>
                            , bs::pack_<bd::uint64_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return  vbslq_u64(vreinterpretq_u64_s64(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint64_<A0>, bs::neon_>
                            , bs::pack_<bd::uint64_<A1>, bs::neon_>
                            , bs::pack_<bd::uint64_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return  vbslq_u64(a0, a1, a2);
     }
   };


   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int32_<A0>, bs::neon_>
                            , bs::pack_<bd::int32_<A1>, bs::neon_>
                            , bs::pack_<bd::int32_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s32(vreinterpretq_u32_s32(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint32_<A0>, bs::neon_>
                            , bs::pack_<bd::int32_<A1>, bs::neon_>
                            , bs::pack_<bd::int32_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s32(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int32_<A0>, bs::neon_>
                            , bs::pack_<bd::uint32_<A1>, bs::neon_>
                            , bs::pack_<bd::uint32_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u32(vreinterpretq_u32_s32(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint32_<A0>, bs::neon_>
                            , bs::pack_<bd::uint32_<A1>, bs::neon_>
                            , bs::pack_<bd::uint32_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u32(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int16_<A0>, bs::neon_>
                            , bs::pack_<bd::int16_<A1>, bs::neon_>
                            , bs::pack_<bd::int16_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s16(vreinterpretq_u16_s16(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint16_<A0>, bs::neon_>
                            , bs::pack_<bd::int16_<A1>, bs::neon_>
                            , bs::pack_<bd::int16_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s16(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int16_<A0>, bs::neon_>
                            , bs::pack_<bd::uint16_<A1>, bs::neon_>
                            , bs::pack_<bd::uint16_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u16(vreinterpretq_u16_s16(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint16_<A0>, bs::neon_>
                            , bs::pack_<bd::uint16_<A1>, bs::neon_>
                            , bs::pack_<bd::uint16_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u16(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int8_<A0>, bs::neon_>
                            , bs::pack_<bd::int8_<A1>, bs::neon_>
                            , bs::pack_<bd::int8_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s8(vreinterpretq_u8_s8(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint8_<A0>, bs::neon_>
                            , bs::pack_<bd::int8_<A1>, bs::neon_>
                            , bs::pack_<bd::int8_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_s8(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int8_<A0>, bs::neon_>
                            , bs::pack_<bd::uint8_<A1>, bs::neon_>
                            , bs::pack_<bd::uint8_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u8(vreinterpretq_u8_s8(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint8_<A0>, bs::neon_>
                            , bs::pack_<bd::uint8_<A1>, bs::neon_>
                            , bs::pack_<bd::uint8_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_u8(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int32_<A0>, bs::neon_>
                            , bs::pack_<bd::single_<A1>, bs::neon_>
                            , bs::pack_<bd::single_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_f32(vreinterpretq_u32_s32(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint32_<A0>, bs::neon_>
                            , bs::pack_<bd::single_<A1>, bs::neon_>
                            , bs::pack_<bd::single_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_f32(a0, a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::int64_<A0>, bs::neon_>
                            , bs::pack_<bd::double_<A1>, bs::neon_>
                            , bs::pack_<bd::double_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_f64(vreinterpretq_u64_s64(a0), a1, a2);
     }
   };

   BOOST_DISPATCH_OVERLOAD ( bitwise_select_
                            , (typename A0, typename A1)
                            , bs::neon_
                            , bs::pack_<bd::uint64_<A0>, bs::neon_>
                            , bs::pack_<bd::double_<A1>, bs::neon_>
                            , bs::pack_<bd::double_<A1>, bs::neon_>
                            )
   {
     BOOST_FORCEINLINE A1 operator()(A0 const& a0, A1 const& a1, A1 const& a2) const
     {
        return vbslq_f64(a0, a1, a2);
     }
   };

} } }

#endif
