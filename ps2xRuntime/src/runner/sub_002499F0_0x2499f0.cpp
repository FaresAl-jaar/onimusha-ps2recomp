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

// Function: sub_002499F0
// Address: 0x2499f0 - 0x249a90
void sub_002499F0_0x2499f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002499F0_0x2499f0");
#endif

    switch (ctx->pc) {
        case 0x249a14u: goto label_249a14;
        case 0x249a34u: goto label_249a34;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a48u: goto label_249a48;
        case 0x249a54u: goto label_249a54;
        case 0x249a68u: goto label_249a68;
        case 0x249a70u: goto label_249a70;
        case 0x249a78u: goto label_249a78;
        default: break;
    }

    ctx->pc = 0x2499f0u;

    // 0x2499f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2499f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2499f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2499f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2499f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2499fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2499fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x249a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x249a04: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x249A04u;
    {
        const bool branch_taken_0x249a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A04u;
        // 0x249a08: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a04) {
            ctx->pc = 0x249A7Cu;
            goto label_249a7c;
        }
    }
    ctx->pc = 0x249A0Cu;
    // 0x249a0c: 0xc092ba4  jal         func_24AE90
    ctx->pc = 0x249A0Cu;
    SET_GPR_U32(ctx, 31, 0x249A14u);
    ctx->pc = 0x249A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A0Cu;
    // 0x249a10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE90u, 0x249A0Cu, 0x249A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A14u;
label_249a14:
    // 0x249a14: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249a18: 0x24510fd0  addiu       $s1, $v0, 0xFD0
    ctx->pc = 0x249a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4048));
    // 0x249a1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x249a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a24: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x249A24u;
    {
        const bool branch_taken_0x249a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A24u;
        // 0x249a28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a24) {
            ctx->pc = 0x249A78u;
            goto label_249a78;
        }
    }
    ctx->pc = 0x249A2Cu;
    // 0x249a2c: 0xc092966  jal         func_24A598
    ctx->pc = 0x249A2Cu;
    SET_GPR_U32(ctx, 31, 0x249A34u);
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x249A2Cu, 0x249A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A34u;
label_249a34:
    // 0x249a34: 0xc091a44  jal         func_246910
    ctx->pc = 0x249A34u;
    SET_GPR_U32(ctx, 31, 0x249A3Cu);
    ctx->pc = 0x249A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A34u;
    // 0x249a38: 0x24044200  addiu       $a0, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249A34u, 0x249A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A3Cu;
label_249a3c:
    // 0x249a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a40: 0xc091b08  jal         func_246C20
    ctx->pc = 0x249A40u;
    SET_GPR_U32(ctx, 31, 0x249A48u);
    ctx->pc = 0x249A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A40u;
    // 0x249a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x249A40u, 0x249A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A48u;
label_249a48:
    // 0x249a48: 0x24044201  addiu       $a0, $zero, 0x4201
    ctx->pc = 0x249a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16897));
    // 0x249a4c: 0xc091a44  jal         func_246910
    ctx->pc = 0x249A4Cu;
    SET_GPR_U32(ctx, 31, 0x249A54u);
    ctx->pc = 0x249A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A4Cu;
    // 0x249a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249A4Cu, 0x249A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A54u;
label_249a54:
    // 0x249a54: 0x24044300  addiu       $a0, $zero, 0x4300
    ctx->pc = 0x249a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x249a58: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x249A58u;
    {
        const bool branch_taken_0x249a58 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x249A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A58u;
        // 0x249a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a58) {
            ctx->pc = 0x249A7Cu;
            goto label_249a7c;
        }
    }
    ctx->pc = 0x249A60u;
    // 0x249a60: 0xc091a44  jal         func_246910
    ctx->pc = 0x249A60u;
    SET_GPR_U32(ctx, 31, 0x249A68u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249A60u, 0x249A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A68u;
label_249a68:
    // 0x249a68: 0xc091b22  jal         func_246C88
    ctx->pc = 0x249A68u;
    SET_GPR_U32(ctx, 31, 0x249A70u);
    ctx->pc = 0x249A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A68u;
    // 0x249a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x249A68u, 0x249A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A70u;
label_249a70:
    // 0x249a70: 0xc091a44  jal         func_246910
    ctx->pc = 0x249A70u;
    SET_GPR_U32(ctx, 31, 0x249A78u);
    ctx->pc = 0x249A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A70u;
    // 0x249a74: 0x24044301  addiu       $a0, $zero, 0x4301 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249A70u, 0x249A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A78u;
label_249a78:
    // 0x249a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249a7c:
    // 0x249a7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249a80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x249a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249a84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249a88: 0x3e00008  jr          $ra
    ctx->pc = 0x249A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A88u;
        // 0x249a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249A90u;
}
