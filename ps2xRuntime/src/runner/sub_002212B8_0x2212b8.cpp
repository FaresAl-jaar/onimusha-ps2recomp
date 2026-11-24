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

// Function: sub_002212B8
// Address: 0x2212b8 - 0x221360
void sub_002212B8_0x2212b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002212B8_0x2212b8");
#endif

    ctx->pc = 0x2212b8u;

    // 0x2212b8: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x2212b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2212bc: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2212bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2212c0: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x2212c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2212c4: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2212c8: 0x10c001a  div         $zero, $t0, $t4
    ctx->pc = 0x2212c8u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2212cc: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x2212ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2212d0: 0x35294b54  ori         $t1, $t1, 0x4B54
    ctx->pc = 0x2212d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)19284);
    // 0x2212d4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2212d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2212d8: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x2212d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2212dc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2212e0: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2212e4: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x2212e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2212e8: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x2212e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2212ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2212ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2212f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2212f4: 0x84a8001e  lh          $t0, 0x1E($a1)
    ctx->pc = 0x2212f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x2212f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2212f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2212fc: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2212FCu;
    {
        const bool branch_taken_0x2212fc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212fc) {
            ctx->pc = 0x221300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2212FCu;
            // 0x221300: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221304u;
            goto label_221304;
        }
    }
    ctx->pc = 0x221304u;
label_221304:
    // 0x221304: 0x6812  mflo        $t5
    ctx->pc = 0x221304u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x221308: 0x1495018  mult        $t2, $t2, $t1
    ctx->pc = 0x221308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x22130c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x221310: 0x8ca90014  lw          $t1, 0x14($a1)
    ctx->pc = 0x221310u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x221314: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x221318: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x221318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x22131c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x22131cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x221320: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x221320u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x221324: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x221324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x221328: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22132c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x22132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x221330: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x221330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x221334: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x221338: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22133c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x221340: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x221348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22134c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22134cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x221350: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x221350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x221354: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x221354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x221358: 0x3e00008  jr          $ra
    ctx->pc = 0x221358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221358u;
        // 0x22135c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221360u;
}
