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

// Function: sub_001D8180
// Address: 0x1d8180 - 0x1d8238
void sub_001D8180_0x1d8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8180_0x1d8180");
#endif

    switch (ctx->pc) {
        case 0x1d81c4u: goto label_1d81c4;
        default: break;
    }

    ctx->pc = 0x1d8180u;

    // 0x1d8180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8184: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x1d8184u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d818c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d818cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d8194: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x1d8198: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d8198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1d819c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81a0: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1d81a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x1d81a4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1d81a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81a8: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x1d81a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x1d81ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d81b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d81b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d81b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81b8: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x1d81b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81bc: 0xc07528c  jal         func_1D4A30
    ctx->pc = 0x1D81BCu;
    SET_GPR_U32(ctx, 31, 0x1D81C4u);
    ctx->pc = 0x1D81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D81BCu;
    // 0x1d81c0: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A30u, 0x1D81BCu, 0x1D81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81C4u;
label_1d81c4:
    // 0x1d81c4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1d81c8: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1d81cc: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1d81ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1d81d0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1d81d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d81d4: 0x0  nop
    ctx->pc = 0x1d81d4u;
    // NOP
    // 0x1d81d8: 0x0  nop
    ctx->pc = 0x1d81d8u;
    // NOP
    // 0x1d81dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1d81dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d81e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d81e4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1d81e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d81e8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D81E8u;
    {
        const bool branch_taken_0x1d81e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81E8u;
        // 0x1d81ec: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81e8) {
            ctx->pc = 0x1D8218u;
            goto label_1d8218;
        }
    }
    ctx->pc = 0x1D81F0u;
    // 0x1d81f0: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1d81f4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1d81f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d81f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d81f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d81fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d81fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d8200: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d8204: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1d8204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d8208: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1d8208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1d820c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D820Cu;
    {
        const bool branch_taken_0x1d820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D820Cu;
        // 0x1d8210: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d820c) {
            ctx->pc = 0x1D8220u;
            goto label_1d8220;
        }
    }
    ctx->pc = 0x1D8214u;
    // 0x1d8214: 0x0  nop
    ctx->pc = 0x1d8214u;
    // NOP
label_1d8218:
    // 0x1d8218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8218u;
    {
        const bool branch_taken_0x1d8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8218u;
        // 0x1d821c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8218) {
            ctx->pc = 0x1D8228u;
            goto label_1d8228;
        }
    }
    ctx->pc = 0x1D8220u;
label_1d8220:
    // 0x1d8220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8224: 0x0  nop
    ctx->pc = 0x1d8224u;
    // NOP
label_1d8228:
    // 0x1d8228: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d8228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d822c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d822cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8230: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8230u;
        // 0x1d8234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8238u;
}
