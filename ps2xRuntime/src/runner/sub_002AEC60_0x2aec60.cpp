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

// Function: sub_002AEC60
// Address: 0x2aec60 - 0x2aedb0
void sub_002AEC60_0x2aec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEC60_0x2aec60");
#endif

    switch (ctx->pc) {
        case 0x2aec8cu: goto label_2aec8c;
        case 0x2aec98u: goto label_2aec98;
        case 0x2aeca8u: goto label_2aeca8;
        case 0x2aecb8u: goto label_2aecb8;
        case 0x2aecc8u: goto label_2aecc8;
        case 0x2aecd8u: goto label_2aecd8;
        case 0x2aecf8u: goto label_2aecf8;
        case 0x2aed08u: goto label_2aed08;
        case 0x2aed18u: goto label_2aed18;
        case 0x2aed28u: goto label_2aed28;
        case 0x2aed38u: goto label_2aed38;
        case 0x2aed48u: goto label_2aed48;
        case 0x2aed58u: goto label_2aed58;
        case 0x2aed70u: goto label_2aed70;
        case 0x2aed9cu: goto label_2aed9c;
        default: break;
    }

    ctx->pc = 0x2aec60u;

    // 0x2aec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aec64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aec64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aec6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aec70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aec74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aec74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aec78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec7c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2aec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2aec80: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2aec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2aec84: 0xc0ce590  jal         func_339640
    ctx->pc = 0x2AEC84u;
    SET_GPR_U32(ctx, 31, 0x2AEC8Cu);
    ctx->pc = 0x2AEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC84u;
    // 0x2aec88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x2AEC84u, 0x2AEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC8Cu;
label_2aec8c:
    // 0x2aec8c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2aec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2aec90: 0xc0ce6a4  jal         func_339A90
    ctx->pc = 0x2AEC90u;
    SET_GPR_U32(ctx, 31, 0x2AEC98u);
    ctx->pc = 0x2AEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC90u;
    // 0x2aec94: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A90u, 0x2AEC90u, 0x2AEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC98u;
label_2aec98:
    // 0x2aec98: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aec98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aec9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeca0: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AECA0u;
    SET_GPR_U32(ctx, 31, 0x2AECA8u);
    ctx->pc = 0x2AECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECA0u;
    // 0x2aeca4: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AECA0u, 0x2AECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECA8u;
label_2aeca8:
    // 0x2aeca8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aeca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aecac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aecb0: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AECB0u;
    SET_GPR_U32(ctx, 31, 0x2AECB8u);
    ctx->pc = 0x2AECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECB0u;
    // 0x2aecb4: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AECB0u, 0x2AECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECB8u;
label_2aecb8:
    // 0x2aecb8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2aecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2aecbc: 0x8c224050  lw          $v0, 0x4050($at)
    ctx->pc = 0x2aecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x914050u));
    // 0x2aecc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AECC0u;
    {
        const bool branch_taken_0x2aecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aecc0) {
            ctx->pc = 0x2AECE8u;
            goto label_2aece8;
        }
    }
    ctx->pc = 0x2AECC8u;
label_2aecc8:
    // 0x2aecc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aeccc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aecd0: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AECD0u;
    SET_GPR_U32(ctx, 31, 0x2AECD8u);
    ctx->pc = 0x2AECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECD0u;
    // 0x2aecd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AECD0u, 0x2AECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECD8u;
label_2aecd8:
    // 0x2aecd8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2aecd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2aecdc: 0x8c224050  lw          $v0, 0x4050($at)
    ctx->pc = 0x2aecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x914050u));
    // 0x2aece0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AECE0u;
    {
        const bool branch_taken_0x2aece0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aece0) {
            ctx->pc = 0x2AECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aecc8;
        }
    }
    ctx->pc = 0x2AECE8u;
label_2aece8:
    // 0x2aece8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aece8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aecec: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aecf0: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AECF0u;
    SET_GPR_U32(ctx, 31, 0x2AECF8u);
    ctx->pc = 0x2AECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECF0u;
    // 0x2aecf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AECF0u, 0x2AECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECF8u;
label_2aecf8:
    // 0x2aecf8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aecfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed00: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AED00u;
    SET_GPR_U32(ctx, 31, 0x2AED08u);
    ctx->pc = 0x2AED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED00u;
    // 0x2aed04: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AED00u, 0x2AED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED08u;
label_2aed08:
    // 0x2aed08: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aed08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aed0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed10: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AED10u;
    SET_GPR_U32(ctx, 31, 0x2AED18u);
    ctx->pc = 0x2AED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED10u;
    // 0x2aed14: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AED10u, 0x2AED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED18u;
label_2aed18:
    // 0x2aed18: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aed18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aed1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed20: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AED20u;
    SET_GPR_U32(ctx, 31, 0x2AED28u);
    ctx->pc = 0x2AED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED20u;
    // 0x2aed24: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AED20u, 0x2AED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED28u;
label_2aed28:
    // 0x2aed28: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2aed28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2aed2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aed2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed30: 0xc0abfd4  jal         func_2AFF50
    ctx->pc = 0x2AED30u;
    SET_GPR_U32(ctx, 31, 0x2AED38u);
    ctx->pc = 0x2AED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED30u;
    // 0x2aed34: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFF50u, 0x2AED30u, 0x2AED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED38u;
label_2aed38:
    // 0x2aed38: 0x978589a0  lhu         $a1, -0x7660($gp)
    ctx->pc = 0x2aed38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936992)));
    // 0x2aed3c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aed40: 0xc0ca98c  jal         func_32A630
    ctx->pc = 0x2AED40u;
    SET_GPR_U32(ctx, 31, 0x2AED48u);
    ctx->pc = 0x2AED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED40u;
    // 0x2aed44: 0x24845860  addiu       $a0, $a0, 0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A630u, 0x2AED40u, 0x2AED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED48u;
label_2aed48:
    // 0x2aed48: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aed48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aed4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed50: 0xc0ac070  jal         func_2B01C0
    ctx->pc = 0x2AED50u;
    SET_GPR_U32(ctx, 31, 0x2AED58u);
    ctx->pc = 0x2AED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED50u;
    // 0x2aed54: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B01C0u, 0x2AED50u, 0x2AED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED58u;
label_2aed58:
    // 0x2aed58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aed5c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2aed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2aed60: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aed64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed68: 0xc04c900  jal         func_132400
    ctx->pc = 0x2AED68u;
    SET_GPR_U32(ctx, 31, 0x2AED70u);
    ctx->pc = 0x2AED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED68u;
    // 0x2aed6c: 0x24c6f2a0  addiu       $a2, $a2, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132400u, 0x2AED68u, 0x2AED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED70u;
label_2aed70:
    // 0x2aed70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aed70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aed74: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aed74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aed78: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2aed78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2aed7c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2aed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2aed80: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aed84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed88: 0xaf8089a4  sw          $zero, -0x765C($gp)
    ctx->pc = 0x2aed88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936996), GPR_U32(ctx, 0));
    // 0x2aed8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2aed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2aed90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aed94: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AED94u;
    SET_GPR_U32(ctx, 31, 0x2AED9Cu);
    ctx->pc = 0x2AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED94u;
    // 0x2aed98: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AED94u, 0x2AED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED9Cu;
label_2aed9c:
    // 0x2aed9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aeda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aeda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDA8u;
        // 0x2aedac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEDB0u;
}
