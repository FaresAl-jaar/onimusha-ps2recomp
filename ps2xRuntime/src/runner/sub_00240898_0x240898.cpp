#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240898
// Address: 0x240898 - 0x240a48
void sub_00240898_0x240898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240898_0x240898");
#endif

    switch (ctx->pc) {
        case 0x2408b4u: goto label_2408b4;
        case 0x240954u: goto label_240954;
        default: break;
    }

    ctx->pc = 0x240898u;

    // 0x240898: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x240898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24089c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24089cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a4: 0x24ac0000  addiu       $t4, $a1, 0x0
    ctx->pc = 0x2408a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x2408a8: 0x24cd0000  addiu       $t5, $a2, 0x0
    ctx->pc = 0x2408a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x2408ac: 0x24ce0040  addiu       $t6, $a2, 0x40
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2408b0: 0x24cf0020  addiu       $t7, $a2, 0x20
    ctx->pc = 0x2408b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2408b4:
    // 0x2408b4: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x2408b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2408b8: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x2408b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2408bc: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x2408bcu;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x2408c0: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x2408c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2408c4: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x2408c4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2408c8: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x2408c8u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x2408cc: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2408ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2408d0: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x2408d0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2408d4: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x2408d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2408d8: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x2408d8u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x2408dc: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2408dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2408e0: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x2408e0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2408e4: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x2408e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x2408e8: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x2408e8u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x2408ec: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2408ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2408f0: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x2408f0u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x2408f4: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x2408f4u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x2408f8: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x2408f8u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x2408fc: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2408fcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240900: 0x0  nop
    ctx->pc = 0x240900u;
    // NOP
    // 0x240904: 0x0  nop
    ctx->pc = 0x240904u;
    // NOP
    // 0x240908: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x240908u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x24090c: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x24090cu;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x240910: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x240910u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x240914: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x240914u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240918: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x240918u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x24091c: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x24091cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x240920: 0xa5022  neg         $t2, $t2
    ctx->pc = 0x240920u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 10), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x240924: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x240928: 0xa5ca0000  sh          $t2, 0x0($t6)
    ctx->pc = 0x240928u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x24092c: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x24092cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x240930: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x240934: 0x15afffdf  bne         $t5, $t7, . + 4 + (-0x21 << 2)
    ctx->pc = 0x240934u;
    {
        const bool branch_taken_0x240934 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x240938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240934u;
        // 0x240938: 0x25cefffe  addiu       $t6, $t6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240934) {
            ctx->pc = 0x2408B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2408b4;
        }
    }
    ctx->pc = 0x24093Cu;
    // 0x24093c: 0x0  nop
    ctx->pc = 0x24093cu;
    // NOP
    // 0x240940: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x240940u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x240944: 0x258c0440  addiu       $t4, $t4, 0x440
    ctx->pc = 0x240944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1088));
    // 0x240948: 0x24cd0042  addiu       $t5, $a2, 0x42
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 66));
    // 0x24094c: 0x24ce007e  addiu       $t6, $a2, 0x7E
    ctx->pc = 0x24094cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x240950: 0x24cf0060  addiu       $t7, $a2, 0x60
    ctx->pc = 0x240950u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_240954:
    // 0x240954: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x240954u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240958: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x240958u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x24095c: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x24095cu;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x240960: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x240960u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x240964: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x240964u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x240968: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x240968u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x24096c: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x24096cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240970: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x240970u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x240974: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x240974u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x240978: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x240978u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x24097c: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x24097cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240980: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x240980u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x240984: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x240984u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x240988: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x240988u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x24098c: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x24098cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240990: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x240990u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x240994: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x240994u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x240998: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x240998u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x24099c: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x24099cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2409a0: 0x0  nop
    ctx->pc = 0x2409a0u;
    // NOP
    // 0x2409a4: 0x0  nop
    ctx->pc = 0x2409a4u;
    // NOP
    // 0x2409a8: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x2409a8u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x2409ac: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x2409acu;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x2409b0: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x2409b0u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x2409b4: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2409b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2409b8: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x2409b8u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x2409bc: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x2409bcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2409c0: 0xa5ca0000  sh          $t2, 0x0($t6)
    ctx->pc = 0x2409c0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2409c4: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x2409c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x2409c8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x2409c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x2409cc: 0x15afffe1  bne         $t5, $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2409CCu;
    {
        const bool branch_taken_0x2409cc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409CCu;
        // 0x2409d0: 0x25cefffe  addiu       $t6, $t6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409cc) {
            ctx->pc = 0x240954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240954;
        }
    }
    ctx->pc = 0x2409D4u;
    // 0x2409d4: 0x0  nop
    ctx->pc = 0x2409d4u;
    // NOP
    // 0x2409d8: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x2409d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2409dc: 0x79890000  lq          $t1, 0x0($t4)
    ctx->pc = 0x2409dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2409e0: 0x71095449  phmadh      $t2, $t0, $t1
    ctx->pc = 0x2409e0u;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 10, acc); }
    // 0x2409e4: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x2409e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2409e8: 0x79890010  lq          $t1, 0x10($t4)
    ctx->pc = 0x2409e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2409ec: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x2409ecu;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x2409f0: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x2409f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x2409f4: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x2409f4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2409f8: 0x79890020  lq          $t1, 0x20($t4)
    ctx->pc = 0x2409f8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2409fc: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x2409fcu;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x240a00: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x240a00u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240a04: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x240a04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x240a08: 0x79890030  lq          $t1, 0x30($t4)
    ctx->pc = 0x240a08u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x240a0c: 0x71095c49  phmadh      $t3, $t0, $t1
    ctx->pc = 0x240a0cu;
    { __m128i evens = _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0)); 
   __m128i odds  = _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1)); 
   __m128i prod_ev = _mm_mullo_epi16(evens, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(2,0,2,0))); 
   __m128i prod_od = _mm_mullo_epi16(odds,  _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(3,1,3,1))); 
   __m128i sum_pairs = _mm_add_epi16(prod_ev, prod_od); 
   int32_t h0 = _mm_extract_epi16(sum_pairs, 0) + _mm_extract_epi16(sum_pairs, 1); 
   int32_t h1 = _mm_extract_epi16(sum_pairs, 2) + _mm_extract_epi16(sum_pairs, 3); 
   int32_t h2 = _mm_extract_epi16(sum_pairs, 4) + _mm_extract_epi16(sum_pairs, 5); 
   int32_t h3 = _mm_extract_epi16(sum_pairs, 6) + _mm_extract_epi16(sum_pairs, 7); 
   int64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); 
   acc += (int64_t)h0 + (int64_t)h1 + (int64_t)h2 + (int64_t)h3; 
   ctx->lo = (uint32_t)acc; ctx->hi = (uint32_t)(acc >> 32); 
   SET_GPR_U64(ctx, 11, acc); }
    // 0x240a10: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x240a10u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240a14: 0x710844c9  pxor        $t0, $t0, $t0
    ctx->pc = 0x240a14u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x240a18: 0x5190004  mtsah       $t0, 0x4
    ctx->pc = 0x240a18u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)4) & 0x7) << 4;
    // 0x240a1c: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x240a1cu;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x240a20: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x240a20u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240a24: 0x0  nop
    ctx->pc = 0x240a24u;
    // NOP
    // 0x240a28: 0x0  nop
    ctx->pc = 0x240a28u;
    // NOP
    // 0x240a2c: 0x71294cc9  pxor        $t1, $t1, $t1
    ctx->pc = 0x240a2cu;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x240a30: 0x5390002  mtsah       $t1, 0x2
    ctx->pc = 0x240a30u;
    ctx->sa = ((GPR_U32(ctx, 9) ^ (uint32_t)2) & 0x7) << 4;
    // 0x240a34: 0x714a5ee8  qfsrv       $t3, $t2, $t2
    ctx->pc = 0x240a34u;
    SET_GPR_VEC(ctx, 11, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x240a38: 0x714b5008  paddw       $t2, $t2, $t3
    ctx->pc = 0x240a38u;
    SET_GPR_VEC(ctx, 10, PS2_PADDW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x240a3c: 0x700a533f  psraw       $t2, $t2, 12
    ctx->pc = 0x240a3cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 10), 12));
    // 0x240a40: 0x3e00008  jr          $ra
    ctx->pc = 0x240A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A40u;
        // 0x240a44: 0xa5aa0000  sh          $t2, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240A48u;
}
