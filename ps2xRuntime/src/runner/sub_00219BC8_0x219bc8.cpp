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

// Function: sub_00219BC8
// Address: 0x219bc8 - 0x219c38
void sub_00219BC8_0x219bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219BC8_0x219bc8");
#endif

    switch (ctx->pc) {
        case 0x219becu: goto label_219bec;
        case 0x219c10u: goto label_219c10;
        default: break;
    }

    ctx->pc = 0x219bc8u;

    // 0x219bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219bcc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x219bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x219bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219bd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x219bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219be0: 0x8e301fc0  lw          $s0, 0x1FC0($s1)
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x219be4: 0xc08670e  jal         func_219C38
    ctx->pc = 0x219BE4u;
    SET_GPR_U32(ctx, 31, 0x219BECu);
    ctx->pc = 0x219BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BE4u;
    // 0x219be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219C38u, 0x219BE4u, 0x219BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BECu;
label_219bec:
    // 0x219bec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x219BECu;
    {
        const bool branch_taken_0x219bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219bec) {
            ctx->pc = 0x219BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BECu;
            // 0x219bf0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219C28u;
            goto label_219c28;
        }
    }
    ctx->pc = 0x219BF4u;
    // 0x219bf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x219bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219bfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x219BFCu;
    {
        const bool branch_taken_0x219bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BFCu;
        // 0x219c00: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bfc) {
            ctx->pc = 0x219C18u;
            goto label_219c18;
        }
    }
    ctx->pc = 0x219C04u;
    // 0x219c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c08: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x219C08u;
    SET_GPR_U32(ctx, 31, 0x219C10u);
    ctx->pc = 0x219C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C08u;
    // 0x219c0c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x219C08u, 0x219C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C10u;
label_219c10:
    // 0x219c10: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x219C10u;
    {
        const bool branch_taken_0x219c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219c10) {
            ctx->pc = 0x219C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C10u;
            // 0x219c14: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219C1Cu;
            goto label_219c1c;
        }
    }
    ctx->pc = 0x219C18u;
label_219c18:
    // 0x219c18: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x219c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_219c1c:
    // 0x219c1c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x219c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x219c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_219c28:
    // 0x219c28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x219c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219c30: 0x3e00008  jr          $ra
    ctx->pc = 0x219C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219C38u;
}
