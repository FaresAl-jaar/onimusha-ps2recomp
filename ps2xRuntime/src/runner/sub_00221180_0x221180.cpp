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

// Function: sub_00221180
// Address: 0x221180 - 0x22121c
void sub_00221180_0x221180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221180_0x221180");
#endif

    ctx->pc = 0x221180u;

    // 0x221180: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x221180u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x221184: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221188: 0x8cac0010  lw          $t4, 0x10($a1)
    ctx->pc = 0x221188u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22118c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x221190: 0x10b001a  div         $zero, $t0, $t3
    ctx->pc = 0x221190u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x221194: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x221194u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x221198: 0x34425114  ori         $v0, $v0, 0x5114
    ctx->pc = 0x221198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20756);
    // 0x22119c: 0x2409059e  addiu       $t1, $zero, 0x59E
    ctx->pc = 0x22119cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
    // 0x2211a0: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2211a4: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2211A4u;
    {
        const bool branch_taken_0x2211a4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2211a4) {
            ctx->pc = 0x2211A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2211A4u;
            // 0x2211a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2211ACu;
            goto label_2211ac;
        }
    }
    ctx->pc = 0x2211ACu;
label_2211ac:
    // 0x2211ac: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2211acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2211b0: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2211b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2211b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2211b8: 0x6812  mflo        $t5
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x2211bc: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x2211bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2211c0: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x2211c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2211c4: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x2211c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2211c8: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x2211c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x2211cc: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2211d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2211d4: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x2211d8: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x2211d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2211dc: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2211e0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2211e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2211e4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2211e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2211e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2211ec: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2211ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2211f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2211f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2211f4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2211f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2211f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2211f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2211fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2211fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x221204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221208: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x221208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x22120c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x221210: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x221210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x221214: 0x3e00008  jr          $ra
    ctx->pc = 0x221214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221214u;
        // 0x221218: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22121Cu;
}
