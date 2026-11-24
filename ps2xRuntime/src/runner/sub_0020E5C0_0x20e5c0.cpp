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

// Function: sub_0020E5C0
// Address: 0x20e5c0 - 0x20e64c
void sub_0020E5C0_0x20e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E5C0_0x20e5c0");
#endif

    switch (ctx->pc) {
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e614u: goto label_20e614;
        case 0x20e620u: goto label_20e620;
        default: break;
    }

    ctx->pc = 0x20e5c0u;

    // 0x20e5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e5c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20e5cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e5d0: 0xc083994  jal         func_20E650
    ctx->pc = 0x20E5D0u;
    SET_GPR_U32(ctx, 31, 0x20E5D8u);
    ctx->pc = 0x20E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5D0u;
    // 0x20e5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E650u, 0x20E5D0u, 0x20E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5D8u;
label_20e5d8:
    // 0x20e5d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20e5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5dc: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E5DCu;
    {
        const bool branch_taken_0x20e5dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5dc) {
            ctx->pc = 0x20E5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E5DCu;
            // 0x20e5e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E63Cu;
            goto label_20e63c;
        }
    }
    ctx->pc = 0x20E5E4u;
    // 0x20e5e4: 0x8e102004  lw          $s0, 0x2004($s0)
    ctx->pc = 0x20e5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x20e5e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x20e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20e5f0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E5F0u;
    {
        const bool branch_taken_0x20e5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5F0u;
        // 0x20e5f4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5f0) {
            ctx->pc = 0x20E638u;
            goto label_20e638;
        }
    }
    ctx->pc = 0x20E5F8u;
    // 0x20e5f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e5fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x20E5FCu;
    {
        const bool branch_taken_0x20e5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5FCu;
        // 0x20e600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5fc) {
            ctx->pc = 0x20E638u;
            goto label_20e638;
        }
    }
    ctx->pc = 0x20E604u;
    // 0x20e604: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x20e608: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x20e60c: 0xc08ca64  jal         func_232990
    ctx->pc = 0x20E60Cu;
    SET_GPR_U32(ctx, 31, 0x20E614u);
    ctx->pc = 0x20E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E60Cu;
    // 0x20e610: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232990u, 0x20E60Cu, 0x20E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E614u;
label_20e614:
    // 0x20e614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e618: 0xc08ef80  jal         func_23BE00
    ctx->pc = 0x20E618u;
    SET_GPR_U32(ctx, 31, 0x20E620u);
    ctx->pc = 0x20E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E618u;
    // 0x20e61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE00u, 0x20E618u, 0x20E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E620u;
label_20e620:
    // 0x20e620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e624: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x20e628: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x20e628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x20e62c: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x20e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
    // 0x20e630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e634: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x20e634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_20e638:
    // 0x20e638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e63c:
    // 0x20e63c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e644: 0x3e00008  jr          $ra
    ctx->pc = 0x20E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E644u;
        // 0x20e648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E64Cu;
}
