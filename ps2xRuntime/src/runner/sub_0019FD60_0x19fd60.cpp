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

// Function: sub_0019FD60
// Address: 0x19fd60 - 0x19fdf0
void sub_0019FD60_0x19fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FD60_0x19fd60");
#endif

    switch (ctx->pc) {
        case 0x19fd90u: goto label_19fd90;
        case 0x19fdc0u: goto label_19fdc0;
        default: break;
    }

    ctx->pc = 0x19fd60u;

    // 0x19fd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19fd64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19fd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19fd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fd70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fd78: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19fd7c: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x19fd7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x19fd80: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fd84: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x19FD84u;
    {
        const bool branch_taken_0x19fd84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD84u;
        // 0x19fd88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd84) {
            ctx->pc = 0x19FDD8u;
            goto label_19fdd8;
        }
    }
    ctx->pc = 0x19FD8Cu;
    // 0x19fd8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19fd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd90:
    // 0x19fd90: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x19fd94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x19fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x19fd98: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19fd9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x19fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19fda0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19fda4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FDA4u;
    {
        const bool branch_taken_0x19fda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fda4) {
            ctx->pc = 0x19FDC0u;
            goto label_19fdc0;
        }
    }
    ctx->pc = 0x19FDACu;
    // 0x19fdac: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19fdb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDB0u;
    {
        const bool branch_taken_0x19fdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdb0) {
            ctx->pc = 0x19FDC0u;
            goto label_19fdc0;
        }
    }
    ctx->pc = 0x19FDB8u;
    // 0x19fdb8: 0xc0681fc  jal         func_1A07F0
    ctx->pc = 0x19FDB8u;
    SET_GPR_U32(ctx, 31, 0x19FDC0u);
    ctx->pc = 0x1A07F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A07F0u, 0x19FDB8u, 0x19FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDC0u;
label_19fdc0:
    // 0x19fdc0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19fdc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19fdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19fdc8: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x19fdc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x19fdcc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fdd0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19FDD0u;
    {
        const bool branch_taken_0x19fdd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD0u;
        // 0x19fdd4: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd0) {
            ctx->pc = 0x19FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fd90;
        }
    }
    ctx->pc = 0x19FDD8u;
label_19fdd8:
    // 0x19fdd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fde0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fde8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE8u;
        // 0x19fdec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FDF0u;
}
