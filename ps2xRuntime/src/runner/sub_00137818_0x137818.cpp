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

// Function: sub_00137818
// Address: 0x137818 - 0x1378a0
void sub_00137818_0x137818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137818_0x137818");
#endif

    switch (ctx->pc) {
        case 0x137878u: goto label_137878;
        case 0x13788cu: goto label_13788c;
        default: break;
    }

    ctx->pc = 0x137818u;

    // 0x137818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13781c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137820: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x137824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137828: 0x24504340  addiu       $s0, $v0, 0x4340
    ctx->pc = 0x137828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
    // 0x13782c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137830: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x137830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4348u, _value); } while (0);
    // 0x137834: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x137834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137838: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x137838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13783c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13783cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137840: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x137840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x137844: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x137848: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13784c: 0x34a5131d  ori         $a1, $a1, 0x131D
    ctx->pc = 0x13784cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4893);
    // 0x137850: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x137850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4350u, _value); } while (0);
    // 0x137854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137858: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13785c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x13785cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137860: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x137860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x137864: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x137864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137868: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x13786c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137870: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137870u;
    SET_GPR_U32(ctx, 31, 0x137878u);
    ctx->pc = 0x137874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137870u;
    // 0x137874: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137870u, 0x137878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137878u;
label_137878:
    // 0x137878: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137878u;
    {
        const bool branch_taken_0x137878 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137878) {
            ctx->pc = 0x13787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137878u;
            // 0x13787c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137890u;
            goto label_137890;
        }
    }
    ctx->pc = 0x137880u;
    // 0x137880: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137884: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137884u;
    SET_GPR_U32(ctx, 31, 0x13788Cu);
    ctx->pc = 0x137888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137884u;
    // 0x137888: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137884u, 0x13788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13788Cu;
label_13788c:
    // 0x13788c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_137890:
    // 0x137890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137898: 0x3e00008  jr          $ra
    ctx->pc = 0x137898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137898u;
        // 0x13789c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1378A0u;
}
