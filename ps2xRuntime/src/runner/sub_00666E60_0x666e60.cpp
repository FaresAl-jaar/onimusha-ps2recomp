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

// Function: sub_00666E60
// Address: 0x666e60 - 0x666e8c
void sub_00666E60_0x666e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00666E60_0x666e60");
#endif

    ctx->pc = 0x666e60u;

    // 0x666e60: 0x666e20  .word       0x00666E20                   # add         $t5, $v1, $a2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666e60u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x666e64: 0xea24  .word       0x0000EA24                   # and         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666e64u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x666e68: 0x304  .word       0x00000304                   # sllv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666e68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x666e6c: 0x0  nop
    ctx->pc = 0x666e6cu;
    // NOP
    // 0x666e70: 0x32313145  andi        $s1, $s1, 0x3145
    ctx->pc = 0x666e70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12613);
    // 0x666e74: 0x31313632  andi        $s1, $t1, 0x3632
    ctx->pc = 0x666e74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)13874);
    // 0x666e78: 0x50776d20  beql        $v1, $s7, . + 4 + (0x6D20 << 2)
    ctx->pc = 0x666E78u;
    {
        const bool branch_taken_0x666e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x666e78) {
            ctx->pc = 0x666E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x666E78u;
            // 0x666e7c: 0x6e49796c  ldr         $t1, 0x796C($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31084); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6822FCu;
            return;
        }
    }
    ctx->pc = 0x666E80u;
    // 0x666e80: 0x66537469  daddiu      $s3, $s2, 0x7469
    ctx->pc = 0x666e80u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)29801);
    // 0x666e84: 0x3a784664  xori        $t8, $s3, 0x4664
    ctx->pc = 0x666e84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)18020);
    // 0x666e88: 0x72706920  .word       0x72706920                   # madd1       $t5, $s3, $s0 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x666e88u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    ctx->pc = 0x666e8cu;
}
