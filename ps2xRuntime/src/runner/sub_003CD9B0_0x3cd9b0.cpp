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

// Function: sub_003CD9B0
// Address: 0x3cd9b0 - 0x3ce250
void sub_003CD9B0_0x3cd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD9B0_0x3cd9b0");
#endif

    switch (ctx->pc) {
        case 0x3cd9d8u: goto label_3cd9d8;
        case 0x3cda00u: goto label_3cda00;
        case 0x3cda18u: goto label_3cda18;
        case 0x3cda58u: goto label_3cda58;
        case 0x3cda70u: goto label_3cda70;
        case 0x3cdaa8u: goto label_3cdaa8;
        case 0x3cdabcu: goto label_3cdabc;
        case 0x3cdae0u: goto label_3cdae0;
        case 0x3cdb08u: goto label_3cdb08;
        case 0x3cdb1cu: goto label_3cdb1c;
        case 0x3cdb40u: goto label_3cdb40;
        case 0x3cdb8cu: goto label_3cdb8c;
        case 0x3cdbdcu: goto label_3cdbdc;
        case 0x3cdbf8u: goto label_3cdbf8;
        case 0x3cdc10u: goto label_3cdc10;
        case 0x3cdc20u: goto label_3cdc20;
        case 0x3cdc3cu: goto label_3cdc3c;
        case 0x3cdc54u: goto label_3cdc54;
        case 0x3cdc64u: goto label_3cdc64;
        case 0x3cdc84u: goto label_3cdc84;
        case 0x3cdd40u: goto label_3cdd40;
        case 0x3cddb8u: goto label_3cddb8;
        case 0x3cddd0u: goto label_3cddd0;
        case 0x3cdde8u: goto label_3cdde8;
        case 0x3cddf8u: goto label_3cddf8;
        case 0x3cde14u: goto label_3cde14;
        case 0x3cde24u: goto label_3cde24;
        case 0x3cde48u: goto label_3cde48;
        case 0x3cde5cu: goto label_3cde5c;
        case 0x3cdf24u: goto label_3cdf24;
        case 0x3cdf4cu: goto label_3cdf4c;
        case 0x3cdf64u: goto label_3cdf64;
        case 0x3cdf88u: goto label_3cdf88;
        case 0x3cdf9cu: goto label_3cdf9c;
        case 0x3cdfc0u: goto label_3cdfc0;
        case 0x3cdfd0u: goto label_3cdfd0;
        case 0x3cdfe0u: goto label_3cdfe0;
        case 0x3ce028u: goto label_3ce028;
        case 0x3ce030u: goto label_3ce030;
        case 0x3ce040u: goto label_3ce040;
        case 0x3ce088u: goto label_3ce088;
        case 0x3ce098u: goto label_3ce098;
        case 0x3ce0ccu: goto label_3ce0cc;
        case 0x3ce0dcu: goto label_3ce0dc;
        case 0x3ce138u: goto label_3ce138;
        case 0x3ce150u: goto label_3ce150;
        case 0x3ce168u: goto label_3ce168;
        case 0x3ce178u: goto label_3ce178;
        case 0x3ce194u: goto label_3ce194;
        case 0x3ce238u: goto label_3ce238;
        default: break;
    }

    ctx->pc = 0x3cd9b0u;

    // 0x3cd9b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3cd9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3cd9b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cd9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3cd9b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cd9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3cd9bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cd9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cd9c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cd9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd9c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cd9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd9c8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD9C8u;
    {
        const bool branch_taken_0x3cd9c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9C8u;
        // 0x3cd9cc: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9c8) {
            ctx->pc = 0x3CD9E0u;
            goto label_3cd9e0;
        }
    }
    ctx->pc = 0x3CD9D0u;
    // 0x3cd9d0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CD9D0u;
    SET_GPR_U32(ctx, 31, 0x3CD9D8u);
    ctx->pc = 0x3CD9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD9D0u;
    // 0x3cd9d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CD9D0u, 0x3CD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD9D8u;
label_3cd9d8:
    // 0x3cd9d8: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x3CD9D8u;
    {
        const bool branch_taken_0x3cd9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd9d8) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CD9E0u;
label_3cd9e0:
    // 0x3cd9e0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CD9E0u;
    {
        const bool branch_taken_0x3cd9e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd9e0) {
            ctx->pc = 0x3CDA08u;
            goto label_3cda08;
        }
    }
    ctx->pc = 0x3CD9E8u;
    // 0x3cd9e8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3cd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3cd9ec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3cd9ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cd9f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD9F0u;
    {
        const bool branch_taken_0x3cd9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9F0u;
        // 0x3cd9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9f0) {
            ctx->pc = 0x3CDA08u;
            goto label_3cda08;
        }
    }
    ctx->pc = 0x3CD9F8u;
    // 0x3cd9f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CD9F8u;
    SET_GPR_U32(ctx, 31, 0x3CDA00u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CD9F8u, 0x3CDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA00u;
label_3cda00:
    // 0x3cda00: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x3CDA00u;
    {
        const bool branch_taken_0x3cda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cda00) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDA08u;
label_3cda08:
    // 0x3cda08: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x3cda08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x3cda0c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3cda10: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3CDA10u;
    SET_GPR_U32(ctx, 31, 0x3CDA18u);
    ctx->pc = 0x3CDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA10u;
    // 0x3cda14: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3CDA10u, 0x3CDA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA18u;
label_3cda18:
    // 0x3cda18: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x3cda18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3cda1c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3cda1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3cda20: 0x10200205  beqz        $at, . + 4 + (0x205 << 2)
    ctx->pc = 0x3CDA20u;
    {
        const bool branch_taken_0x3cda20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA20u;
        // 0x3cda24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda20) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDA28u;
    // 0x3cda28: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3cda28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3cda2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cda30: 0x24843020  addiu       $a0, $a0, 0x3020
    ctx->pc = 0x3cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12320));
    // 0x3cda34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cda38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cda3c: 0x600008  jr          $v1
    ctx->pc = 0x3CDA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CDA48u: goto label_3cda48;
            case 0x3CDB48u: goto label_3cdb48;
            case 0x3CDB68u: goto label_3cdb68;
            case 0x3CDD48u: goto label_3cdd48;
            case 0x3CDD68u: goto label_3cdd68;
            case 0x3CDFB0u: goto label_3cdfb0;
            case 0x3CE068u: goto label_3ce068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDA3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CDA44u;
    // 0x3cda44: 0x0  nop
    ctx->pc = 0x3cda44u;
    // NOP
label_3cda48:
    // 0x3cda48: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CDA48u;
    {
        const bool branch_taken_0x3cda48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA48u;
        // 0x3cda4c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda48) {
            ctx->pc = 0x3CDAB0u;
            goto label_3cdab0;
        }
    }
    ctx->pc = 0x3CDA50u;
    // 0x3cda50: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3CDA50u;
    SET_GPR_U32(ctx, 31, 0x3CDA58u);
    ctx->pc = 0x3CDA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA50u;
    // 0x3cda54: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3CDA50u, 0x3CDA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA58u;
label_3cda58:
    // 0x3cda58: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3cda58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cda5c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3cda5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3cda60: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3cda60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3cda64: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3cda64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cda68: 0xc0aa100  jal         func_2A8400
    ctx->pc = 0x3CDA68u;
    SET_GPR_U32(ctx, 31, 0x3CDA70u);
    ctx->pc = 0x3CDA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA68u;
    // 0x3cda6c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8400u, 0x3CDA68u, 0x3CDA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA70u;
label_3cda70:
    // 0x3cda70: 0xae420550  sw          $v0, 0x550($s2)
    ctx->pc = 0x3cda70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 2));
    // 0x3cda74: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cda74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cda78: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3cda78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cda7c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3cda80: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cda80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cda84: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3cda84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3cda88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cda88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda8c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x3cda8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cda90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cda90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cda94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cda98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cda9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdaa0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CDAA0u;
    SET_GPR_U32(ctx, 31, 0x3CDAA8u);
    ctx->pc = 0x3CDAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAA0u;
    // 0x3cdaa4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CDAA0u, 0x3CDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAA8u;
label_3cdaa8:
    // 0x3cdaa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CDAA8u;
    {
        const bool branch_taken_0x3cdaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdaa8) {
            ctx->pc = 0x3CDAC0u;
            goto label_3cdac0;
        }
    }
    ctx->pc = 0x3CDAB0u;
label_3cdab0:
    // 0x3cdab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdab4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CDAB4u;
    SET_GPR_U32(ctx, 31, 0x3CDABCu);
    ctx->pc = 0x3CDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAB4u;
    // 0x3cdab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CDAB4u, 0x3CDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDABCu;
label_3cdabc:
    // 0x3cdabc: 0x0  nop
    ctx->pc = 0x3cdabcu;
    // NOP
label_3cdac0:
    // 0x3cdac0: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3cdac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3cdac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cdac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cdac8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CDAC8u;
    {
        const bool branch_taken_0x3cdac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDAC8u;
        // 0x3cdacc: 0xa2420521  sb          $v0, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdac8) {
            ctx->pc = 0x3CDB10u;
            goto label_3cdb10;
        }
    }
    ctx->pc = 0x3CDAD0u;
    // 0x3cdad0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3cdad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3cdad4: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdad8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CDAD8u;
    SET_GPR_U32(ctx, 31, 0x3CDAE0u);
    ctx->pc = 0x3CDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAD8u;
    // 0x3cdadc: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CDAD8u, 0x3CDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAE0u;
label_3cdae0:
    // 0x3cdae0: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x3cdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x3cdae4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cdae8: 0x92430559  lbu         $v1, 0x559($s2)
    ctx->pc = 0x3cdae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cdaec: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdaf0: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x3cdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x3cdaf4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cdaf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cdafc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cdafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cdb00: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CDB00u;
    SET_GPR_U32(ctx, 31, 0x3CDB08u);
    ctx->pc = 0x3CDB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDB00u;
    // 0x3cdb04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CDB00u, 0x3CDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB08u;
label_3cdb08:
    // 0x3cdb08: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x3CDB08u;
    {
        const bool branch_taken_0x3cdb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb08) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDB10u;
label_3cdb10:
    // 0x3cdb10: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdb14: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3CDB14u;
    SET_GPR_U32(ctx, 31, 0x3CDB1Cu);
    ctx->pc = 0x3CDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDB14u;
    // 0x3cdb18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3CDB14u, 0x3CDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB1Cu;
label_3cdb1c:
    // 0x3cdb1c: 0x92430559  lbu         $v1, 0x559($s2)
    ctx->pc = 0x3cdb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cdb20: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cdb24: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdb28: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x3cdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x3cdb2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cdb30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cdb34: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cdb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cdb38: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CDB38u;
    SET_GPR_U32(ctx, 31, 0x3CDB40u);
    ctx->pc = 0x3CDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDB38u;
    // 0x3cdb3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CDB38u, 0x3CDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB40u;
label_3cdb40:
    // 0x3cdb40: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x3CDB40u;
    {
        const bool branch_taken_0x3cdb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb40) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDB48u;
label_3cdb48:
    // 0x3cdb48: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x3cdb48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x3cdb4c: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x3cdb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cdb50: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x3cdb50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cdb54: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x3cdb54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cdb58: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3cdb58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cdb5c: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3cdb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3cdb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cdb64: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3cdb64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3cdb68:
    // 0x3cdb68: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3cdb6c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3cdb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3cdb70: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3cdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cdb74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3cdb78: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x3cdb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdb7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3cdb7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cdb80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3cdb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3cdb84: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3CDB84u;
    SET_GPR_U32(ctx, 31, 0x3CDB8Cu);
    ctx->pc = 0x3CDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDB84u;
    // 0x3cdb88: 0x264600a0  addiu       $a2, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3CDB84u, 0x3CDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB8Cu;
label_3cdb8c:
    // 0x3cdb8c: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdb8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cdb90: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3cdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3cdb94: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdb94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cdb98: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdb98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cdb9c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3cdb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3cdba0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CDBA0u;
    {
        const bool branch_taken_0x3cdba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdba0) {
            ctx->pc = 0x3CDBE0u;
            goto label_3cdbe0;
        }
    }
    ctx->pc = 0x3CDBA8u;
    // 0x3cdba8: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3cdba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cdbac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cdbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cdbb0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3cdbb4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cdbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cdbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cdbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdbbc: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3cdbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3cdbc0: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x3cdbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cdbc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cdbc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdbc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cdbc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdbcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cdbccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdbd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cdbd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdbd4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CDBD4u;
    SET_GPR_U32(ctx, 31, 0x3CDBDCu);
    ctx->pc = 0x3CDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBD4u;
    // 0x3cdbd8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CDBD4u, 0x3CDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDBDCu;
label_3cdbdc:
    // 0x3cdbdc: 0x0  nop
    ctx->pc = 0x3cdbdcu;
    // NOP
label_3cdbe0:
    // 0x3cdbe0: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdbe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cdbe4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cdbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3cdbe8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x3cdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x3cdbec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3cdbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3cdbf0: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3CDBF0u;
    SET_GPR_U32(ctx, 31, 0x3CDBF8u);
    ctx->pc = 0x3CDBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBF0u;
    // 0x3cdbf4: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3CDBF0u, 0x3CDBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDBF8u;
label_3cdbf8:
    // 0x3cdbf8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3cdbf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cdbfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdc00: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3cdc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3cdc04: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x3cdc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3cdc08: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3CDC08u;
    SET_GPR_U32(ctx, 31, 0x3CDC10u);
    ctx->pc = 0x3CDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC08u;
    // 0x3cdc0c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3CDC08u, 0x3CDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC10u;
label_3cdc10:
    // 0x3cdc10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CDC10u;
    {
        const bool branch_taken_0x3cdc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC10u;
        // 0x3cdc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc10) {
            ctx->pc = 0x3CDC20u;
            goto label_3cdc20;
        }
    }
    ctx->pc = 0x3CDC18u;
    // 0x3cdc18: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CDC18u;
    SET_GPR_U32(ctx, 31, 0x3CDC20u);
    ctx->pc = 0x3CDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC18u;
    // 0x3cdc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CDC18u, 0x3CDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC20u;
label_3cdc20:
    // 0x3cdc20: 0x92460558  lbu         $a2, 0x558($s2)
    ctx->pc = 0x3cdc20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1368)));
    // 0x3cdc24: 0xc64c0554  lwc1        $f12, 0x554($s2)
    ctx->pc = 0x3cdc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cdc28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdc2c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3cdc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3cdc30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdc34: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CDC34u;
    SET_GPR_U32(ctx, 31, 0x3CDC3Cu);
    ctx->pc = 0x3CDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC34u;
    // 0x3cdc38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CDC34u, 0x3CDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC3Cu;
label_3cdc3c:
    // 0x3cdc3c: 0x3c023d88  lui         $v0, 0x3D88
    ctx->pc = 0x3cdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15752 << 16));
    // 0x3cdc40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3cdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3cdc44: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3cdc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3cdc48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cdc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cdc4c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CDC4Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC54u);
    ctx->pc = 0x3CDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC4Cu;
    // 0x3cdc50: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CDC4Cu, 0x3CDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC54u;
label_3cdc54:
    // 0x3cdc54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3cdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3cdc58: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x3cdc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cdc5c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CDC5Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC64u);
    ctx->pc = 0x3CDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC5Cu;
    // 0x3cdc60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CDC5Cu, 0x3CDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC64u;
label_3cdc64:
    // 0x3cdc64: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3cdc68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3cdc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3cdc6c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x3cdc70: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3cdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cdc74: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cdc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3cdc78: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x3cdc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3cdc7c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x3CDC7Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC84u);
    ctx->pc = 0x3CDC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC7Cu;
    // 0x3cdc80: 0x27a800ec  addiu       $t0, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3CDC7Cu, 0x3CDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC84u;
label_3cdc84:
    // 0x3cdc84: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3cdc84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3cdc88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CDC88u;
    {
        const bool branch_taken_0x3cdc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC88u;
        // 0x3cdc8c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc88) {
            ctx->pc = 0x3CDC98u;
            goto label_3cdc98;
        }
    }
    ctx->pc = 0x3CDC90u;
    // 0x3cdc90: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x3CDC90u;
    {
        const bool branch_taken_0x3cdc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC90u;
        // 0x3cdc94: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc90) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDC98u;
label_3cdc98:
    // 0x3cdc98: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x3cdc98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x3cdc9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDC9Cu;
    {
        const bool branch_taken_0x3cdc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC9Cu;
        // 0x3cdca0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc9c) {
            ctx->pc = 0x3CDCB0u;
            goto label_3cdcb0;
        }
    }
    ctx->pc = 0x3CDCA4u;
    // 0x3cdca4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CDCA4u;
    {
        const bool branch_taken_0x3cdca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdca4) {
            ctx->pc = 0x3CDD30u;
            goto label_3cdd30;
        }
    }
    ctx->pc = 0x3CDCACu;
    // 0x3cdcac: 0x0  nop
    ctx->pc = 0x3cdcacu;
    // NOP
label_3cdcb0:
    // 0x3cdcb0: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3cdcb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cdcb4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3cdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3cdcb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cdcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cdcbc: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cdcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cdcc0: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3cdcc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3cdcc4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CDCC4u;
    {
        const bool branch_taken_0x3cdcc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cdcc4) {
            ctx->pc = 0x3CDD00u;
            goto label_3cdd00;
        }
    }
    ctx->pc = 0x3CDCCCu;
    // 0x3cdccc: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x3cdcccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cdcd0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3cdcd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3cdcd4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CDCD4u;
    {
        const bool branch_taken_0x3cdcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCD4u;
        // 0x3cdcd8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdcd4) {
            ctx->pc = 0x3CDD28u;
            goto label_3cdd28;
        }
    }
    ctx->pc = 0x3CDCDCu;
    // 0x3cdcdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdce0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3cdce0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cdce4: 0x0  nop
    ctx->pc = 0x3cdce4u;
    // NOP
    // 0x3cdce8: 0x0  nop
    ctx->pc = 0x3cdce8u;
    // NOP
    // 0x3cdcec: 0x2010  mfhi        $a0
    ctx->pc = 0x3cdcecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3cdcf0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cdcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cdcf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CDCF4u;
    {
        const bool branch_taken_0x3cdcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCF4u;
        // 0x3cdcf8: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdcf4) {
            ctx->pc = 0x3CDD28u;
            goto label_3cdd28;
        }
    }
    ctx->pc = 0x3CDCFCu;
    // 0x3cdcfc: 0x0  nop
    ctx->pc = 0x3cdcfcu;
    // NOP
label_3cdd00:
    // 0x3cdd00: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x3cdd00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cdd04: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3cdd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3cdd08: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CDD08u;
    {
        const bool branch_taken_0x3cdd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdd08) {
            ctx->pc = 0x3CDD28u;
            goto label_3cdd28;
        }
    }
    ctx->pc = 0x3CDD10u;
    // 0x3cdd10: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cdd10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cdd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdd18: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x3cdd18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdd1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDD1Cu;
    {
        const bool branch_taken_0x3cdd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD1Cu;
        // 0x3cdd20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd1c) {
            ctx->pc = 0x3CDD30u;
            goto label_3cdd30;
        }
    }
    ctx->pc = 0x3CDD24u;
    // 0x3cdd24: 0x0  nop
    ctx->pc = 0x3cdd24u;
    // NOP
label_3cdd28:
    // 0x3cdd28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdd2c: 0x0  nop
    ctx->pc = 0x3cdd2cu;
    // NOP
label_3cdd30:
    // 0x3cdd30: 0x14600141  bnez        $v1, . + 4 + (0x141 << 2)
    ctx->pc = 0x3CDD30u;
    {
        const bool branch_taken_0x3cdd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD30u;
        // 0x3cdd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdd30) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDD38u;
    // 0x3cdd38: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CDD38u;
    SET_GPR_U32(ctx, 31, 0x3CDD40u);
    ctx->pc = 0x3CDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDD38u;
    // 0x3cdd3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CDD38u, 0x3CDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDD40u;
label_3cdd40:
    // 0x3cdd40: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x3CDD40u;
    {
        const bool branch_taken_0x3cdd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdd40) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDD48u;
label_3cdd48:
    // 0x3cdd48: 0x86420528  lh          $v0, 0x528($s2)
    ctx->pc = 0x3cdd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x3cdd4c: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x3cdd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cdd50: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x3cdd50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cdd54: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x3cdd54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cdd58: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3cdd58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cdd5c: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3cdd5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3cdd60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cdd64: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3cdd64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3cdd68:
    // 0x3cdd68: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cdd6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3cdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3cdd70: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdd70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cdd74: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cdd74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cdd78: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3cdd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3cdd7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CDD7Cu;
    {
        const bool branch_taken_0x3cdd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdd7c) {
            ctx->pc = 0x3CDDB8u;
            goto label_3cddb8;
        }
    }
    ctx->pc = 0x3CDD84u;
    // 0x3cdd84: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3cdd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cdd88: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cdd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cdd8c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3cdd90: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cdd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cdd94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cdd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdd98: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3cdd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3cdd9c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x3cdd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3cdda0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cdda0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdda4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cdda4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cdda8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cdda8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cddac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cddacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cddb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CDDB0u;
    SET_GPR_U32(ctx, 31, 0x3CDDB8u);
    ctx->pc = 0x3CDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDDB0u;
    // 0x3cddb4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CDDB0u, 0x3CDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDDB8u;
label_3cddb8:
    // 0x3cddb8: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3cddb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3cddbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3cddc0: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x3cddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x3cddc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3cddc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3cddc8: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3CDDC8u;
    SET_GPR_U32(ctx, 31, 0x3CDDD0u);
    ctx->pc = 0x3CDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDDC8u;
    // 0x3cddcc: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3CDDC8u, 0x3CDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDDD0u;
label_3cddd0:
    // 0x3cddd0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3cddd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cddd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cddd8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3cddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3cdddc: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x3cdddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3cdde0: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3CDDE0u;
    SET_GPR_U32(ctx, 31, 0x3CDDE8u);
    ctx->pc = 0x3CDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDDE0u;
    // 0x3cdde4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3CDDE0u, 0x3CDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDDE8u;
label_3cdde8:
    // 0x3cdde8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CDDE8u;
    {
        const bool branch_taken_0x3cdde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDDE8u;
        // 0x3cddec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdde8) {
            ctx->pc = 0x3CDDF8u;
            goto label_3cddf8;
        }
    }
    ctx->pc = 0x3CDDF0u;
    // 0x3cddf0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CDDF0u;
    SET_GPR_U32(ctx, 31, 0x3CDDF8u);
    ctx->pc = 0x3CDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDDF0u;
    // 0x3cddf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CDDF0u, 0x3CDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDDF8u;
label_3cddf8:
    // 0x3cddf8: 0x92460558  lbu         $a2, 0x558($s2)
    ctx->pc = 0x3cddf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1368)));
    // 0x3cddfc: 0xc64c0554  lwc1        $f12, 0x554($s2)
    ctx->pc = 0x3cddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cde00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cde00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cde04: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3cde04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3cde08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cde08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cde0c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CDE0Cu;
    SET_GPR_U32(ctx, 31, 0x3CDE14u);
    ctx->pc = 0x3CDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDE0Cu;
    // 0x3cde10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CDE0Cu, 0x3CDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE14u;
label_3cde14:
    // 0x3cde14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3CDE14u;
    {
        const bool branch_taken_0x3cde14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE14u;
        // 0x3cde18: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde14) {
            ctx->pc = 0x3CDE70u;
            goto label_3cde70;
        }
    }
    ctx->pc = 0x3CDE1Cu;
    // 0x3cde1c: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3CDE1Cu;
    SET_GPR_U32(ctx, 31, 0x3CDE24u);
    ctx->pc = 0x3CDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDE1Cu;
    // 0x3cde20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3CDE1Cu, 0x3CDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE24u;
label_3cde24:
    // 0x3cde24: 0x92430559  lbu         $v1, 0x559($s2)
    ctx->pc = 0x3cde24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cde28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cde28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cde2c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cde30: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x3cde30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x3cde34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cde34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cde38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cde38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cde3c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cde3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cde40: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CDE40u;
    SET_GPR_U32(ctx, 31, 0x3CDE48u);
    ctx->pc = 0x3CDE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDE40u;
    // 0x3cde44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CDE40u, 0x3CDE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE48u;
label_3cde48:
    // 0x3cde48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cde48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cde4c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CDE4Cu;
    {
        const bool branch_taken_0x3cde4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE4Cu;
        // 0x3cde50: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde4c) {
            ctx->pc = 0x3CDE68u;
            goto label_3cde68;
        }
    }
    ctx->pc = 0x3CDE54u;
    // 0x3cde54: 0xc0ef480  jal         func_3BD200
    ctx->pc = 0x3CDE54u;
    SET_GPR_U32(ctx, 31, 0x3CDE5Cu);
    ctx->pc = 0x3CDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDE54u;
    // 0x3cde58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD200u, 0x3CDE54u, 0x3CDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDE5Cu;
label_3cde5c:
    // 0x3cde5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CDE5Cu;
    {
        const bool branch_taken_0x3cde5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE5Cu;
        // 0x3cde60: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde5c) {
            ctx->pc = 0x3CDE68u;
            goto label_3cde68;
        }
    }
    ctx->pc = 0x3CDE64u;
    // 0x3cde64: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x3cde64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3cde68:
    // 0x3cde68: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3CDE68u;
    {
        const bool branch_taken_0x3cde68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cde68) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDE70u;
label_3cde70:
    // 0x3cde70: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x3cde70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x3cde74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDE74u;
    {
        const bool branch_taken_0x3cde74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDE74u;
        // 0x3cde78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cde74) {
            ctx->pc = 0x3CDE88u;
            goto label_3cde88;
        }
    }
    ctx->pc = 0x3CDE7Cu;
    // 0x3cde7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CDE7Cu;
    {
        const bool branch_taken_0x3cde7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cde7c) {
            ctx->pc = 0x3CDF08u;
            goto label_3cdf08;
        }
    }
    ctx->pc = 0x3CDE84u;
    // 0x3cde84: 0x0  nop
    ctx->pc = 0x3cde84u;
    // NOP
label_3cde88:
    // 0x3cde88: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3cde88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cde8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3cde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3cde90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cde90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cde94: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cde94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cde98: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3cde98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3cde9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CDE9Cu;
    {
        const bool branch_taken_0x3cde9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cde9c) {
            ctx->pc = 0x3CDED8u;
            goto label_3cded8;
        }
    }
    ctx->pc = 0x3CDEA4u;
    // 0x3cdea4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x3cdea4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cdea8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3cdea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3cdeac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CDEACu;
    {
        const bool branch_taken_0x3cdeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEACu;
        // 0x3cdeb0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdeac) {
            ctx->pc = 0x3CDF00u;
            goto label_3cdf00;
        }
    }
    ctx->pc = 0x3CDEB4u;
    // 0x3cdeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdeb8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3cdeb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cdebc: 0x0  nop
    ctx->pc = 0x3cdebcu;
    // NOP
    // 0x3cdec0: 0x0  nop
    ctx->pc = 0x3cdec0u;
    // NOP
    // 0x3cdec4: 0x2010  mfhi        $a0
    ctx->pc = 0x3cdec4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3cdec8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cdec8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cdecc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CDECCu;
    {
        const bool branch_taken_0x3cdecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDECCu;
        // 0x3cded0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdecc) {
            ctx->pc = 0x3CDF00u;
            goto label_3cdf00;
        }
    }
    ctx->pc = 0x3CDED4u;
    // 0x3cded4: 0x0  nop
    ctx->pc = 0x3cded4u;
    // NOP
label_3cded8:
    // 0x3cded8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x3cded8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3cdedc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3cdedcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3cdee0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CDEE0u;
    {
        const bool branch_taken_0x3cdee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdee0) {
            ctx->pc = 0x3CDF00u;
            goto label_3cdf00;
        }
    }
    ctx->pc = 0x3CDEE8u;
    // 0x3cdee8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3cdee8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cdeec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdef0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x3cdef0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cdef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CDEF4u;
    {
        const bool branch_taken_0x3cdef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEF4u;
        // 0x3cdef8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdef4) {
            ctx->pc = 0x3CDF08u;
            goto label_3cdf08;
        }
    }
    ctx->pc = 0x3CDEFCu;
    // 0x3cdefc: 0x0  nop
    ctx->pc = 0x3cdefcu;
    // NOP
label_3cdf00:
    // 0x3cdf00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdf04: 0x0  nop
    ctx->pc = 0x3cdf04u;
    // NOP
label_3cdf08:
    // 0x3cdf08: 0x146000cb  bnez        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x3CDF08u;
    {
        const bool branch_taken_0x3cdf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdf08) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDF10u;
    // 0x3cdf10: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CDF10u;
    {
        const bool branch_taken_0x3cdf10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF10u;
        // 0x3cdf14: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdf10) {
            ctx->pc = 0x3CDF58u;
            goto label_3cdf58;
        }
    }
    ctx->pc = 0x3CDF18u;
    // 0x3cdf18: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdf1c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x3CDF24u);
    ctx->pc = 0x3CDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDF1Cu;
    // 0x3cdf20: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CDF1Cu, 0x3CDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDF24u;
label_3cdf24:
    // 0x3cdf24: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x3cdf24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x3cdf28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cdf2c: 0x92430559  lbu         $v1, 0x559($s2)
    ctx->pc = 0x3cdf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cdf30: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdf34: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x3cdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x3cdf38: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cdf3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cdf40: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cdf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cdf44: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CDF44u;
    SET_GPR_U32(ctx, 31, 0x3CDF4Cu);
    ctx->pc = 0x3CDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDF44u;
    // 0x3cdf48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CDF44u, 0x3CDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDF4Cu;
label_3cdf4c:
    // 0x3cdf4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3CDF4Cu;
    {
        const bool branch_taken_0x3cdf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdf4c) {
            ctx->pc = 0x3CDF88u;
            goto label_3cdf88;
        }
    }
    ctx->pc = 0x3CDF54u;
    // 0x3cdf54: 0x0  nop
    ctx->pc = 0x3cdf54u;
    // NOP
label_3cdf58:
    // 0x3cdf58: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdf5c: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3CDF5Cu;
    SET_GPR_U32(ctx, 31, 0x3CDF64u);
    ctx->pc = 0x3CDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDF5Cu;
    // 0x3cdf60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3CDF5Cu, 0x3CDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDF64u;
label_3cdf64:
    // 0x3cdf64: 0x92430559  lbu         $v1, 0x559($s2)
    ctx->pc = 0x3cdf64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cdf68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cdf6c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdf70: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x3cdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x3cdf74: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cdf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cdf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cdf7c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cdf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3cdf80: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3CDF80u;
    SET_GPR_U32(ctx, 31, 0x3CDF88u);
    ctx->pc = 0x3CDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDF80u;
    // 0x3cdf84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3CDF80u, 0x3CDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDF88u;
label_3cdf88:
    // 0x3cdf88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cdf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdf8c: 0x122000aa  beqz        $s1, . + 4 + (0xAA << 2)
    ctx->pc = 0x3CDF8Cu;
    {
        const bool branch_taken_0x3cdf8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF8Cu;
        // 0x3cdf90: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdf8c) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDF94u;
    // 0x3cdf94: 0xc0ef480  jal         func_3BD200
    ctx->pc = 0x3CDF94u;
    SET_GPR_U32(ctx, 31, 0x3CDF9Cu);
    ctx->pc = 0x3CDF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDF94u;
    // 0x3cdf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD200u, 0x3CDF94u, 0x3CDF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDF9Cu;
label_3cdf9c:
    // 0x3cdf9c: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3CDF9Cu;
    {
        const bool branch_taken_0x3cdf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDF9Cu;
        // 0x3cdfa0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdf9c) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDFA4u;
    // 0x3cdfa4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3CDFA4u;
    {
        const bool branch_taken_0x3cdfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFA4u;
        // 0x3cdfa8: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdfa4) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CDFACu;
    // 0x3cdfac: 0x0  nop
    ctx->pc = 0x3cdfacu;
    // NOP
label_3cdfb0:
    // 0x3cdfb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CDFB0u;
    {
        const bool branch_taken_0x3cdfb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFB0u;
        // 0x3cdfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdfb0) {
            ctx->pc = 0x3CDFC0u;
            goto label_3cdfc0;
        }
    }
    ctx->pc = 0x3CDFB8u;
    // 0x3cdfb8: 0xc0ef48c  jal         func_3BD230
    ctx->pc = 0x3CDFB8u;
    SET_GPR_U32(ctx, 31, 0x3CDFC0u);
    ctx->pc = 0x3CDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDFB8u;
    // 0x3cdfbc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD230u, 0x3CDFB8u, 0x3CDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDFC0u;
label_3cdfc0:
    // 0x3cdfc0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdfc4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3cdfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3cdfc8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3CDFC8u;
    SET_GPR_U32(ctx, 31, 0x3CDFD0u);
    ctx->pc = 0x3CDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDFC8u;
    // 0x3cdfcc: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3CDFC8u, 0x3CDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDFD0u;
label_3cdfd0:
    // 0x3cdfd0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3cdfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3cdfd4: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x3cdfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x3cdfd8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3CDFD8u;
    SET_GPR_U32(ctx, 31, 0x3CDFE0u);
    ctx->pc = 0x3CDFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDFD8u;
    // 0x3cdfdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3CDFD8u, 0x3CDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDFE0u;
label_3cdfe0:
    // 0x3cdfe0: 0x92470559  lbu         $a3, 0x559($s2)
    ctx->pc = 0x3cdfe0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1369)));
    // 0x3cdfe4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3cdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3cdfe8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3cdfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3cdfec: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3cdfecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3cdff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cdff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cdff4: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x3cdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x3cdff8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x3cdff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x3cdffc: 0x24c63010  addiu       $a2, $a2, 0x3010
    ctx->pc = 0x3cdffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12304));
    // 0x3ce000: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ce000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ce004: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3ce004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3ce008: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3ce008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ce00c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3ce00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3ce010: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ce010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ce014: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ce014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ce018: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ce018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ce01c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ce01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ce020: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3CE020u;
    SET_GPR_U32(ctx, 31, 0x3CE028u);
    ctx->pc = 0x3CE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE020u;
    // 0x3ce024: 0xe640055c  swc1        $f0, 0x55C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1372), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3CE020u, 0x3CE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE028u;
label_3ce028:
    // 0x3ce028: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3CE028u;
    SET_GPR_U32(ctx, 31, 0x3CE030u);
    ctx->pc = 0x3CE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE028u;
    // 0x3ce02c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3CE028u, 0x3CE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE030u;
label_3ce030:
    // 0x3ce030: 0xc64c055c  lwc1        $f12, 0x55C($s2)
    ctx->pc = 0x3ce030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce034: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3ce034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x3ce038: 0xc0764e4  jal         func_1D9390
    ctx->pc = 0x3CE038u;
    SET_GPR_U32(ctx, 31, 0x3CE040u);
    ctx->pc = 0x3CE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE038u;
    // 0x3ce03c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9390u, 0x3CE038u, 0x3CE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE040u;
label_3ce040:
    // 0x3ce040: 0xe6400564  swc1        $f0, 0x564($s2)
    ctx->pc = 0x3ce040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1380), bits); }
    // 0x3ce044: 0x8642052a  lh          $v0, 0x52A($s2)
    ctx->pc = 0x3ce044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1322)));
    // 0x3ce048: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x3ce048u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ce04c: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x3ce04cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ce050: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x3ce050u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce054: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3ce054u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce058: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3ce058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3ce05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ce05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ce060: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3ce060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ce064: 0x0  nop
    ctx->pc = 0x3ce064u;
    // NOP
label_3ce068:
    // 0x3ce068: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3ce068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3ce06c: 0xc6410560  lwc1        $f1, 0x560($s2)
    ctx->pc = 0x3ce06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ce070: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x3ce070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3ce074: 0xc640055c  lwc1        $f0, 0x55C($s2)
    ctx->pc = 0x3ce074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ce078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ce078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ce07c: 0xe640055c  swc1        $f0, 0x55C($s2)
    ctx->pc = 0x3ce07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1372), bits); }
    // 0x3ce080: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CE080u;
    SET_GPR_U32(ctx, 31, 0x3CE088u);
    ctx->pc = 0x3CE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE080u;
    // 0x3ce084: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CE080u, 0x3CE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE088u;
label_3ce088:
    // 0x3ce088: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3ce088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ce08c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3ce08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3ce090: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3CE090u;
    SET_GPR_U32(ctx, 31, 0x3CE098u);
    ctx->pc = 0x3CE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE090u;
    // 0x3ce094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3CE090u, 0x3CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE098u;
label_3ce098:
    // 0x3ce098: 0xc6420564  lwc1        $f2, 0x564($s2)
    ctx->pc = 0x3ce098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ce09c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ce0a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ce0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ce0a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ce0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ce0a8: 0x0  nop
    ctx->pc = 0x3ce0a8u;
    // NOP
    // 0x3ce0ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3ce0acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3ce0b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ce0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ce0b4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3CE0B4u;
    {
        const bool branch_taken_0x3ce0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE0B4u;
        // 0x3ce0b8: 0xe6410564  swc1        $f1, 0x564($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce0b4) {
            ctx->pc = 0x3CE0E8u;
            goto label_3ce0e8;
        }
    }
    ctx->pc = 0x3CE0BCu;
    // 0x3ce0bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE0BCu;
    {
        const bool branch_taken_0x3ce0bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE0BCu;
        // 0x3ce0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce0bc) {
            ctx->pc = 0x3CE0D0u;
            goto label_3ce0d0;
        }
    }
    ctx->pc = 0x3CE0C4u;
    // 0x3ce0c4: 0xc0ef4a4  jal         func_3BD290
    ctx->pc = 0x3CE0C4u;
    SET_GPR_U32(ctx, 31, 0x3CE0CCu);
    ctx->pc = 0x3CE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE0C4u;
    // 0x3ce0c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD290u, 0x3CE0C4u, 0x3CE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE0CCu;
label_3ce0cc:
    // 0x3ce0cc: 0x0  nop
    ctx->pc = 0x3ce0ccu;
    // NOP
label_3ce0d0:
    // 0x3ce0d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ce0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce0d4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE0D4u;
    SET_GPR_U32(ctx, 31, 0x3CE0DCu);
    ctx->pc = 0x3CE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE0D4u;
    // 0x3ce0d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE0D4u, 0x3CE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE0DCu;
label_3ce0dc:
    // 0x3ce0dc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3CE0DCu;
    {
        const bool branch_taken_0x3ce0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce0dc) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CE0E4u;
    // 0x3ce0e4: 0x0  nop
    ctx->pc = 0x3ce0e4u;
    // NOP
label_3ce0e8:
    // 0x3ce0e8: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3ce0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3ce0ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3ce0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3ce0f0: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3ce0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ce0f4: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3ce0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3ce0f8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3ce0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3ce0fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CE0FCu;
    {
        const bool branch_taken_0x3ce0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce0fc) {
            ctx->pc = 0x3CE138u;
            goto label_3ce138;
        }
    }
    ctx->pc = 0x3CE104u;
    // 0x3ce104: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3ce104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3ce108: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ce108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ce10c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3ce10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3ce110: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ce114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ce114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce118: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3ce118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3ce11c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x3ce11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ce120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ce120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ce124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ce128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce12c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ce12cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce130: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CE130u;
    SET_GPR_U32(ctx, 31, 0x3CE138u);
    ctx->pc = 0x3CE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE130u;
    // 0x3ce134: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CE130u, 0x3CE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE138u;
label_3ce138:
    // 0x3ce138: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x3ce138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3ce13c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ce13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ce140: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x3ce140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x3ce144: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ce144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ce148: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3CE148u;
    SET_GPR_U32(ctx, 31, 0x3CE150u);
    ctx->pc = 0x3CE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE148u;
    // 0x3ce14c: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3CE148u, 0x3CE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE150u;
label_3ce150:
    // 0x3ce150: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3ce150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3ce154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ce154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce158: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3ce158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3ce15c: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x3ce15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3ce160: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3CE160u;
    SET_GPR_U32(ctx, 31, 0x3CE168u);
    ctx->pc = 0x3CE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE160u;
    // 0x3ce164: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3CE160u, 0x3CE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE168u;
label_3ce168:
    // 0x3ce168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE168u;
    {
        const bool branch_taken_0x3ce168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE168u;
        // 0x3ce16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce168) {
            ctx->pc = 0x3CE178u;
            goto label_3ce178;
        }
    }
    ctx->pc = 0x3CE170u;
    // 0x3ce170: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE170u;
    SET_GPR_U32(ctx, 31, 0x3CE178u);
    ctx->pc = 0x3CE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE170u;
    // 0x3ce174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE170u, 0x3CE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE178u;
label_3ce178:
    // 0x3ce178: 0x92460558  lbu         $a2, 0x558($s2)
    ctx->pc = 0x3ce178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1368)));
    // 0x3ce17c: 0xc64c0554  lwc1        $f12, 0x554($s2)
    ctx->pc = 0x3ce17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ce180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce184: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3ce184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ce188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce18c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CE18Cu;
    SET_GPR_U32(ctx, 31, 0x3CE194u);
    ctx->pc = 0x3CE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE18Cu;
    // 0x3ce190: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CE18Cu, 0x3CE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE194u;
label_3ce194:
    // 0x3ce194: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x3ce194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x3ce198: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE198u;
    {
        const bool branch_taken_0x3ce198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE198u;
        // 0x3ce19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce198) {
            ctx->pc = 0x3CE1A8u;
            goto label_3ce1a8;
        }
    }
    ctx->pc = 0x3CE1A0u;
    // 0x3ce1a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3CE1A0u;
    {
        const bool branch_taken_0x3ce1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce1a0) {
            ctx->pc = 0x3CE228u;
            goto label_3ce228;
        }
    }
    ctx->pc = 0x3CE1A8u;
label_3ce1a8:
    // 0x3ce1a8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3ce1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3ce1ac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ce1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ce1b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ce1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ce1b4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3ce1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce1b8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3ce1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3ce1bc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CE1BCu;
    {
        const bool branch_taken_0x3ce1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ce1bc) {
            ctx->pc = 0x3CE1F8u;
            goto label_3ce1f8;
        }
    }
    ctx->pc = 0x3CE1C4u;
    // 0x3ce1c4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x3ce1c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3ce1c8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3ce1c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3ce1cc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CE1CCu;
    {
        const bool branch_taken_0x3ce1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE1CCu;
        // 0x3ce1d0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce1cc) {
            ctx->pc = 0x3CE220u;
            goto label_3ce220;
        }
    }
    ctx->pc = 0x3CE1D4u;
    // 0x3ce1d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce1d8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3ce1d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ce1dc: 0x0  nop
    ctx->pc = 0x3ce1dcu;
    // NOP
    // 0x3ce1e0: 0x0  nop
    ctx->pc = 0x3ce1e0u;
    // NOP
    // 0x3ce1e4: 0x2010  mfhi        $a0
    ctx->pc = 0x3ce1e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3ce1e8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3ce1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce1ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CE1ECu;
    {
        const bool branch_taken_0x3ce1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE1ECu;
        // 0x3ce1f0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce1ec) {
            ctx->pc = 0x3CE220u;
            goto label_3ce220;
        }
    }
    ctx->pc = 0x3CE1F4u;
    // 0x3ce1f4: 0x0  nop
    ctx->pc = 0x3ce1f4u;
    // NOP
label_3ce1f8:
    // 0x3ce1f8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x3ce1f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3ce1fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ce1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ce200: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CE200u;
    {
        const bool branch_taken_0x3ce200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce200) {
            ctx->pc = 0x3CE220u;
            goto label_3ce220;
        }
    }
    ctx->pc = 0x3CE208u;
    // 0x3ce208: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3ce208u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce210: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x3ce210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ce214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE214u;
    {
        const bool branch_taken_0x3ce214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE214u;
        // 0x3ce218: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce214) {
            ctx->pc = 0x3CE228u;
            goto label_3ce228;
        }
    }
    ctx->pc = 0x3CE21Cu;
    // 0x3ce21c: 0x0  nop
    ctx->pc = 0x3ce21cu;
    // NOP
label_3ce220:
    // 0x3ce220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce224: 0x0  nop
    ctx->pc = 0x3ce224u;
    // NOP
label_3ce228:
    // 0x3ce228: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE228u;
    {
        const bool branch_taken_0x3ce228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE228u;
        // 0x3ce22c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce228) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CE230u;
    // 0x3ce230: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE230u;
    SET_GPR_U32(ctx, 31, 0x3CE238u);
    ctx->pc = 0x3CE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE230u;
    // 0x3ce234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE230u, 0x3CE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE238u;
label_3ce238:
    // 0x3ce238: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ce238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ce23c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ce23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ce240: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ce240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ce244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ce244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ce248: 0x3e00008  jr          $ra
    ctx->pc = 0x3CE248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE248u;
        // 0x3ce24c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE250u;
}
