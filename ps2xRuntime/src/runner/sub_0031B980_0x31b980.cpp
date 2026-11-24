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

// Function: sub_0031B980
// Address: 0x31b980 - 0x31ba88
void sub_0031B980_0x31b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B980_0x31b980");
#endif

    switch (ctx->pc) {
        case 0x31b9a8u: goto label_31b9a8;
        case 0x31b9b8u: goto label_31b9b8;
        case 0x31b9c4u: goto label_31b9c4;
        case 0x31b9d0u: goto label_31b9d0;
        case 0x31b9e4u: goto label_31b9e4;
        case 0x31ba00u: goto label_31ba00;
        case 0x31ba08u: goto label_31ba08;
        case 0x31ba10u: goto label_31ba10;
        case 0x31ba20u: goto label_31ba20;
        case 0x31ba28u: goto label_31ba28;
        case 0x31ba40u: goto label_31ba40;
        case 0x31ba54u: goto label_31ba54;
        case 0x31ba70u: goto label_31ba70;
        default: break;
    }

    ctx->pc = 0x31b980u;

    // 0x31b980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b998: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b99c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x31b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x31b9a0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x31B9A0u;
    SET_GPR_U32(ctx, 31, 0x31B9A8u);
    ctx->pc = 0x31B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9A0u;
    // 0x31b9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x31B9A0u, 0x31B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9A8u;
label_31b9a8:
    // 0x31b9a8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b9ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b9b0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x31B9B0u;
    SET_GPR_U32(ctx, 31, 0x31B9B8u);
    ctx->pc = 0x31B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9B0u;
    // 0x31b9b4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x31B9B0u, 0x31B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9B8u;
label_31b9b8:
    // 0x31b9b8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31b9bc: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x31B9BCu;
    SET_GPR_U32(ctx, 31, 0x31B9C4u);
    ctx->pc = 0x31B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9BCu;
    // 0x31b9c0: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x31B9BCu, 0x31B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9C4u;
label_31b9c4:
    // 0x31b9c4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x31b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x31b9c8: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x31B9C8u;
    SET_GPR_U32(ctx, 31, 0x31B9D0u);
    ctx->pc = 0x31B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9C8u;
    // 0x31b9cc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x31B9C8u, 0x31B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9D0u;
label_31b9d0:
    // 0x31b9d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b9d4: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x31b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x31b9d8: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x31b9dc: 0xc05e390  jal         func_178E40
    ctx->pc = 0x31B9DCu;
    SET_GPR_U32(ctx, 31, 0x31B9E4u);
    ctx->pc = 0x31B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9DCu;
    // 0x31b9e0: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x31B9DCu, 0x31B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9E4u;
label_31b9e4:
    // 0x31b9e4: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31b9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31b9e8: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31b9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31b9ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9f0: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x31b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x31b9f4: 0x24c6b920  addiu       $a2, $a2, -0x46E0
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949152));
    // 0x31b9f8: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x31B9F8u;
    SET_GPR_U32(ctx, 31, 0x31BA00u);
    ctx->pc = 0x31B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9F8u;
    // 0x31b9fc: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x31B9F8u, 0x31BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA00u;
label_31ba00:
    // 0x31ba00: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x31BA00u;
    SET_GPR_U32(ctx, 31, 0x31BA08u);
    ctx->pc = 0x31BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA00u;
    // 0x31ba04: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x31BA00u, 0x31BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA08u;
label_31ba08:
    // 0x31ba08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BA08u;
    {
        const bool branch_taken_0x31ba08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba08) {
            ctx->pc = 0x31BA30u;
            goto label_31ba30;
        }
    }
    ctx->pc = 0x31BA10u;
label_31ba10:
    // 0x31ba10: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ba14: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31ba18: 0xc04c918  jal         func_132460
    ctx->pc = 0x31BA18u;
    SET_GPR_U32(ctx, 31, 0x31BA20u);
    ctx->pc = 0x31BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA18u;
    // 0x31ba1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31BA18u, 0x31BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA20u;
label_31ba20:
    // 0x31ba20: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x31BA20u;
    SET_GPR_U32(ctx, 31, 0x31BA28u);
    ctx->pc = 0x31BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA20u;
    // 0x31ba24: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x31BA20u, 0x31BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA28u;
label_31ba28:
    // 0x31ba28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31BA28u;
    {
        const bool branch_taken_0x31ba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ba28) {
            ctx->pc = 0x31BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ba10;
        }
    }
    ctx->pc = 0x31BA30u;
label_31ba30:
    // 0x31ba30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ba34: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31ba38: 0xc04c918  jal         func_132460
    ctx->pc = 0x31BA38u;
    SET_GPR_U32(ctx, 31, 0x31BA40u);
    ctx->pc = 0x31BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA38u;
    // 0x31ba3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31BA38u, 0x31BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA40u;
label_31ba40:
    // 0x31ba40: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ba44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ba48: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x31ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x31ba4c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x31BA4Cu;
    SET_GPR_U32(ctx, 31, 0x31BA54u);
    ctx->pc = 0x31BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA4Cu;
    // 0x31ba50: 0x2406010c  addiu       $a2, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x31BA4Cu, 0x31BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA54u;
label_31ba54:
    // 0x31ba54: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x31ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x31ba58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ba5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31ba60: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x31ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x31ba64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ba68: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x31BA68u;
    SET_GPR_U32(ctx, 31, 0x31BA70u);
    ctx->pc = 0x31BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA68u;
    // 0x31ba6c: 0x3446010c  ori         $a2, $v0, 0x10C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)268);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x31BA68u, 0x31BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA70u;
label_31ba70:
    // 0x31ba70: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x31ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x31ba74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ba74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ba78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ba78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ba7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ba7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x31BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA80u;
        // 0x31ba84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BA88u;
}
