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

// Function: sub_0020B178
// Address: 0x20b178 - 0x20b1d8
void sub_0020B178_0x20b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B178_0x20b178");
#endif

    switch (ctx->pc) {
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        default: break;
    }

    ctx->pc = 0x20b178u;

label_20b178:
    // 0x20b178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20b17c:
    // 0x20b17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b180:
    // 0x20b180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20b184:
    // 0x20b184: 0xc082d4c  jal         func_20B530
label_20b188:
    if (ctx->pc == 0x20B188u) {
        ctx->pc = 0x20B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B184u;
        // 0x20b188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B18Cu;
        goto label_20b18c;
    }
    ctx->pc = 0x20B184u;
    SET_GPR_U32(ctx, 31, 0x20B18Cu);
    ctx->pc = 0x20B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B184u;
    // 0x20b188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B184u, 0x20B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B18Cu;
label_20b18c:
    // 0x20b18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b190:
    // 0x20b190: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_20b194:
    if (ctx->pc == 0x20B194u) {
        ctx->pc = 0x20B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B190u;
        // 0x20b194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B198u;
        goto label_20b198;
    }
    ctx->pc = 0x20B190u;
    {
        const bool branch_taken_0x20b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B190u;
        // 0x20b194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b190) {
            ctx->pc = 0x20B1A0u;
            goto label_20b1a0;
        }
    }
    ctx->pc = 0x20B198u;
label_20b198:
    // 0x20b198: 0x1000000b  b           . + 4 + (0xB << 2)
label_20b19c:
    if (ctx->pc == 0x20B19Cu) {
        ctx->pc = 0x20B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B198u;
        // 0x20b19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1A0u;
        goto label_20b1a0;
    }
    ctx->pc = 0x20B198u;
    {
        const bool branch_taken_0x20b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B198u;
        // 0x20b19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b198) {
            ctx->pc = 0x20B1C8u;
            goto label_20b1c8;
        }
    }
    ctx->pc = 0x20B1A0u;
label_20b1a0:
    // 0x20b1a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b1a4:
    // 0x20b1a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20b1a8:
    if (ctx->pc == 0x20B1A8u) {
        ctx->pc = 0x20B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A4u;
        // 0x20b1a8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1ACu;
        goto label_20b1ac;
    }
    ctx->pc = 0x20B1A4u;
    {
        const bool branch_taken_0x20b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A4u;
        // 0x20b1a8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1a4) {
            ctx->pc = 0x20B1C4u;
            goto label_20b1c4;
        }
    }
    ctx->pc = 0x20B1ACu;
label_20b1ac:
    // 0x20b1ac: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x20b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_20b1b0:
    // 0x20b1b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20b1b4:
    if (ctx->pc == 0x20B1B4u) {
        ctx->pc = 0x20B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1B0u;
        // 0x20b1b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1B8u;
        goto label_20b1b8;
    }
    ctx->pc = 0x20B1B0u;
    {
        const bool branch_taken_0x20b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1b0) {
            ctx->pc = 0x20B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B1B0u;
            // 0x20b1b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B1C8u;
            goto label_20b1c8;
        }
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x40f809  jalr        $v0
label_20b1bc:
    if (ctx->pc == 0x20B1BCu) {
        ctx->pc = 0x20B1C0u;
        goto label_20b1c0;
    }
    ctx->pc = 0x20B1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B1C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1B8u, 0x20B1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B1C0u;
label_20b1c0:
    // 0x20b1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b1c4:
    // 0x20b1c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20b1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b1c8:
    // 0x20b1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b1cc:
    // 0x20b1cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20b1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b1d0:
    // 0x20b1d0: 0x3e00008  jr          $ra
label_20b1d4:
    if (ctx->pc == 0x20B1D4u) {
        ctx->pc = 0x20B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1D0u;
        // 0x20b1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1D8u;
        goto label_fallthrough_0x20b1d0;
    }
    ctx->pc = 0x20B1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1D0u;
        // 0x20b1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b1d0:
    ctx->pc = 0x20B1D8u;
}
