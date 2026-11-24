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

// Function: sub_0033AAF0
// Address: 0x33aaf0 - 0x33ab98
void sub_0033AAF0_0x33aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AAF0_0x33aaf0");
#endif

    switch (ctx->pc) {
        case 0x33ab54u: goto label_33ab54;
        default: break;
    }

    ctx->pc = 0x33aaf0u;

    // 0x33aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33aaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33aaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33aafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ab00: 0x90a208e8  lbu         $v0, 0x8E8($a1)
    ctx->pc = 0x33ab00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x33ab04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AB04u;
    {
        const bool branch_taken_0x33ab04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB04u;
        // 0x33ab08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab04) {
            ctx->pc = 0x33AB28u;
            goto label_33ab28;
        }
    }
    ctx->pc = 0x33AB0Cu;
    // 0x33ab0c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab10: 0x3410ae00  ori         $s0, $zero, 0xAE00
    ctx->pc = 0x33ab10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44544);
    // 0x33ab14: 0xdc22f8a0  ld          $v0, -0x760($at)
    ctx->pc = 0x33ab14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x90F8A0u));
    // 0x33ab18: 0x34420188  ori         $v0, $v0, 0x188
    ctx->pc = 0x33ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)392);
    // 0x33ab1c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33AB20u;
    {
        const bool branch_taken_0x33ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB20u;
        // 0x33ab24: 0xfc22f8a0  sd          $v0, -0x760($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294965408), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab20) {
            ctx->pc = 0x33AB40u;
            goto label_33ab40;
        }
    }
    ctx->pc = 0x33AB28u;
label_33ab28:
    // 0x33ab28: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab2c: 0xdc22f8a0  ld          $v0, -0x760($at)
    ctx->pc = 0x33ab2cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x90F8A0u));
    // 0x33ab30: 0x3410ae00  ori         $s0, $zero, 0xAE00
    ctx->pc = 0x33ab30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44544);
    // 0x33ab34: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x33ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x33ab38: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab3c: 0xfc22f8a0  sd          $v0, -0x760($at)
    ctx->pc = 0x33ab3cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x90F8A0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x90F8A0u, _value); } while (0);
label_33ab40:
    // 0x33ab40: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33ab44: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33ab48: 0x2405010d  addiu       $a1, $zero, 0x10D
    ctx->pc = 0x33ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    // 0x33ab4c: 0xc0c9658  jal         func_325960
    ctx->pc = 0x33AB4Cu;
    SET_GPR_U32(ctx, 31, 0x33AB54u);
    ctx->pc = 0x33AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB4Cu;
    // 0x33ab50: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325960u, 0x33AB4Cu, 0x33AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB54u;
label_33ab54:
    // 0x33ab54: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33ab58: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x33ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x33ab5c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33ab60: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab64: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x33ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x33ab68: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x33ab68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33ab6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33ab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33ab70: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x33ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x33ab74: 0xac23f840  sw          $v1, -0x7C0($at)
    ctx->pc = 0x33ab74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x90F840u, _value); } while (0);
    // 0x33ab78: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ab7c: 0x8c23f840  lw          $v1, -0x7C0($at)
    ctx->pc = 0x33ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x90F840u));
    // 0x33ab80: 0xa6230050  sh          $v1, 0x50($s1)
    ctx->pc = 0x33ab80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x33ab84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ab88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ab8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ab8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB90u;
        // 0x33ab94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB98u;
}
