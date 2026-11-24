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

// Function: sub_0018FC50
// Address: 0x18fc50 - 0x190118
void sub_0018FC50_0x18fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC50_0x18fc50");
#endif

    switch (ctx->pc) {
        case 0x18fce4u: goto label_18fce4;
        case 0x18fd24u: goto label_18fd24;
        case 0x18fd40u: goto label_18fd40;
        case 0x18fd58u: goto label_18fd58;
        case 0x18fd70u: goto label_18fd70;
        case 0x18fd78u: goto label_18fd78;
        case 0x18fe3cu: goto label_18fe3c;
        case 0x18fe98u: goto label_18fe98;
        case 0x18fea4u: goto label_18fea4;
        case 0x18fee4u: goto label_18fee4;
        case 0x18ff00u: goto label_18ff00;
        case 0x18ff10u: goto label_18ff10;
        case 0x18ff28u: goto label_18ff28;
        case 0x18ff38u: goto label_18ff38;
        case 0x18ff50u: goto label_18ff50;
        case 0x18ff68u: goto label_18ff68;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x18ffd0u: goto label_18ffd0;
        case 0x18fff8u: goto label_18fff8;
        case 0x190034u: goto label_190034;
        case 0x190048u: goto label_190048;
        case 0x190064u: goto label_190064;
        case 0x19007cu: goto label_19007c;
        case 0x19009cu: goto label_19009c;
        case 0x1900dcu: goto label_1900dc;
        case 0x1900ecu: goto label_1900ec;
        default: break;
    }

    ctx->pc = 0x18fc50u;

    // 0x18fc50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18fc54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fc5c: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x18fc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18fc64: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18fc68: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x18fc68u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40D890u));
    // 0x18fc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18fc74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18fc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18fc78: 0x3c038ff8  lui         $v1, 0x8FF8
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36856 << 16));
    // 0x18fc7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fc80: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x18fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x18fc84: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x18fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x18fc88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fc88u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D8A0u));
    // 0x18fc8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x18fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x18fc90: 0x8c22ced4  lw          $v0, -0x312C($at)
    ctx->pc = 0x18fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CED4u));
    // 0x18fc94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18fc98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC98u;
    {
        const bool branch_taken_0x18fc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC98u;
        // 0x18fc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc98) {
            ctx->pc = 0x18FCA8u;
            goto label_18fca8;
        }
    }
    ctx->pc = 0x18FCA0u;
    // 0x18fca0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x18FCA0u;
    {
        const bool branch_taken_0x18fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fca0) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x18FCA8u;
label_18fca8:
    // 0x18fca8: 0x8f8386e4  lw          $v1, -0x791C($gp)
    ctx->pc = 0x18fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x18fcac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FCACu;
    {
        const bool branch_taken_0x18fcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCACu;
        // 0x18fcb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcac) {
            ctx->pc = 0x18FCD0u;
            goto label_18fcd0;
        }
    }
    ctx->pc = 0x18FCB4u;
    // 0x18fcb4: 0x2861270f  slti        $at, $v1, 0x270F
    ctx->pc = 0x18fcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x18fcb8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x18FCB8u;
    {
        const bool branch_taken_0x18fcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCB8u;
        // 0x18fcbc: 0xaf828c7c  sw          $v0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcb8) {
            ctx->pc = 0x18FD88u;
            goto label_18fd88;
        }
    }
    ctx->pc = 0x18FCC0u;
    // 0x18fcc0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18fcc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18FCC4u;
    {
        const bool branch_taken_0x18fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCC4u;
        // 0x18fcc8: 0xaf8286e4  sw          $v0, -0x791C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcc4) {
            ctx->pc = 0x18FD88u;
            goto label_18fd88;
        }
    }
    ctx->pc = 0x18FCCCu;
    // 0x18fccc: 0x0  nop
    ctx->pc = 0x18fcccu;
    // NOP
label_18fcd0:
    // 0x18fcd0: 0x938289b4  lbu         $v0, -0x764C($gp)
    ctx->pc = 0x18fcd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x18fcd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCD4u;
    {
        const bool branch_taken_0x18fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD4u;
        // 0x18fcd8: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcd4) {
            ctx->pc = 0x18FCE8u;
            goto label_18fce8;
        }
    }
    ctx->pc = 0x18FCDCu;
    // 0x18fcdc: 0xc0acb04  jal         func_2B2C10
    ctx->pc = 0x18FCDCu;
    SET_GPR_U32(ctx, 31, 0x18FCE4u);
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x18FCDCu, 0x18FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCE4u;
label_18fce4:
    // 0x18fce4: 0x0  nop
    ctx->pc = 0x18fce4u;
    // NOP
label_18fce8:
    // 0x18fce8: 0x938486f4  lbu         $a0, -0x790C($gp)
    ctx->pc = 0x18fce8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fcec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x18fcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x18fcf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FCF0u;
    {
        const bool branch_taken_0x18fcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCF0u;
        // 0x18fcf4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcf0) {
            ctx->pc = 0x18FD10u;
            goto label_18fd10;
        }
    }
    ctx->pc = 0x18FCF8u;
    // 0x18fcf8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x18fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x18fcfc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x18fd00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18fd04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18fd08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18fd0c: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x18fd0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_18fd10:
    // 0x18fd10: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x18fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x18fd14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD14u;
    {
        const bool branch_taken_0x18fd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd14) {
            ctx->pc = 0x18FD28u;
            goto label_18fd28;
        }
    }
    ctx->pc = 0x18FD1Cu;
    // 0x18fd1c: 0xc063d98  jal         func_18F660
    ctx->pc = 0x18FD1Cu;
    SET_GPR_U32(ctx, 31, 0x18FD24u);
    ctx->pc = 0x18FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD1Cu;
    // 0x18fd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F660u, 0x18FD1Cu, 0x18FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD24u;
label_18fd24:
    // 0x18fd24: 0x0  nop
    ctx->pc = 0x18fd24u;
    // NOP
label_18fd28:
    // 0x18fd28: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18fd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fd2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18fd30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FD30u;
    {
        const bool branch_taken_0x18fd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD30u;
        // 0x18fd34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd30) {
            ctx->pc = 0x18FD40u;
            goto label_18fd40;
        }
    }
    ctx->pc = 0x18FD38u;
    // 0x18fd38: 0xc0b2dd0  jal         func_2CB740
    ctx->pc = 0x18FD38u;
    SET_GPR_U32(ctx, 31, 0x18FD40u);
    ctx->pc = 0x2CB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB740u, 0x18FD38u, 0x18FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD40u;
label_18fd40:
    // 0x18fd40: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18fd40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fd44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18fd48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FD48u;
    {
        const bool branch_taken_0x18fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD48u;
        // 0x18fd4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd48) {
            ctx->pc = 0x18FD58u;
            goto label_18fd58;
        }
    }
    ctx->pc = 0x18FD50u;
    // 0x18fd50: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x18FD50u;
    SET_GPR_U32(ctx, 31, 0x18FD58u);
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x18FD50u, 0x18FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD58u;
label_18fd58:
    // 0x18fd58: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18fd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fd5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fd60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FD60u;
    {
        const bool branch_taken_0x18fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD60u;
        // 0x18fd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd60) {
            ctx->pc = 0x18FD78u;
            goto label_18fd78;
        }
    }
    ctx->pc = 0x18FD68u;
    // 0x18fd68: 0xc0b2dec  jal         func_2CB7B0
    ctx->pc = 0x18FD68u;
    SET_GPR_U32(ctx, 31, 0x18FD70u);
    ctx->pc = 0x2CB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7B0u, 0x18FD68u, 0x18FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD70u;
label_18fd70:
    // 0x18fd70: 0xc0b2dd0  jal         func_2CB740
    ctx->pc = 0x18FD70u;
    SET_GPR_U32(ctx, 31, 0x18FD78u);
    ctx->pc = 0x18FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD70u;
    // 0x18fd74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB740u, 0x18FD70u, 0x18FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD78u;
label_18fd78:
    // 0x18fd78: 0xa38086f4  sb          $zero, -0x790C($gp)
    ctx->pc = 0x18fd78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fd7c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x18FD7Cu;
    {
        const bool branch_taken_0x18fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD7Cu;
        // 0x18fd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd7c) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x18FD84u;
    // 0x18fd84: 0x0  nop
    ctx->pc = 0x18fd84u;
    // NOP
label_18fd88:
    // 0x18fd88: 0x8f8586ec  lw          $a1, -0x7914($gp)
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x18fd8c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x18fd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x18fd90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FD90u;
    {
        const bool branch_taken_0x18fd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD90u;
        // 0x18fd94: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd90) {
            ctx->pc = 0x18FDB0u;
            goto label_18fdb0;
        }
    }
    ctx->pc = 0x18FD98u;
    // 0x18fd98: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x18fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18fd9c: 0x8c235f10  lw          $v1, 0x5F10($at)
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24336)));
    // 0x18fda0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18fda4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FDA4u;
    {
        const bool branch_taken_0x18fda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fda4) {
            ctx->pc = 0x18FDB0u;
            goto label_18fdb0;
        }
    }
    ctx->pc = 0x18FDACu;
    // 0x18fdac: 0xaf8086e4  sw          $zero, -0x791C($gp)
    ctx->pc = 0x18fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
label_18fdb0:
    // 0x18fdb0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x18fdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x18fdb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18FDB4u;
    {
        const bool branch_taken_0x18fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB4u;
        // 0x18fdb8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdb4) {
            ctx->pc = 0x18FDE0u;
            goto label_18fde0;
        }
    }
    ctx->pc = 0x18FDBCu;
    // 0x18fdbc: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18fdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fdc0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x18fdc4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x18fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x18fdc8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18fdcc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x18fdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18fdd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18fdd4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x18fdd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x18fdd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FDD8u;
    {
        const bool branch_taken_0x18fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD8u;
        // 0x18fddc: 0xa38286f4  sb          $v0, -0x790C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdd8) {
            ctx->pc = 0x18FE10u;
            goto label_18fe10;
        }
    }
    ctx->pc = 0x18FDE0u;
label_18fde0:
    // 0x18fde0: 0x938386f4  lbu         $v1, -0x790C($gp)
    ctx->pc = 0x18fde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18fde4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18fde8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FDE8u;
    {
        const bool branch_taken_0x18fde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDE8u;
        // 0x18fdec: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fde8) {
            ctx->pc = 0x18FE10u;
            goto label_18fe10;
        }
    }
    ctx->pc = 0x18FDF0u;
    // 0x18fdf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18fdf4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x18fdf8: 0xa38286f4  sb          $v0, -0x790C($gp)
    ctx->pc = 0x18fdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fdfc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x18fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x18fe00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18fe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18fe04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18fe08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18fe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18fe0c: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x18fe0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_18fe10:
    // 0x18fe10: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x18fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x18fe14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FE14u;
    {
        const bool branch_taken_0x18fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE14u;
        // 0x18fe18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe14) {
            ctx->pc = 0x18FE20u;
            goto label_18fe20;
        }
    }
    ctx->pc = 0x18FE1Cu;
    // 0x18fe1c: 0xa3828c8c  sb          $v0, -0x7374($gp)
    ctx->pc = 0x18fe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937740), (uint8_t)GPR_U32(ctx, 2));
label_18fe20:
    // 0x18fe20: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x18fe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x18fe24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18FE24u;
    {
        const bool branch_taken_0x18fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe24) {
            ctx->pc = 0x18FE80u;
            goto label_18fe80;
        }
    }
    ctx->pc = 0x18FE2Cu;
    // 0x18fe2c: 0x8f8586d4  lw          $a1, -0x792C($gp)
    ctx->pc = 0x18fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x18fe30: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x18fe34: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x18FE34u;
    SET_GPR_U32(ctx, 31, 0x18FE3Cu);
    ctx->pc = 0x18FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE34u;
    // 0x18fe38: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x18FE34u, 0x18FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE3Cu;
label_18fe3c:
    // 0x18fe3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18FE3Cu;
    {
        const bool branch_taken_0x18fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe3c) {
            ctx->pc = 0x18FE80u;
            goto label_18fe80;
        }
    }
    ctx->pc = 0x18FE44u;
    // 0x18fe44: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x18fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18fe48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FE48u;
    {
        const bool branch_taken_0x18fe48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe48) {
            ctx->pc = 0x18FE70u;
            goto label_18fe70;
        }
    }
    ctx->pc = 0x18FE50u;
    // 0x18fe50: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x18fe54: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fe58: 0x938386d8  lbu         $v1, -0x7928($gp)
    ctx->pc = 0x18fe58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x18fe5c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18fe60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fe64: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fe64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fe68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FE68u;
    {
        const bool branch_taken_0x18fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE68u;
        // 0x18fe6c: 0x7c223050  sq          $v0, 0x3050($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 12368), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe68) {
            ctx->pc = 0x18FE80u;
            goto label_18fe80;
        }
    }
    ctx->pc = 0x18FE70u;
label_18fe70:
    // 0x18fe70: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x18fe70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18fe74: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fe78: 0x7c223050  sq          $v0, 0x3050($at)
    ctx->pc = 0x18fe78u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x843050u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x843050u, _value); } while (0);
    // 0x18fe7c: 0x0  nop
    ctx->pc = 0x18fe7cu;
    // NOP
label_18fe80:
    // 0x18fe80: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x18fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x18fe84: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x18fe88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18fe8c: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x18fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x18fe90: 0xc096980  jal         func_25A600
    ctx->pc = 0x18FE90u;
    SET_GPR_U32(ctx, 31, 0x18FE98u);
    ctx->pc = 0x18FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE90u;
    // 0x18fe94: 0x24c63040  addiu       $a2, $a2, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A600u, 0x18FE90u, 0x18FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE98u;
label_18fe98:
    // 0x18fe98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18fe9c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18FE9Cu;
    SET_GPR_U32(ctx, 31, 0x18FEA4u);
    ctx->pc = 0x18FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE9Cu;
    // 0x18fea0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18FE9Cu, 0x18FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEA4u;
label_18fea4:
    // 0x18fea4: 0x8f8286f0  lw          $v0, -0x7910($gp)
    ctx->pc = 0x18fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x18fea8: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x18fea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x18feac: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x18FEACu;
    {
        const bool branch_taken_0x18feac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEACu;
        // 0x18feb0: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18feac) {
            ctx->pc = 0x18FF70u;
            goto label_18ff70;
        }
    }
    ctx->pc = 0x18FEB4u;
    // 0x18feb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18feb8: 0x246356e0  addiu       $v1, $v1, 0x56E0
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22240));
    // 0x18febc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fec4: 0x400008  jr          $v0
    ctx->pc = 0x18FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FED0u: goto label_18fed0;
            case 0x18FEF0u: goto label_18fef0;
            case 0x18FF18u: goto label_18ff18;
            case 0x18FF40u: goto label_18ff40;
            case 0x18FF58u: goto label_18ff58;
            case 0x18FF70u: goto label_18ff70;
            case 0x18FF80u: goto label_18ff80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FEC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18FECCu;
    // 0x18fecc: 0x0  nop
    ctx->pc = 0x18feccu;
    // NOP
label_18fed0:
    // 0x18fed0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18fed4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18fed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18fed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18fedc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x18FEDCu;
    SET_GPR_U32(ctx, 31, 0x18FEE4u);
    ctx->pc = 0x18FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEDCu;
    // 0x18fee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x18FEDCu, 0x18FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEE4u;
label_18fee4:
    // 0x18fee4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18FEE4u;
    {
        const bool branch_taken_0x18fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fee4) {
            ctx->pc = 0x18FF80u;
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FEECu;
    // 0x18feec: 0x0  nop
    ctx->pc = 0x18feecu;
    // NOP
label_18fef0:
    // 0x18fef0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18fef4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18fef8: 0xc041460  jal         func_105180
    ctx->pc = 0x18FEF8u;
    SET_GPR_U32(ctx, 31, 0x18FF00u);
    ctx->pc = 0x18FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEF8u;
    // 0x18fefc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FEF8u, 0x18FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF00u;
label_18ff00:
    // 0x18ff00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ff04: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18ff08: 0xc041460  jal         func_105180
    ctx->pc = 0x18FF08u;
    SET_GPR_U32(ctx, 31, 0x18FF10u);
    ctx->pc = 0x18FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF08u;
    // 0x18ff0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FF08u, 0x18FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF10u;
label_18ff10:
    // 0x18ff10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18FF10u;
    {
        const bool branch_taken_0x18ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff10) {
            ctx->pc = 0x18FF80u;
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FF18u;
label_18ff18:
    // 0x18ff18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18ff1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ff20: 0xc041460  jal         func_105180
    ctx->pc = 0x18FF20u;
    SET_GPR_U32(ctx, 31, 0x18FF28u);
    ctx->pc = 0x18FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF20u;
    // 0x18ff24: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FF20u, 0x18FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF28u;
label_18ff28:
    // 0x18ff28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ff2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18ff30: 0xc041460  jal         func_105180
    ctx->pc = 0x18FF30u;
    SET_GPR_U32(ctx, 31, 0x18FF38u);
    ctx->pc = 0x18FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF30u;
    // 0x18ff34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FF30u, 0x18FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF38u;
label_18ff38:
    // 0x18ff38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18FF38u;
    {
        const bool branch_taken_0x18ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff38) {
            ctx->pc = 0x18FF80u;
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FF40u;
label_18ff40:
    // 0x18ff40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ff44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ff48: 0xc041460  jal         func_105180
    ctx->pc = 0x18FF48u;
    SET_GPR_U32(ctx, 31, 0x18FF50u);
    ctx->pc = 0x18FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF48u;
    // 0x18ff4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FF48u, 0x18FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF50u;
label_18ff50:
    // 0x18ff50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18FF50u;
    {
        const bool branch_taken_0x18ff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff50) {
            ctx->pc = 0x18FF80u;
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FF58u;
label_18ff58:
    // 0x18ff58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ff5c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ff60: 0xc041460  jal         func_105180
    ctx->pc = 0x18FF60u;
    SET_GPR_U32(ctx, 31, 0x18FF68u);
    ctx->pc = 0x18FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF60u;
    // 0x18ff64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18FF60u, 0x18FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF68u;
label_18ff68:
    // 0x18ff68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FF68u;
    {
        const bool branch_taken_0x18ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff68) {
            ctx->pc = 0x18FF80u;
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FF70u;
label_18ff70:
    // 0x18ff70: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x18ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x18ff74: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x18ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x18ff78: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x18ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x18ff7c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x18ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_18ff80:
    // 0x18ff80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ff84: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18FF84u;
    SET_GPR_U32(ctx, 31, 0x18FF8Cu);
    ctx->pc = 0x18FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF84u;
    // 0x18ff88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18FF84u, 0x18FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF8Cu;
label_18ff8c:
    // 0x18ff8c: 0x8f8286ec  lw          $v0, -0x7914($gp)
    ctx->pc = 0x18ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x18ff90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18ff94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FF94u;
    {
        const bool branch_taken_0x18ff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF94u;
        // 0x18ff98: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff94) {
            ctx->pc = 0x18FFB8u;
            goto label_18ffb8;
        }
    }
    ctx->pc = 0x18FF9Cu;
    // 0x18ff9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ffa0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18ffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x18ffa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18ffa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18ffa8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x18FFA8u;
    SET_GPR_U32(ctx, 31, 0x18FFB0u);
    ctx->pc = 0x18FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFA8u;
    // 0x18ffac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x18FFA8u, 0x18FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFB0u;
label_18ffb0:
    // 0x18ffb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FFB0u;
    {
        const bool branch_taken_0x18ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ffb0) {
            ctx->pc = 0x18FFD0u;
            goto label_18ffd0;
        }
    }
    ctx->pc = 0x18FFB8u;
label_18ffb8:
    // 0x18ffb8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x18ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x18ffbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x18ffc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ffc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18ffc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18ffc8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x18FFC8u;
    SET_GPR_U32(ctx, 31, 0x18FFD0u);
    ctx->pc = 0x18FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFC8u;
    // 0x18ffcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x18FFC8u, 0x18FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFD0u;
label_18ffd0:
    // 0x18ffd0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x18ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x18ffd4: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x18ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ffdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ffdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ffe0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18ffe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffe4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18ffe4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18ffe8: 0x0  nop
    ctx->pc = 0x18ffe8u;
    // NOP
    // 0x18ffec: 0x0  nop
    ctx->pc = 0x18ffecu;
    // NOP
    // 0x18fff0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x18FFF0u;
    SET_GPR_U32(ctx, 31, 0x18FFF8u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x18FFF0u, 0x18FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFF8u;
label_18fff8:
    // 0x18fff8: 0x8f8286f0  lw          $v0, -0x7910($gp)
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x18fffc: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x18fffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x190000: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x190000u;
    {
        const bool branch_taken_0x190000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190000u;
        // 0x190004: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190000) {
            ctx->pc = 0x190068u;
            goto label_190068;
        }
    }
    ctx->pc = 0x190008u;
    // 0x190008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19000c: 0x246356b0  addiu       $v1, $v1, 0x56B0
    ctx->pc = 0x19000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22192));
    // 0x190010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190018: 0x400008  jr          $v0
    ctx->pc = 0x190018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190020u: goto label_190020;
            case 0x190050u: goto label_190050;
            case 0x190068u: goto label_190068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190020u;
label_190020:
    // 0x190020: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190024: 0x24843040  addiu       $a0, $a0, 0x3040
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12352));
    // 0x190028: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19002c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x19002Cu;
    SET_GPR_U32(ctx, 31, 0x190034u);
    ctx->pc = 0x190030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19002Cu;
    // 0x190030: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x19002Cu, 0x190034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190034u;
label_190034:
    // 0x190034: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190038: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19003c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x19003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x190040: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x190040u;
    SET_GPR_U32(ctx, 31, 0x190048u);
    ctx->pc = 0x190044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190040u;
    // 0x190044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x190040u, 0x190048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190048u;
label_190048:
    // 0x190048: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190048u;
    {
        const bool branch_taken_0x190048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190048) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x190050u;
label_190050:
    // 0x190050: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190054: 0x24843040  addiu       $a0, $a0, 0x3040
    ctx->pc = 0x190054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12352));
    // 0x190058: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19005c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x19005Cu;
    SET_GPR_U32(ctx, 31, 0x190064u);
    ctx->pc = 0x190060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19005Cu;
    // 0x190060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x19005Cu, 0x190064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190064u;
label_190064:
    // 0x190064: 0x0  nop
    ctx->pc = 0x190064u;
    // NOP
label_190068:
    // 0x190068: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x19006c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x190070: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x190074: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x190074u;
    SET_GPR_U32(ctx, 31, 0x19007Cu);
    ctx->pc = 0x190078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190074u;
    // 0x190078: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x190074u, 0x19007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19007Cu;
label_19007c:
    // 0x19007c: 0x0  nop
    ctx->pc = 0x19007cu;
    // NOP
label_190080:
    // 0x190080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190084: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x190084u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
    // 0x190088: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x19008c: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x19008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x190090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190094: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x190094u;
    SET_GPR_U32(ctx, 31, 0x19009Cu);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x190094u, 0x19009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19009Cu;
label_19009c:
    // 0x19009c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x19009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1900a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1900a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1900a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1900a8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1900ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1900acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1900b0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1900b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1900b4: 0x78233040  lq          $v1, 0x3040($at)
    ctx->pc = 0x1900b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x843040u));
    // 0x1900b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1900bc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1900bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1900c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1900c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1900c4: 0x78233050  lq          $v1, 0x3050($at)
    ctx->pc = 0x1900c4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x843050u));
    // 0x1900c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1900c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1900cc: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x1900ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x1900d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1900d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1900d4: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x1900D4u;
    SET_GPR_U32(ctx, 31, 0x1900DCu);
    ctx->pc = 0x1900D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900D4u;
    // 0x1900d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x1900D4u, 0x1900DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900DCu;
label_1900dc:
    // 0x1900dc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1900dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1900e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1900e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900e4: 0xc0ceb48  jal         func_33AD20
    ctx->pc = 0x1900E4u;
    SET_GPR_U32(ctx, 31, 0x1900ECu);
    ctx->pc = 0x1900E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900E4u;
    // 0x1900e8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD20u, 0x1900E4u, 0x1900ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900ECu;
label_1900ec:
    // 0x1900ec: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1900ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1900f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1900F0u;
    {
        const bool branch_taken_0x1900f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900F0u;
        // 0x1900f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900f0) {
            ctx->pc = 0x190100u;
            goto label_190100;
        }
    }
    ctx->pc = 0x1900F8u;
    // 0x1900f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1900F8u;
    {
        const bool branch_taken_0x1900f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1900f8) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x190100u;
label_190100:
    // 0x190100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190104: 0x0  nop
    ctx->pc = 0x190104u;
    // NOP
label_190108:
    // 0x190108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19010c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19010cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190110: 0x3e00008  jr          $ra
    ctx->pc = 0x190110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190110u;
        // 0x190114: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190118u;
}
