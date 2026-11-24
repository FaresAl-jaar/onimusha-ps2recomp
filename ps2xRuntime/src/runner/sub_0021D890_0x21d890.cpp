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

// Function: sub_0021D890
// Address: 0x21d890 - 0x21d930
void sub_0021D890_0x21d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D890_0x21d890");
#endif

    switch (ctx->pc) {
        case 0x21d8a4u: goto label_21d8a4;
        case 0x21d8d0u: goto label_21d8d0;
        case 0x21d8d8u: goto label_21d8d8;
        case 0x21d8e0u: goto label_21d8e0;
        case 0x21d8e8u: goto label_21d8e8;
        case 0x21d8f8u: goto label_21d8f8;
        default: break;
    }

    ctx->pc = 0x21d890u;

    // 0x21d890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d89c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21D89Cu;
    SET_GPR_U32(ctx, 31, 0x21D8A4u);
    ctx->pc = 0x21D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D89Cu;
    // 0x21d8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21D89Cu, 0x21D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8A4u;
label_21d8a4:
    // 0x21d8a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D8A4u;
    {
        const bool branch_taken_0x21d8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8A4u;
        // 0x21d8a8: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8a4) {
            ctx->pc = 0x21D8C8u;
            goto label_21d8c8;
        }
    }
    ctx->pc = 0x21D8ACu;
    // 0x21d8ac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21d8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8b8: 0x34a50131  ori         $a1, $a1, 0x131
    ctx->pc = 0x21d8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
    // 0x21d8bc: 0x80848e0  j           func_212380
    ctx->pc = 0x21D8BCu;
    ctx->pc = 0x21D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8BCu;
    // 0x21d8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21D8C4u;
    // 0x21d8c4: 0x0  nop
    ctx->pc = 0x21d8c4u;
    // NOP
label_21d8c8:
    // 0x21d8c8: 0xc08769a  jal         func_21DA68
    ctx->pc = 0x21D8C8u;
    SET_GPR_U32(ctx, 31, 0x21D8D0u);
    ctx->pc = 0x21D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8C8u;
    // 0x21d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA68u, 0x21D8C8u, 0x21D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D0u;
label_21d8d0:
    // 0x21d8d0: 0xc0845a6  jal         func_211698
    ctx->pc = 0x21D8D0u;
    SET_GPR_U32(ctx, 31, 0x21D8D8u);
    ctx->pc = 0x21D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8D0u;
    // 0x21d8d4: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211698u, 0x21D8D0u, 0x21D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D8u;
label_21d8d8:
    // 0x21d8d8: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x21D8D8u;
    SET_GPR_U32(ctx, 31, 0x21D8E0u);
    ctx->pc = 0x21D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8D8u;
    // 0x21d8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x21D8D8u, 0x21D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8E0u;
label_21d8e0:
    // 0x21d8e0: 0xc08764c  jal         func_21D930
    ctx->pc = 0x21D8E0u;
    SET_GPR_U32(ctx, 31, 0x21D8E8u);
    ctx->pc = 0x21D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8E0u;
    // 0x21d8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21D8E0u, 0x21D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8E8u;
label_21d8e8:
    // 0x21d8e8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x21d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21d8ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8f0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d8f4: 0x2443a1cc  addiu       $v1, $v0, -0x5E34
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
label_21d8f8:
    // 0x21d8f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d8fc: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D8FCu;
    {
        const bool branch_taken_0x21d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21d8fc) {
            ctx->pc = 0x21D900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D8FCu;
            // 0x21d900: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D904u;
            goto label_21d904;
        }
    }
    ctx->pc = 0x21D904u;
label_21d904:
    // 0x21d904: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21d908: 0x0  nop
    ctx->pc = 0x21d908u;
    // NOP
    // 0x21d90c: 0x0  nop
    ctx->pc = 0x21d90cu;
    // NOP
    // 0x21d910: 0x0  nop
    ctx->pc = 0x21d910u;
    // NOP
    // 0x21d914: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D914u;
    {
        const bool branch_taken_0x21d914 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x21D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D914u;
        // 0x21d918: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d914) {
            ctx->pc = 0x21D8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d8f8;
        }
    }
    ctx->pc = 0x21D91Cu;
    // 0x21d91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d920: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21d920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d928: 0x3e00008  jr          $ra
    ctx->pc = 0x21D928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D928u;
        // 0x21d92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D930u;
}
