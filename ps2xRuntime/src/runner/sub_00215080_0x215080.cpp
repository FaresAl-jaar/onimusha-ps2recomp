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

// Function: sub_00215080
// Address: 0x215080 - 0x215114
void sub_00215080_0x215080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215080_0x215080");
#endif

    switch (ctx->pc) {
        case 0x21509cu: goto label_21509c;
        case 0x2150acu: goto label_2150ac;
        case 0x2150c8u: goto label_2150c8;
        case 0x2150e0u: goto label_2150e0;
        case 0x2150e8u: goto label_2150e8;
        case 0x2150f4u: goto label_2150f4;
        case 0x2150fcu: goto label_2150fc;
        default: break;
    }

    ctx->pc = 0x215080u;

    // 0x215080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215084: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x215084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x215088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21508c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215094: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x215094u;
    SET_GPR_U32(ctx, 31, 0x21509Cu);
    ctx->pc = 0x215098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215094u;
    // 0x215098: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x215094u, 0x21509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21509Cu;
label_21509c:
    // 0x21509c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21509Cu;
    {
        const bool branch_taken_0x21509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21509Cu;
        // 0x2150a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21509c) {
            ctx->pc = 0x215100u;
            goto label_215100;
        }
    }
    ctx->pc = 0x2150A4u;
    // 0x2150a4: 0xc08548a  jal         func_215228
    ctx->pc = 0x2150A4u;
    SET_GPR_U32(ctx, 31, 0x2150ACu);
    ctx->pc = 0x215228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215228u, 0x2150A4u, 0x2150ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150ACu;
label_2150ac:
    // 0x2150ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2150acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2150b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2150B0u;
    {
        const bool branch_taken_0x2150b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2150B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B0u;
        // 0x2150b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b0) {
            ctx->pc = 0x2150C0u;
            goto label_2150c0;
        }
    }
    ctx->pc = 0x2150B8u;
    // 0x2150b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2150B8u;
    {
        const bool branch_taken_0x2150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B8u;
        // 0x2150bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b8) {
            ctx->pc = 0x215100u;
            goto label_215100;
        }
    }
    ctx->pc = 0x2150C0u;
label_2150c0:
    // 0x2150c0: 0xc085446  jal         func_215118
    ctx->pc = 0x2150C0u;
    SET_GPR_U32(ctx, 31, 0x2150C8u);
    ctx->pc = 0x215118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215118u, 0x2150C0u, 0x2150C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150C8u;
label_2150c8:
    // 0x2150c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2150c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2150cc: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2150d0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2150D0u;
    {
        const bool branch_taken_0x2150d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2150D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150D0u;
        // 0x2150d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150d0) {
            ctx->pc = 0x2150E0u;
            goto label_2150e0;
        }
    }
    ctx->pc = 0x2150D8u;
    // 0x2150d8: 0xc085462  jal         func_215188
    ctx->pc = 0x2150D8u;
    SET_GPR_U32(ctx, 31, 0x2150E0u);
    ctx->pc = 0x215188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215188u, 0x2150D8u, 0x2150E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150E0u;
label_2150e0:
    // 0x2150e0: 0xc085578  jal         func_2155E0
    ctx->pc = 0x2150E0u;
    SET_GPR_U32(ctx, 31, 0x2150E8u);
    ctx->pc = 0x2150E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150E0u;
    // 0x2150e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155E0u, 0x2150E0u, 0x2150E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150E8u;
label_2150e8:
    // 0x2150e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2150e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150ec: 0xc085490  jal         func_215240
    ctx->pc = 0x2150ECu;
    SET_GPR_U32(ctx, 31, 0x2150F4u);
    ctx->pc = 0x2150F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150ECu;
    // 0x2150f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215240u, 0x2150ECu, 0x2150F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150F4u;
label_2150f4:
    // 0x2150f4: 0xc085532  jal         func_2154C8
    ctx->pc = 0x2150F4u;
    SET_GPR_U32(ctx, 31, 0x2150FCu);
    ctx->pc = 0x2150F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150F4u;
    // 0x2150f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2154C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C8u, 0x2150F4u, 0x2150FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150FCu;
label_2150fc:
    // 0x2150fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2150fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215100:
    // 0x215100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21510c: 0x3e00008  jr          $ra
    ctx->pc = 0x21510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21510Cu;
        // 0x215110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21510Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215114u;
}
