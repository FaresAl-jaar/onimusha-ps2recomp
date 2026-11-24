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

// Function: sub_002F5EA0
// Address: 0x2f5ea0 - 0x2f60a4
void sub_002F5EA0_0x2f5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5EA0_0x2f5ea0");
#endif

    switch (ctx->pc) {
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f6068u: goto label_2f6068;
        case 0x2f608cu: goto label_2f608c;
        default: break;
    }

    ctx->pc = 0x2f5ea0u;

    // 0x2f5ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5eac: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f5eacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f5eb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5EB0u;
    {
        const bool branch_taken_0x2f5eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EB0u;
        // 0x2f5eb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5eb0) {
            ctx->pc = 0x2F5ED0u;
            goto label_2f5ed0;
        }
    }
    ctx->pc = 0x2F5EB8u;
    // 0x2f5eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5ebc: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5ec0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5ec4: 0xc0dc8f0  jal         func_3723C0
    ctx->pc = 0x2F5EC4u;
    SET_GPR_U32(ctx, 31, 0x2F5ECCu);
    ctx->pc = 0x2F5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EC4u;
    // 0x2f5ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3723C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723C0u, 0x2F5EC4u, 0x2F5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5ECCu;
label_2f5ecc:
    // 0x2f5ecc: 0x0  nop
    ctx->pc = 0x2f5eccu;
    // NOP
label_2f5ed0:
    // 0x2f5ed0: 0xc0dc8f8  jal         func_3723E0
    ctx->pc = 0x2F5ED0u;
    SET_GPR_U32(ctx, 31, 0x2F5ED8u);
    ctx->pc = 0x3723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723E0u, 0x2F5ED0u, 0x2F5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5ED8u;
label_2f5ed8:
    // 0x2f5ed8: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2f5ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f5edc: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x2F5EDCu;
    {
        const bool branch_taken_0x2f5edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EDCu;
        // 0x2f5ee0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5edc) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5EE4u;
    // 0x2f5ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f5ee8: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
    // 0x2f5eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5ef4: 0x400008  jr          $v0
    ctx->pc = 0x2F5EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5F00u: goto label_2f5f00;
            case 0x2F5F58u: goto label_2f5f58;
            case 0x2F5FA8u: goto label_2f5fa8;
            case 0x2F5FC8u: goto label_2f5fc8;
            case 0x2F5FE8u: goto label_2f5fe8;
            case 0x2F6038u: goto label_2f6038;
            case 0x2F6090u: goto label_2f6090;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5EF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F5EFCu;
    // 0x2f5efc: 0x0  nop
    ctx->pc = 0x2f5efcu;
    // NOP
label_2f5f00:
    // 0x2f5f00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5f04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f5f08: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5F08u;
    {
        const bool branch_taken_0x2f5f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F08u;
        // 0x2f5f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f08) {
            ctx->pc = 0x2F5F28u;
            goto label_2f5f28;
        }
    }
    ctx->pc = 0x2F5F10u;
    // 0x2f5f10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f5f14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5f18: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5F18u;
    SET_GPR_U32(ctx, 31, 0x2F5F20u);
    ctx->pc = 0x2F5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F18u;
    // 0x2f5f1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5F18u, 0x2F5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F20u;
label_2f5f20:
    // 0x2f5f20: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5F28u;
label_2f5f28:
    // 0x2f5f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f2c: 0xc0b3a54  jal         func_2CE950
    ctx->pc = 0x2F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5F34u);
    ctx->pc = 0x2F5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F2Cu;
    // 0x2f5f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE950u, 0x2F5F2Cu, 0x2F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F34u;
label_2f5f34:
    // 0x2f5f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5f38: 0xc0b3a54  jal         func_2CE950
    ctx->pc = 0x2F5F38u;
    SET_GPR_U32(ctx, 31, 0x2F5F40u);
    ctx->pc = 0x2F5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F38u;
    // 0x2f5f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE950u, 0x2F5F38u, 0x2F5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F40u;
label_2f5f40:
    // 0x2f5f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f44: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5F44u;
    SET_GPR_U32(ctx, 31, 0x2F5F4Cu);
    ctx->pc = 0x2F5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F44u;
    // 0x2f5f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5F44u, 0x2F5F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F4Cu;
label_2f5f4c:
    // 0x2f5f4c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2F5F4Cu;
    {
        const bool branch_taken_0x2f5f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f4c) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5F54u;
    // 0x2f5f54: 0x0  nop
    ctx->pc = 0x2f5f54u;
    // NOP
label_2f5f58:
    // 0x2f5f58: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x2f5f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x2f5f5c: 0x94231402  lhu         $v1, 0x1402($at)
    ctx->pc = 0x2f5f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x921402u));
    // 0x2f5f60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5f64: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5F64u;
    {
        const bool branch_taken_0x2f5f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F64u;
        // 0x2f5f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f64) {
            ctx->pc = 0x2F5F88u;
            goto label_2f5f88;
        }
    }
    ctx->pc = 0x2F5F6Cu;
    // 0x2f5f6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f5f70: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2f5f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2f5f74: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5F74u;
    SET_GPR_U32(ctx, 31, 0x2F5F7Cu);
    ctx->pc = 0x2F5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F74u;
    // 0x2f5f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5F74u, 0x2F5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F7Cu;
label_2f5f7c:
    // 0x2f5f7c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2F5F7Cu;
    {
        const bool branch_taken_0x2f5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f7c) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5F84u;
    // 0x2f5f84: 0x0  nop
    ctx->pc = 0x2f5f84u;
    // NOP
label_2f5f88:
    // 0x2f5f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f5f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f5f94: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2f5f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f5f98: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5F98u;
    SET_GPR_U32(ctx, 31, 0x2F5FA0u);
    ctx->pc = 0x2F5F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F98u;
    // 0x2f5f9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5F98u, 0x2F5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FA0u;
label_2f5fa0:
    // 0x2f5fa0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F5FA0u;
    {
        const bool branch_taken_0x2f5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5fa0) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5FA8u;
label_2f5fa8:
    // 0x2f5fa8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x2f5fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x2f5fac: 0x8c261404  lw          $a2, 0x1404($at)
    ctx->pc = 0x2f5facu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x921404u));
    // 0x2f5fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5fb8: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5FB8u;
    SET_GPR_U32(ctx, 31, 0x2F5FC0u);
    ctx->pc = 0x2F5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FB8u;
    // 0x2f5fbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5FB8u, 0x2F5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FC0u;
label_2f5fc0:
    // 0x2f5fc0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F5FC0u;
    {
        const bool branch_taken_0x2f5fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5fc0) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5FC8u;
label_2f5fc8:
    // 0x2f5fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fcc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f5fd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fd4: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5FD4u;
    SET_GPR_U32(ctx, 31, 0x2F5FDCu);
    ctx->pc = 0x2F5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FD4u;
    // 0x2f5fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5FD4u, 0x2F5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FDCu;
label_2f5fdc:
    // 0x2f5fdc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F5FDCu;
    {
        const bool branch_taken_0x2f5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5fdc) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F5FE4u;
    // 0x2f5fe4: 0x0  nop
    ctx->pc = 0x2f5fe4u;
    // NOP
label_2f5fe8:
    // 0x2f5fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fec: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5FECu;
    SET_GPR_U32(ctx, 31, 0x2F5FF4u);
    ctx->pc = 0x2F5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FECu;
    // 0x2f5ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5FECu, 0x2F5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FF4u;
label_2f5ff4:
    // 0x2f5ff4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5ff8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f5ffc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2f5ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2f6000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6000u;
    {
        const bool branch_taken_0x2f6000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6000u;
        // 0x2f6004: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6000) {
            ctx->pc = 0x2F6018u;
            goto label_2f6018;
        }
    }
    ctx->pc = 0x2F6008u;
    // 0x2f6008: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f600c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f6010: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x2f6010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    // 0x2f6014: 0x0  nop
    ctx->pc = 0x2f6014u;
    // NOP
label_2f6018:
    // 0x2f6018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f601c: 0xaf828b64  sw          $v0, -0x749C($gp)
    ctx->pc = 0x2f601cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
    // 0x2f6020: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f6024: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f6028: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f602c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f6030: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F6030u;
    {
        const bool branch_taken_0x2f6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6030u;
        // 0x2f6034: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6030) {
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F6038u;
label_2f6038:
    // 0x2f6038: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f603c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f603cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f6040: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f6040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2f6044: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6044u;
    {
        const bool branch_taken_0x2f6044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6044u;
        // 0x2f6048: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6044) {
            ctx->pc = 0x2F6070u;
            goto label_2f6070;
        }
    }
    ctx->pc = 0x2F604Cu;
    // 0x2f604c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2f604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2f6050: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2f6050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2f6054: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2f6054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2f6058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f605c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f6060: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x2F6060u;
    SET_GPR_U32(ctx, 31, 0x2F6068u);
    ctx->pc = 0x2F6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6060u;
    // 0x2f6064: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x2F6060u, 0x2F6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6068u;
label_2f6068:
    // 0x2f6068: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f6068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f606c: 0x0  nop
    ctx->pc = 0x2f606cu;
    // NOP
label_2f6070:
    // 0x2f6070: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f6070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f6074: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f6074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f6078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f607c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2f607cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f6080: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2f6080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f6084: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6084u;
    SET_GPR_U32(ctx, 31, 0x2F608Cu);
    ctx->pc = 0x2F6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6084u;
    // 0x2f6088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6084u, 0x2F608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F608Cu;
label_2f608c:
    // 0x2f608c: 0x0  nop
    ctx->pc = 0x2f608cu;
    // NOP
label_2f6090:
    // 0x2f6090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f609c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F609Cu;
        // 0x2f60a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F60A4u;
}
