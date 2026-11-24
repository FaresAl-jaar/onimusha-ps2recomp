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

// Function: sub_00287C80
// Address: 0x287c80 - 0x287f3c
void sub_00287C80_0x287c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C80_0x287c80");
#endif

    switch (ctx->pc) {
        case 0x287cd0u: goto label_287cd0;
        case 0x287ce0u: goto label_287ce0;
        case 0x287cf0u: goto label_287cf0;
        case 0x287d2cu: goto label_287d2c;
        case 0x287d44u: goto label_287d44;
        case 0x287d54u: goto label_287d54;
        case 0x287d64u: goto label_287d64;
        case 0x287dccu: goto label_287dcc;
        case 0x287ddcu: goto label_287ddc;
        case 0x287e14u: goto label_287e14;
        case 0x287e24u: goto label_287e24;
        case 0x287e88u: goto label_287e88;
        case 0x287eb8u: goto label_287eb8;
        case 0x287ec8u: goto label_287ec8;
        case 0x287edcu: goto label_287edc;
        case 0x287ef4u: goto label_287ef4;
        case 0x287f0cu: goto label_287f0c;
        default: break;
    }

    ctx->pc = 0x287c80u;

    // 0x287c80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x287c84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x287c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x287c88: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x287c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x287c8c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x287c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x287c90: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x287c90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c94: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x287c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x287c98: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x287c98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x287c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x287ca0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x287ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ca4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x287ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x287ca8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x287ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x287cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x287cb0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x287cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x287cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x287cb8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x287cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x287cc0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x287cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cc4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x287cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cc8: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x287CC8u;
    SET_GPR_U32(ctx, 31, 0x287CD0u);
    ctx->pc = 0x287CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CC8u;
    // 0x287ccc: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x287CC8u, 0x287CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CD0u;
label_287cd0:
    // 0x287cd0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x287CD0u;
    {
        const bool branch_taken_0x287cd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x287CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CD0u;
        // 0x287cd4: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cd0) {
            ctx->pc = 0x287CE8u;
            goto label_287ce8;
        }
    }
    ctx->pc = 0x287CD8u;
    // 0x287cd8: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287CD8u;
    SET_GPR_U32(ctx, 31, 0x287CE0u);
    ctx->pc = 0x287CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CD8u;
    // 0x287cdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287CD8u, 0x287CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CE0u;
label_287ce0:
    // 0x287ce0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x287CE0u;
    {
        const bool branch_taken_0x287ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CE0u;
        // 0x287ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ce0) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287CE8u;
label_287ce8:
    // 0x287ce8: 0xc0a1210  jal         func_284840
    ctx->pc = 0x287CE8u;
    SET_GPR_U32(ctx, 31, 0x287CF0u);
    ctx->pc = 0x287CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CE8u;
    // 0x287cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284840u, 0x287CE8u, 0x287CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CF0u;
label_287cf0:
    // 0x287cf0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x287cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x287cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287cf8: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x287CF8u;
    {
        const bool branch_taken_0x287cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287cf8) {
            ctx->pc = 0x287EE8u;
            goto label_287ee8;
        }
    }
    ctx->pc = 0x287D00u;
    // 0x287d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287d04: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287D04u;
    {
        const bool branch_taken_0x287d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287d04) {
            ctx->pc = 0x287D38u;
            goto label_287d38;
        }
    }
    ctx->pc = 0x287D0Cu;
    // 0x287d0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287D0Cu;
    {
        const bool branch_taken_0x287d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d0c) {
            ctx->pc = 0x287D20u;
            goto label_287d20;
        }
    }
    ctx->pc = 0x287D14u;
    // 0x287d14: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x287D14u;
    {
        const bool branch_taken_0x287d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d14) {
            ctx->pc = 0x287F00u;
            goto label_287f00;
        }
    }
    ctx->pc = 0x287D1Cu;
    // 0x287d1c: 0x0  nop
    ctx->pc = 0x287d1cu;
    // NOP
label_287d20:
    // 0x287d20: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287d24: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287D24u;
    SET_GPR_U32(ctx, 31, 0x287D2Cu);
    ctx->pc = 0x287D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D24u;
    // 0x287d28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287D24u, 0x287D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D2Cu;
label_287d2c:
    // 0x287d2c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x287D2Cu;
    {
        const bool branch_taken_0x287d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D2Cu;
        // 0x287d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d2c) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287D34u;
    // 0x287d34: 0x0  nop
    ctx->pc = 0x287d34u;
    // NOP
label_287d38:
    // 0x287d38: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287d3c: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x287D3Cu;
    SET_GPR_U32(ctx, 31, 0x287D44u);
    ctx->pc = 0x287D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D3Cu;
    // 0x287d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x287D3Cu, 0x287D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D44u;
label_287d44:
    // 0x287d44: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x287d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x287d48: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287d4c: 0xc09d524  jal         func_275490
    ctx->pc = 0x287D4Cu;
    SET_GPR_U32(ctx, 31, 0x287D54u);
    ctx->pc = 0x287D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D4Cu;
    // 0x287d50: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x287D4Cu, 0x287D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D54u;
label_287d54:
    // 0x287d54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287D54u;
    {
        const bool branch_taken_0x287d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D54u;
        // 0x287d58: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d54) {
            ctx->pc = 0x287D70u;
            goto label_287d70;
        }
    }
    ctx->pc = 0x287D5Cu;
    // 0x287d5c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287D5Cu;
    SET_GPR_U32(ctx, 31, 0x287D64u);
    ctx->pc = 0x287D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D5Cu;
    // 0x287d60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287D5Cu, 0x287D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D64u;
label_287d64:
    // 0x287d64: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x287D64u;
    {
        const bool branch_taken_0x287d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D64u;
        // 0x287d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d64) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287D6Cu;
    // 0x287d6c: 0x0  nop
    ctx->pc = 0x287d6cu;
    // NOP
label_287d70:
    // 0x287d70: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x287d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x287d74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287d78: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x287D78u;
    {
        const bool branch_taken_0x287d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287d78) {
            ctx->pc = 0x287E30u;
            goto label_287e30;
        }
    }
    ctx->pc = 0x287D80u;
    // 0x287d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287d84: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x287D84u;
    {
        const bool branch_taken_0x287d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287d84) {
            ctx->pc = 0x287DE8u;
            goto label_287de8;
        }
    }
    ctx->pc = 0x287D8Cu;
    // 0x287d8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287D8Cu;
    {
        const bool branch_taken_0x287d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d8c) {
            ctx->pc = 0x287DA0u;
            goto label_287da0;
        }
    }
    ctx->pc = 0x287D94u;
    // 0x287d94: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x287D94u;
    {
        const bool branch_taken_0x287d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d94) {
            ctx->pc = 0x287ED0u;
            goto label_287ed0;
        }
    }
    ctx->pc = 0x287D9Cu;
    // 0x287d9c: 0x0  nop
    ctx->pc = 0x287d9cu;
    // NOP
label_287da0:
    // 0x287da0: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x287da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287da4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287da8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x287da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x287dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x287db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x287db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x287db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dbc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x287dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x287dc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc4: 0xc0a7478  jal         func_29D1E0
    ctx->pc = 0x287DC4u;
    SET_GPR_U32(ctx, 31, 0x287DCCu);
    ctx->pc = 0x287DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DC4u;
    // 0x287dc8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D1E0u, 0x287DC4u, 0x287DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DCCu;
label_287dcc:
    // 0x287dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dd0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287dd4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287DD4u;
    SET_GPR_U32(ctx, 31, 0x287DDCu);
    ctx->pc = 0x287DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DD4u;
    // 0x287dd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287DD4u, 0x287DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DDCu;
label_287ddc:
    // 0x287ddc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x287DDCu;
    {
        const bool branch_taken_0x287ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DDCu;
        // 0x287de0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ddc) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287DE4u;
    // 0x287de4: 0x0  nop
    ctx->pc = 0x287de4u;
    // NOP
label_287de8:
    // 0x287de8: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x287df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x287df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287df8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x287df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dfc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e00: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x287e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e04: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x287e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e08: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x287e08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e0c: 0xc0a1fd0  jal         func_287F40
    ctx->pc = 0x287E0Cu;
    SET_GPR_U32(ctx, 31, 0x287E14u);
    ctx->pc = 0x287E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E0Cu;
    // 0x287e10: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F40u, 0x287E0Cu, 0x287E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E14u;
label_287e14:
    // 0x287e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e18: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287e1c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287E1Cu;
    SET_GPR_U32(ctx, 31, 0x287E24u);
    ctx->pc = 0x287E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E1Cu;
    // 0x287e20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287E1Cu, 0x287E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E24u;
label_287e24:
    // 0x287e24: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x287E24u;
    {
        const bool branch_taken_0x287e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E24u;
        // 0x287e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e24) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287E2Cu;
    // 0x287e2c: 0x0  nop
    ctx->pc = 0x287e2cu;
    // NOP
label_287e30:
    // 0x287e30: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x287e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x287e34: 0x244244f0  addiu       $v0, $v0, 0x44F0
    ctx->pc = 0x287e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17648));
    // 0x287e38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x287e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x287e3c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x287e3cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x4E44F0u));
    // 0x287e40: 0x27ac00a0  addiu       $t4, $sp, 0xA0
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x287e44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x287e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x287e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x287e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e5c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x287e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x287e60: 0x7d870000  sq          $a3, 0x0($t4)
    ctx->pc = 0x287e60u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 7));
    // 0x287e64: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x287e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x287e68: 0xffb40000  sd          $s4, 0x0($sp)
    ctx->pc = 0x287e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 20));
    // 0x287e6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x287e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x287e70: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x287e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x287e74: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x287e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x287e78: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x287e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x287e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287e80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x287E80u;
    SET_GPR_U32(ctx, 31, 0x287E88u);
    ctx->pc = 0x287E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E80u;
    // 0x287e84: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x287E80u, 0x287E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E88u;
label_287e88:
    // 0x287e88: 0xffb70000  sd          $s7, 0x0($sp)
    ctx->pc = 0x287e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 23));
    // 0x287e8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e90: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x287e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287e94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x287e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x287e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x287e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x287ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x287ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x287ea8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287eac: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x287eb0: 0xc0b7920  jal         func_2DE480
    ctx->pc = 0x287EB0u;
    SET_GPR_U32(ctx, 31, 0x287EB8u);
    ctx->pc = 0x287EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EB0u;
    // 0x287eb4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE480u, 0x287EB0u, 0x287EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EB8u;
label_287eb8:
    // 0x287eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ebc: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287ec0: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287EC0u;
    SET_GPR_U32(ctx, 31, 0x287EC8u);
    ctx->pc = 0x287EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EC0u;
    // 0x287ec4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287EC0u, 0x287EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EC8u;
label_287ec8:
    // 0x287ec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x287EC8u;
    {
        const bool branch_taken_0x287ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EC8u;
        // 0x287ecc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ec8) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287ED0u;
label_287ed0:
    // 0x287ed0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287ed4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287ED4u;
    SET_GPR_U32(ctx, 31, 0x287EDCu);
    ctx->pc = 0x287ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287ED4u;
    // 0x287ed8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287ED4u, 0x287EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EDCu;
label_287edc:
    // 0x287edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x287EDCu;
    {
        const bool branch_taken_0x287edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EDCu;
        // 0x287ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287edc) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287EE4u;
    // 0x287ee4: 0x0  nop
    ctx->pc = 0x287ee4u;
    // NOP
label_287ee8:
    // 0x287ee8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287eec: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287EECu;
    SET_GPR_U32(ctx, 31, 0x287EF4u);
    ctx->pc = 0x287EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EECu;
    // 0x287ef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287EECu, 0x287EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EF4u;
label_287ef4:
    // 0x287ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x287EF4u;
    {
        const bool branch_taken_0x287ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EF4u;
        // 0x287ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ef4) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287EFCu;
    // 0x287efc: 0x0  nop
    ctx->pc = 0x287efcu;
    // NOP
label_287f00:
    // 0x287f00: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x287f04: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x287F04u;
    SET_GPR_U32(ctx, 31, 0x287F0Cu);
    ctx->pc = 0x287F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F04u;
    // 0x287f08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287F04u, 0x287F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F0Cu;
label_287f0c:
    // 0x287f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287f10:
    // 0x287f10: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x287f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x287f14: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x287f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287f18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x287f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287f1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x287f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287f20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x287f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287f24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x287f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287f28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x287f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287f2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x287f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x287f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287f34: 0x3e00008  jr          $ra
    ctx->pc = 0x287F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F34u;
        // 0x287f38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287F3Cu;
}
