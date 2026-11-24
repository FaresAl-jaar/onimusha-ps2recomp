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

// Function: sub_00206BB8
// Address: 0x206bb8 - 0x206c3c
void sub_00206BB8_0x206bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206BB8_0x206bb8");
#endif

    switch (ctx->pc) {
        case 0x206bccu: goto label_206bcc;
        case 0x206bf0u: goto label_206bf0;
        case 0x206c04u: goto label_206c04;
        case 0x206c0cu: goto label_206c0c;
        case 0x206c20u: goto label_206c20;
        case 0x206c28u: goto label_206c28;
        default: break;
    }

    ctx->pc = 0x206bb8u;

    // 0x206bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206bc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x206bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x206bc4: 0xc081b1a  jal         func_206C68
    ctx->pc = 0x206BC4u;
    SET_GPR_U32(ctx, 31, 0x206BCCu);
    ctx->pc = 0x206C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C68u, 0x206BC4u, 0x206BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BCCu;
label_206bcc:
    // 0x206bcc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x206bd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206bd4: 0x14440015  bne         $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x206BD4u;
    {
        const bool branch_taken_0x206bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x206BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BD4u;
        // 0x206bd8: 0x24709f80  addiu       $s0, $v1, -0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bd4) {
            ctx->pc = 0x206C2Cu;
            goto label_206c2c;
        }
    }
    ctx->pc = 0x206BDCu;
    // 0x206bdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x206bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206be0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x206BE0u;
    {
        const bool branch_taken_0x206be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206be0) {
            ctx->pc = 0x206BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206BE0u;
            // 0x206be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C30u;
            goto label_206c30;
        }
    }
    ctx->pc = 0x206BE8u;
    // 0x206be8: 0xc081b3c  jal         func_206CF0
    ctx->pc = 0x206BE8u;
    SET_GPR_U32(ctx, 31, 0x206BF0u);
    ctx->pc = 0x206CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206CF0u, 0x206BE8u, 0x206BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BF0u;
label_206bf0:
    // 0x206bf0: 0x3c060088  lui         $a2, 0x88
    ctx->pc = 0x206bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)136 << 16));
    // 0x206bf4: 0x24c6ba40  addiu       $a2, $a2, -0x45C0
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949440));
    // 0x206bf8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x206bfc: 0xc081b44  jal         func_206D10
    ctx->pc = 0x206BFCu;
    SET_GPR_U32(ctx, 31, 0x206C04u);
    ctx->pc = 0x206C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BFCu;
    // 0x206c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206D10u, 0x206BFCu, 0x206C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C04u;
label_206c04:
    // 0x206c04: 0xc081bba  jal         func_206EE8
    ctx->pc = 0x206C04u;
    SET_GPR_U32(ctx, 31, 0x206C0Cu);
    ctx->pc = 0x206C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C04u;
    // 0x206c08: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206EE8u, 0x206C04u, 0x206C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C0Cu;
label_206c0c:
    // 0x206c0c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x206c10: 0x24847a40  addiu       $a0, $a0, 0x7A40
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
    // 0x206c14: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x206c18: 0xc081b7c  jal         func_206DF0
    ctx->pc = 0x206C18u;
    SET_GPR_U32(ctx, 31, 0x206C20u);
    ctx->pc = 0x206C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C18u;
    // 0x206c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206DF0u, 0x206C18u, 0x206C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C20u;
label_206c20:
    // 0x206c20: 0xc081bba  jal         func_206EE8
    ctx->pc = 0x206C20u;
    SET_GPR_U32(ctx, 31, 0x206C28u);
    ctx->pc = 0x206C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C20u;
    // 0x206c24: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206EE8u, 0x206C20u, 0x206C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C28u;
label_206c28:
    // 0x206c28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x206c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_206c2c:
    // 0x206c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206c30:
    // 0x206c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206c34: 0x3e00008  jr          $ra
    ctx->pc = 0x206C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C34u;
        // 0x206c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206C3Cu;
}
