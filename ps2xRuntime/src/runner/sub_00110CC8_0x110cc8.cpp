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

// Function: sub_00110CC8
// Address: 0x110cc8 - 0x110d48
void sub_00110CC8_0x110cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110CC8_0x110cc8");
#endif

    switch (ctx->pc) {
        case 0x110d00u: goto label_110d00;
        case 0x110d24u: goto label_110d24;
        case 0x110d34u: goto label_110d34;
        default: break;
    }

    ctx->pc = 0x110cc8u;

    // 0x110cc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x110cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x110ccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110cd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110cdc: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x110cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x110ce0: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x110ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x110ce4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x110ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x110ce8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x110ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x110cec: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x110cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x110cf0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x110cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x110cf4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x110cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x110cf8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x110CF8u;
    SET_GPR_U32(ctx, 31, 0x110D00u);
    ctx->pc = 0x110CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CF8u;
    // 0x110cfc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x110CF8u, 0x110D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D00u;
label_110d00:
    // 0x110d00: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x110d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x110d04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x110d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x110d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d0c: 0x24840b38  addiu       $a0, $a0, 0xB38
    ctx->pc = 0x110d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2872));
    // 0x110d10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x110d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x110d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x110d1c: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110D1Cu;
    SET_GPR_U32(ctx, 31, 0x110D24u);
    ctx->pc = 0x110D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D1Cu;
    // 0x110d20: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110D1Cu, 0x110D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D24u;
label_110d24:
    // 0x110d24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110D24u;
    {
        const bool branch_taken_0x110d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D24u;
        // 0x110d28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d24) {
            ctx->pc = 0x110D38u;
            goto label_110d38;
        }
    }
    ctx->pc = 0x110D2Cu;
    // 0x110d2c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x110D2Cu;
    SET_GPR_U32(ctx, 31, 0x110D34u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x110D2Cu, 0x110D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D34u;
label_110d34:
    // 0x110d34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_110d38:
    // 0x110d38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x110d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110d3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110d40: 0x3e00008  jr          $ra
    ctx->pc = 0x110D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D40u;
        // 0x110d44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D48u;
}
