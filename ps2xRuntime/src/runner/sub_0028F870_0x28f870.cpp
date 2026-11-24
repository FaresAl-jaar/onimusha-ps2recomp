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

// Function: sub_0028F870
// Address: 0x28f870 - 0x28f934
void sub_0028F870_0x28f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F870_0x28f870");
#endif

    switch (ctx->pc) {
        case 0x28f898u: goto label_28f898;
        case 0x28f924u: goto label_28f924;
        default: break;
    }

    ctx->pc = 0x28f870u;

    // 0x28f870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f874: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x28f874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x28f878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f87c: 0x8fb80010  lw          $t8, 0x10($sp)
    ctx->pc = 0x28f87cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f880: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x28f880u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f884: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x28f884u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f888: 0x8c2df004  lw          $t5, -0xFFC($at)
    ctx->pc = 0x28f888u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81F004u));
    // 0x28f88c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x28f890: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x28f890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x28f894: 0x0  nop
    ctx->pc = 0x28f894u;
    // NOP
label_28f898:
    // 0x28f898: 0xd6040  sll         $t4, $t5, 1
    ctx->pc = 0x28f898u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x28f89c: 0xd17c2  srl         $v0, $t5, 31
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x28f8a0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x28f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x28f8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f8a8: 0x436826  xor         $t5, $v0, $v1
    ctx->pc = 0x28f8a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x28f8ac: 0xd1202  srl         $v0, $t5, 8
    ctx->pc = 0x28f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x28f8b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x28f8b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28f8b4: 0x0  nop
    ctx->pc = 0x28f8b4u;
    // NOP
    // 0x28f8b8: 0x0  nop
    ctx->pc = 0x28f8b8u;
    // NOP
    // 0x28f8bc: 0x1010  mfhi        $v0
    ctx->pc = 0x28f8bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28f8c0: 0x1045fff5  beq         $v0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28F8C0u;
    {
        const bool branch_taken_0x28f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x28f8c0) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8C8u;
    // 0x28f8c8: 0x1046fff3  beq         $v0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x28F8C8u;
    {
        const bool branch_taken_0x28f8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x28f8c8) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8D0u;
    // 0x28f8d0: 0x1047fff1  beq         $v0, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x28F8D0u;
    {
        const bool branch_taken_0x28f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x28f8d0) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8D8u;
    // 0x28f8d8: 0x1048ffef  beq         $v0, $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28F8D8u;
    {
        const bool branch_taken_0x28f8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x28f8d8) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8E0u;
    // 0x28f8e0: 0x1049ffed  beq         $v0, $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28F8E0u;
    {
        const bool branch_taken_0x28f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x28f8e0) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8E8u;
    // 0x28f8e8: 0x104affeb  beq         $v0, $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28F8E8u;
    {
        const bool branch_taken_0x28f8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x28f8e8) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8F0u;
    // 0x28f8f0: 0x104bffe9  beq         $v0, $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28F8F0u;
    {
        const bool branch_taken_0x28f8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x28f8f0) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F8F8u;
    // 0x28f8f8: 0x1058ffe7  beq         $v0, $t8, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28F8F8u;
    {
        const bool branch_taken_0x28f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        if (branch_taken_0x28f8f8) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F900u;
    // 0x28f900: 0x104fffe5  beq         $v0, $t7, . + 4 + (-0x1B << 2)
    ctx->pc = 0x28F900u;
    {
        const bool branch_taken_0x28f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x28f900) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F908u;
    // 0x28f908: 0x104effe3  beq         $v0, $t6, . + 4 + (-0x1D << 2)
    ctx->pc = 0x28F908u;
    {
        const bool branch_taken_0x28f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        ctx->pc = 0x28F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F908u;
        // 0x28f90c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f908) {
            ctx->pc = 0x28F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F910u;
    // 0x28f910: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28f910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28f914: 0xac2df004  sw          $t5, -0xFFC($at)
    ctx->pc = 0x28f914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 13));
    // 0x28f918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f91c: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x28F91Cu;
    SET_GPR_U32(ctx, 31, 0x28F924u);
    ctx->pc = 0x28F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F91Cu;
    // 0x28f920: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x28F91Cu, 0x28F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F924u;
label_28f924:
    // 0x28f924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F92Cu;
        // 0x28f930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F934u;
}
