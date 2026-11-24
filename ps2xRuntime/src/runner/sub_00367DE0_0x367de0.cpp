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

// Function: sub_00367DE0
// Address: 0x367de0 - 0x367f68
void sub_00367DE0_0x367de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367DE0_0x367de0");
#endif

    switch (ctx->pc) {
        case 0x367e18u: goto label_367e18;
        case 0x367e48u: goto label_367e48;
        case 0x367e58u: goto label_367e58;
        case 0x367e7cu: goto label_367e7c;
        case 0x367ea0u: goto label_367ea0;
        case 0x367ed0u: goto label_367ed0;
        case 0x367f14u: goto label_367f14;
        case 0x367f28u: goto label_367f28;
        case 0x367f44u: goto label_367f44;
        default: break;
    }

    ctx->pc = 0x367de0u;

    // 0x367de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x367de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x367de4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x367de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x367de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x367de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x367dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x367decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x367df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x367df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x367df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367df8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x367df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x367e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e04: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x367e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x367e08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x367e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e0c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367e10: 0xc0bccf8  jal         func_2F33E0
    ctx->pc = 0x367E10u;
    SET_GPR_U32(ctx, 31, 0x367E18u);
    ctx->pc = 0x367E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E10u;
    // 0x367e14: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33E0u, 0x367E10u, 0x367E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E18u;
label_367e18:
    // 0x367e18: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x367e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x367e1c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x367e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x367e20: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x367E20u;
    {
        const bool branch_taken_0x367e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x367E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E20u;
        // 0x367e24: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e20) {
            ctx->pc = 0x367F48u;
            goto label_367f48;
        }
    }
    ctx->pc = 0x367E28u;
    // 0x367e28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367e2c: 0x24841870  addiu       $a0, $a0, 0x1870
    ctx->pc = 0x367e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6256));
    // 0x367e30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x367e34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x367e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x367e38: 0x600008  jr          $v1
    ctx->pc = 0x367E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x367E40u: goto label_367e40;
            case 0x367EE8u: goto label_367ee8;
            case 0x367F48u: goto label_367f48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x367E40u;
label_367e40:
    // 0x367e40: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x367E40u;
    SET_GPR_U32(ctx, 31, 0x367E48u);
    ctx->pc = 0x367E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E40u;
    // 0x367e44: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x367E40u, 0x367E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E48u;
label_367e48:
    // 0x367e48: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x367e48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x367e4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x367e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e54: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x367e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_367e58:
    // 0x367e58: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x367e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x367e5c: 0x9063001f  lbu         $v1, 0x1F($v1)
    ctx->pc = 0x367e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x367e60: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x367E60u;
    {
        const bool branch_taken_0x367e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x367E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E60u;
        // 0x367e64: 0x26830014  addiu       $v1, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e60) {
            ctx->pc = 0x367E80u;
            goto label_367e80;
        }
    }
    ctx->pc = 0x367E68u;
    // 0x367e68: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x367e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x367e6c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x367e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e74: 0xc0d9f68  jal         func_367DA0
    ctx->pc = 0x367E74u;
    SET_GPR_U32(ctx, 31, 0x367E7Cu);
    ctx->pc = 0x367E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E74u;
    // 0x367e78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367DA0u, 0x367E74u, 0x367E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E7Cu;
label_367e7c:
    // 0x367e7c: 0x0  nop
    ctx->pc = 0x367e7cu;
    // NOP
label_367e80:
    // 0x367e80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x367e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x367e84: 0x2e830003  sltiu       $v1, $s4, 0x3
    ctx->pc = 0x367e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x367e88: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x367E88u;
    {
        const bool branch_taken_0x367e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367e88) {
            ctx->pc = 0x367E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367e58;
        }
    }
    ctx->pc = 0x367E90u;
    // 0x367e90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x367e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x367e94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x367e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e98: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x367e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e9c: 0x0  nop
    ctx->pc = 0x367e9cu;
    // NOP
label_367ea0:
    // 0x367ea0: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x367ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x367ea4: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x367ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x367ea8: 0x14720009  bne         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x367EA8u;
    {
        const bool branch_taken_0x367ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x367ea8) {
            ctx->pc = 0x367ED0u;
            goto label_367ed0;
        }
    }
    ctx->pc = 0x367EB0u;
    // 0x367eb0: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x367eb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x367eb4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x367eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x367eb8: 0x34450017  ori         $a1, $v0, 0x17
    ctx->pc = 0x367eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x367ebc: 0x3c030101  lui         $v1, 0x101
    ctx->pc = 0x367ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)257 << 16));
    // 0x367ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ec4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x367ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x367ec8: 0xc0d9f68  jal         func_367DA0
    ctx->pc = 0x367EC8u;
    SET_GPR_U32(ctx, 31, 0x367ED0u);
    ctx->pc = 0x367ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EC8u;
    // 0x367ecc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367DA0u, 0x367EC8u, 0x367ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367ED0u;
label_367ed0:
    // 0x367ed0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x367ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x367ed4: 0x2e830003  sltiu       $v1, $s4, 0x3
    ctx->pc = 0x367ed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x367ed8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x367ED8u;
    {
        const bool branch_taken_0x367ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x367EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367ED8u;
        // 0x367edc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ed8) {
            ctx->pc = 0x367EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367ea0;
        }
    }
    ctx->pc = 0x367EE0u;
    // 0x367ee0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x367EE0u;
    {
        const bool branch_taken_0x367ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ee0) {
            ctx->pc = 0x367F48u;
            goto label_367f48;
        }
    }
    ctx->pc = 0x367EE8u;
label_367ee8:
    // 0x367ee8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x367ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x367eec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367EECu;
    {
        const bool branch_taken_0x367eec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x367eec) {
            ctx->pc = 0x367F00u;
            goto label_367f00;
        }
    }
    ctx->pc = 0x367EF4u;
    // 0x367ef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x367ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x367ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367EF8u;
    {
        const bool branch_taken_0x367ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EF8u;
        // 0x367efc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ef8) {
            ctx->pc = 0x367F04u;
            goto label_367f04;
        }
    }
    ctx->pc = 0x367F00u;
label_367f00:
    // 0x367f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367f04:
    // 0x367f04: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367f08: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x367f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367f0c: 0xc0bd0d4  jal         func_2F4350
    ctx->pc = 0x367F0Cu;
    SET_GPR_U32(ctx, 31, 0x367F14u);
    ctx->pc = 0x367F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F0Cu;
    // 0x367f10: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4350u, 0x367F0Cu, 0x367F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F14u;
label_367f14:
    // 0x367f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x367f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f18: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f20: 0xc0bd0d4  jal         func_2F4350
    ctx->pc = 0x367F20u;
    SET_GPR_U32(ctx, 31, 0x367F28u);
    ctx->pc = 0x367F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F20u;
    // 0x367f24: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4350u, 0x367F20u, 0x367F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F28u;
label_367f28:
    // 0x367f28: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x367F28u;
    {
        const bool branch_taken_0x367f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x367f28) {
            ctx->pc = 0x367F48u;
            goto label_367f48;
        }
    }
    ctx->pc = 0x367F30u;
    // 0x367f30: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x367f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x367f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f38: 0x34450018  ori         $a1, $v0, 0x18
    ctx->pc = 0x367f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x367f3c: 0xc0d9f68  jal         func_367DA0
    ctx->pc = 0x367F3Cu;
    SET_GPR_U32(ctx, 31, 0x367F44u);
    ctx->pc = 0x367F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F3Cu;
    // 0x367f40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367DA0u, 0x367F3Cu, 0x367F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F44u;
label_367f44:
    // 0x367f44: 0x0  nop
    ctx->pc = 0x367f44u;
    // NOP
label_367f48:
    // 0x367f48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x367f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367f4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x367f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367f50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x367f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367f60: 0x3e00008  jr          $ra
    ctx->pc = 0x367F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F60u;
        // 0x367f64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367F68u;
}
