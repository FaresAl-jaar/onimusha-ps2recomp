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

// Function: sub_00110D48
// Address: 0x110d48 - 0x110dc8
void sub_00110D48_0x110d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D48_0x110d48");
#endif

    switch (ctx->pc) {
        case 0x110d80u: goto label_110d80;
        case 0x110da4u: goto label_110da4;
        case 0x110db4u: goto label_110db4;
        default: break;
    }

    ctx->pc = 0x110d48u;

    // 0x110d48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x110d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x110d4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110d50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110d5c: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x110d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x110d60: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x110d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x110d64: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x110d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x110d68: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x110d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x110d6c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x110d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x110d70: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x110d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x110d74: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x110d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x110d78: 0xc046028  jal         func_1180A0
    ctx->pc = 0x110D78u;
    SET_GPR_U32(ctx, 31, 0x110D80u);
    ctx->pc = 0x110D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D78u;
    // 0x110d7c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x110D78u, 0x110D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D80u;
label_110d80:
    // 0x110d80: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x110d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x110d84: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x110d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x110d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d8c: 0x24840b60  addiu       $a0, $a0, 0xB60
    ctx->pc = 0x110d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    // 0x110d90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x110d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x110d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x110d9c: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110D9Cu;
    SET_GPR_U32(ctx, 31, 0x110DA4u);
    ctx->pc = 0x110DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D9Cu;
    // 0x110da0: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110D9Cu, 0x110DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DA4u;
label_110da4:
    // 0x110da4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110DA4u;
    {
        const bool branch_taken_0x110da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DA4u;
        // 0x110da8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110da4) {
            ctx->pc = 0x110DB8u;
            goto label_110db8;
        }
    }
    ctx->pc = 0x110DACu;
    // 0x110dac: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x110DACu;
    SET_GPR_U32(ctx, 31, 0x110DB4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x110DACu, 0x110DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DB4u;
label_110db4:
    // 0x110db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_110db8:
    // 0x110db8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x110db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110dbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x110DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DC0u;
        // 0x110dc4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110DC8u;
}
