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

// Function: sub_00298E70
// Address: 0x298e70 - 0x298f50
void sub_00298E70_0x298e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E70_0x298e70");
#endif

    switch (ctx->pc) {
        case 0x298e70u: goto label_298e70;
        case 0x298e74u: goto label_298e74;
        case 0x298e78u: goto label_298e78;
        case 0x298e7cu: goto label_298e7c;
        case 0x298e80u: goto label_298e80;
        case 0x298e84u: goto label_298e84;
        case 0x298e88u: goto label_298e88;
        case 0x298e8cu: goto label_298e8c;
        case 0x298e90u: goto label_298e90;
        case 0x298e94u: goto label_298e94;
        case 0x298e98u: goto label_298e98;
        case 0x298e9cu: goto label_298e9c;
        case 0x298ea0u: goto label_298ea0;
        case 0x298ea4u: goto label_298ea4;
        case 0x298ea8u: goto label_298ea8;
        case 0x298eacu: goto label_298eac;
        case 0x298eb0u: goto label_298eb0;
        case 0x298eb4u: goto label_298eb4;
        case 0x298eb8u: goto label_298eb8;
        case 0x298ebcu: goto label_298ebc;
        case 0x298ec0u: goto label_298ec0;
        case 0x298ec4u: goto label_298ec4;
        case 0x298ec8u: goto label_298ec8;
        case 0x298eccu: goto label_298ecc;
        case 0x298ed0u: goto label_298ed0;
        case 0x298ed4u: goto label_298ed4;
        case 0x298ed8u: goto label_298ed8;
        case 0x298edcu: goto label_298edc;
        case 0x298ee0u: goto label_298ee0;
        case 0x298ee4u: goto label_298ee4;
        case 0x298ee8u: goto label_298ee8;
        case 0x298eecu: goto label_298eec;
        case 0x298ef0u: goto label_298ef0;
        case 0x298ef4u: goto label_298ef4;
        case 0x298ef8u: goto label_298ef8;
        case 0x298efcu: goto label_298efc;
        case 0x298f00u: goto label_298f00;
        case 0x298f04u: goto label_298f04;
        case 0x298f08u: goto label_298f08;
        case 0x298f0cu: goto label_298f0c;
        case 0x298f10u: goto label_298f10;
        case 0x298f14u: goto label_298f14;
        case 0x298f18u: goto label_298f18;
        case 0x298f1cu: goto label_298f1c;
        case 0x298f20u: goto label_298f20;
        case 0x298f24u: goto label_298f24;
        case 0x298f28u: goto label_298f28;
        case 0x298f2cu: goto label_298f2c;
        case 0x298f30u: goto label_298f30;
        case 0x298f34u: goto label_298f34;
        case 0x298f38u: goto label_298f38;
        case 0x298f3cu: goto label_298f3c;
        case 0x298f40u: goto label_298f40;
        case 0x298f44u: goto label_298f44;
        case 0x298f48u: goto label_298f48;
        case 0x298f4cu: goto label_298f4c;
        default: break;
    }

    ctx->pc = 0x298e70u;

label_298e70:
    // 0x298e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_298e74:
    // 0x298e74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x298e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_298e78:
    // 0x298e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_298e7c:
    // 0x298e7c: 0x3c038ff8  lui         $v1, 0x8FF8
    ctx->pc = 0x298e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36856 << 16));
label_298e80:
    // 0x298e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_298e84:
    // 0x298e84: 0x8c22ced4  lw          $v0, -0x312C($at)
    ctx->pc = 0x298e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
label_298e88:
    // 0x298e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x298e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_298e8c:
    // 0x298e8c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_298e90:
    if (ctx->pc == 0x298E90u) {
        ctx->pc = 0x298E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E8Cu;
        // 0x298e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E94u;
        goto label_298e94;
    }
    ctx->pc = 0x298E8Cu;
    {
        const bool branch_taken_0x298e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x298E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E8Cu;
        // 0x298e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e8c) {
            ctx->pc = 0x298EA8u;
            goto label_298ea8;
        }
    }
    ctx->pc = 0x298E94u;
label_298e94:
    // 0x298e94: 0xc0a6d88  jal         func_29B620
label_298e98:
    if (ctx->pc == 0x298E98u) {
        ctx->pc = 0x298E9Cu;
        goto label_298e9c;
    }
    ctx->pc = 0x298E94u;
    SET_GPR_U32(ctx, 31, 0x298E9Cu);
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x298E94u, 0x298E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E9Cu;
label_298e9c:
    // 0x298e9c: 0x10000028  b           . + 4 + (0x28 << 2)
label_298ea0:
    if (ctx->pc == 0x298EA0u) {
        ctx->pc = 0x298EA4u;
        goto label_298ea4;
    }
    ctx->pc = 0x298E9Cu;
    {
        const bool branch_taken_0x298e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e9c) {
            ctx->pc = 0x298F40u;
            goto label_298f40;
        }
    }
    ctx->pc = 0x298EA4u;
label_298ea4:
    // 0x298ea4: 0x0  nop
    ctx->pc = 0x298ea4u;
    // NOP
label_298ea8:
    // 0x298ea8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x298ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_298eac:
    // 0x298eac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x298eacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_298eb0:
    // 0x298eb0: 0xae0229c4  sw          $v0, 0x29C4($s0)
    ctx->pc = 0x298eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10692), GPR_U32(ctx, 2));
label_298eb4:
    // 0x298eb4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x298eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_298eb8:
    // 0x298eb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_298ebc:
    // 0x298ebc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x298ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298ec0:
    // 0x298ec0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x298ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_298ec4:
    // 0x298ec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298ec8:
    // 0x298ec8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_298ecc:
    if (ctx->pc == 0x298ECCu) {
        ctx->pc = 0x298ED0u;
        goto label_298ed0;
    }
    ctx->pc = 0x298EC8u;
    {
        const bool branch_taken_0x298ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298ec8) {
            ctx->pc = 0x298EF0u;
            goto label_298ef0;
        }
    }
    ctx->pc = 0x298ED0u;
label_298ed0:
    // 0x298ed0: 0xc0b2cd0  jal         func_2CB340
label_298ed4:
    if (ctx->pc == 0x298ED4u) {
        ctx->pc = 0x298ED8u;
        goto label_298ed8;
    }
    ctx->pc = 0x298ED0u;
    SET_GPR_U32(ctx, 31, 0x298ED8u);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x298ED0u, 0x298ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298ED8u;
label_298ed8:
    // 0x298ed8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_298edc:
    if (ctx->pc == 0x298EDCu) {
        ctx->pc = 0x298EE0u;
        goto label_298ee0;
    }
    ctx->pc = 0x298ED8u;
    {
        const bool branch_taken_0x298ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298ed8) {
            ctx->pc = 0x298EF0u;
            goto label_298ef0;
        }
    }
    ctx->pc = 0x298EE0u;
label_298ee0:
    // 0x298ee0: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x298ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
label_298ee4:
    // 0x298ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298ee8:
    // 0x298ee8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_298eec:
    if (ctx->pc == 0x298EECu) {
        ctx->pc = 0x298EF0u;
        goto label_298ef0;
    }
    ctx->pc = 0x298EE8u;
    {
        const bool branch_taken_0x298ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298ee8) {
            ctx->pc = 0x298F38u;
            goto label_298f38;
        }
    }
    ctx->pc = 0x298EF0u;
label_298ef0:
    // 0x298ef0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x298ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
label_298ef4:
    // 0x298ef4: 0xc09ec64  jal         func_27B190
label_298ef8:
    if (ctx->pc == 0x298EF8u) {
        ctx->pc = 0x298EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EF4u;
        // 0x298ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298EFCu;
        goto label_298efc;
    }
    ctx->pc = 0x298EF4u;
    SET_GPR_U32(ctx, 31, 0x298EFCu);
    ctx->pc = 0x298EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EF4u;
    // 0x298ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B190u, 0x298EF4u, 0x298EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EFCu;
label_298efc:
    // 0x298efc: 0x8e06020c  lw          $a2, 0x20C($s0)
    ctx->pc = 0x298efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_298f00:
    // 0x298f00: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_298f04:
    if (ctx->pc == 0x298F04u) {
        ctx->pc = 0x298F08u;
        goto label_298f08;
    }
    ctx->pc = 0x298F00u;
    {
        const bool branch_taken_0x298f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f00) {
            ctx->pc = 0x298F28u;
            goto label_298f28;
        }
    }
    ctx->pc = 0x298F08u;
label_298f08:
    // 0x298f08: 0x920708e8  lbu         $a3, 0x8E8($s0)
    ctx->pc = 0x298f08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_298f0c:
    // 0x298f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x298f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298f10:
    // 0x298f10: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
label_298f14:
    if (ctx->pc == 0x298F14u) {
        ctx->pc = 0x298F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F10u;
        // 0x298f14: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F18u;
        goto label_298f18;
    }
    ctx->pc = 0x298F10u;
    {
        const bool branch_taken_0x298f10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x298F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F10u;
        // 0x298f14: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f10) {
            ctx->pc = 0x298F28u;
            goto label_298f28;
        }
    }
    ctx->pc = 0x298F18u;
label_298f18:
    // 0x298f18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x298f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_298f1c:
    // 0x298f1c: 0xc0ce188  jal         func_338620
label_298f20:
    if (ctx->pc == 0x298F20u) {
        ctx->pc = 0x298F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F1Cu;
        // 0x298f20: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F24u;
        goto label_298f24;
    }
    ctx->pc = 0x298F1Cu;
    SET_GPR_U32(ctx, 31, 0x298F24u);
    ctx->pc = 0x298F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F1Cu;
    // 0x298f20: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x298F1Cu, 0x298F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F24u;
label_298f24:
    // 0x298f24: 0x0  nop
    ctx->pc = 0x298f24u;
    // NOP
label_298f28:
    // 0x298f28: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x298f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_298f2c:
    // 0x298f2c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x298f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_298f30:
    // 0x298f30: 0x320f809  jalr        $t9
label_298f34:
    if (ctx->pc == 0x298F34u) {
        ctx->pc = 0x298F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F30u;
        // 0x298f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F38u;
        goto label_298f38;
    }
    ctx->pc = 0x298F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298F38u);
        ctx->pc = 0x298F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F30u;
        // 0x298f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F30u, 0x298F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298F38u;
label_298f38:
    // 0x298f38: 0xc0a6d88  jal         func_29B620
label_298f3c:
    if (ctx->pc == 0x298F3Cu) {
        ctx->pc = 0x298F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F38u;
        // 0x298f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F40u;
        goto label_298f40;
    }
    ctx->pc = 0x298F38u;
    SET_GPR_U32(ctx, 31, 0x298F40u);
    ctx->pc = 0x298F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F38u;
    // 0x298f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x298F38u, 0x298F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F40u;
label_298f40:
    // 0x298f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298f44:
    // 0x298f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_298f48:
    // 0x298f48: 0x3e00008  jr          $ra
label_298f4c:
    if (ctx->pc == 0x298F4Cu) {
        ctx->pc = 0x298F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F48u;
        // 0x298f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F50u;
        goto label_fallthrough_0x298f48;
    }
    ctx->pc = 0x298F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F48u;
        // 0x298f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298f48:
    ctx->pc = 0x298F50u;
}
