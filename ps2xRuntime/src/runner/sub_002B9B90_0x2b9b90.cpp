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

// Function: sub_002B9B90
// Address: 0x2b9b90 - 0x2b9c20
void sub_002B9B90_0x2b9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B90_0x2b9b90");
#endif

    switch (ctx->pc) {
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c10u: goto label_2b9c10;
        default: break;
    }

    ctx->pc = 0x2b9b90u;

    // 0x2b9b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9b94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b9b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9b9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b9ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9ba4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2b9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2b9ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b9ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b9bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9BACu;
    {
        const bool branch_taken_0x2b9bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BACu;
        // 0x2b9bb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bac) {
            ctx->pc = 0x2B9BC0u;
            goto label_2b9bc0;
        }
    }
    ctx->pc = 0x2B9BB4u;
    // 0x2b9bb4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2b9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2b9bb8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b9bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b9bbc: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2b9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_2b9bc0:
    // 0x2b9bc0: 0xc0a6d70  jal         func_29B5C0
    ctx->pc = 0x2B9BC0u;
    SET_GPR_U32(ctx, 31, 0x2B9BC8u);
    ctx->pc = 0x2B9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BC0u;
    // 0x2b9bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x2B9BC0u, 0x2B9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BC8u;
label_2b9bc8:
    // 0x2b9bc8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2b9bcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b9bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b9bd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b9bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b9bd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b9bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b9bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b9bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9BDCu;
    {
        const bool branch_taken_0x2b9bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BDCu;
        // 0x2b9be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bdc) {
            ctx->pc = 0x2B9BF0u;
            goto label_2b9bf0;
        }
    }
    ctx->pc = 0x2B9BE4u;
    // 0x2b9be4: 0xc0ae814  jal         func_2BA050
    ctx->pc = 0x2B9BE4u;
    SET_GPR_U32(ctx, 31, 0x2B9BECu);
    ctx->pc = 0x2BA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA050u, 0x2B9BE4u, 0x2B9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BECu;
label_2b9bec:
    // 0x2b9bec: 0x0  nop
    ctx->pc = 0x2b9becu;
    // NOP
label_2b9bf0:
    // 0x2b9bf0: 0xc0a6da0  jal         func_29B680
    ctx->pc = 0x2B9BF0u;
    SET_GPR_U32(ctx, 31, 0x2B9BF8u);
    ctx->pc = 0x2B9BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BF0u;
    // 0x2b9bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x2B9BF0u, 0x2B9BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BF8u;
label_2b9bf8:
    // 0x2b9bf8: 0xc0a6de4  jal         func_29B790
    ctx->pc = 0x2B9BF8u;
    SET_GPR_U32(ctx, 31, 0x2B9C00u);
    ctx->pc = 0x2B9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BF8u;
    // 0x2b9bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B790u, 0x2B9BF8u, 0x2B9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C00u;
label_2b9c00:
    // 0x2b9c00: 0xc0a6e60  jal         func_29B980
    ctx->pc = 0x2B9C00u;
    SET_GPR_U32(ctx, 31, 0x2B9C08u);
    ctx->pc = 0x2B9C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C00u;
    // 0x2b9c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x2B9C00u, 0x2B9C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C08u;
label_2b9c08:
    // 0x2b9c08: 0xc0a6d88  jal         func_29B620
    ctx->pc = 0x2B9C08u;
    SET_GPR_U32(ctx, 31, 0x2B9C10u);
    ctx->pc = 0x2B9C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C08u;
    // 0x2b9c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x2B9C08u, 0x2B9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C10u;
label_2b9c10:
    // 0x2b9c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C18u;
        // 0x2b9c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9C20u;
}
