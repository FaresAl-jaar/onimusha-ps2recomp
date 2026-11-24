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

// Function: sub_0026ED70
// Address: 0x26ed70 - 0x26f114
void sub_0026ED70_0x26ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ED70_0x26ed70");
#endif

    switch (ctx->pc) {
        case 0x26edacu: goto label_26edac;
        case 0x26edccu: goto label_26edcc;
        case 0x26ee54u: goto label_26ee54;
        case 0x26ee78u: goto label_26ee78;
        case 0x26eeecu: goto label_26eeec;
        case 0x26ef20u: goto label_26ef20;
        case 0x26ef38u: goto label_26ef38;
        case 0x26ef6cu: goto label_26ef6c;
        case 0x26ef84u: goto label_26ef84;
        case 0x26efb8u: goto label_26efb8;
        case 0x26efd0u: goto label_26efd0;
        case 0x26f000u: goto label_26f000;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f048u: goto label_26f048;
        case 0x26f104u: goto label_26f104;
        default: break;
    }

    ctx->pc = 0x26ed70u;

    // 0x26ed70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ed74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ed78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ed7c: 0x908200aa  lbu         $v0, 0xAA($a0)
    ctx->pc = 0x26ed7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x26ed80: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26ED80u;
    {
        const bool branch_taken_0x26ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED80u;
        // 0x26ed84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed80) {
            ctx->pc = 0x26EDD0u;
            goto label_26edd0;
        }
    }
    ctx->pc = 0x26ED88u;
    // 0x26ed88: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26ed8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26ed90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ed94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26ED94u;
    {
        const bool branch_taken_0x26ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED94u;
        // 0x26ed98: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed94) {
            ctx->pc = 0x26EDB8u;
            goto label_26edb8;
        }
    }
    ctx->pc = 0x26ED9Cu;
    // 0x26ed9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eda0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26eda4: 0xc05e554  jal         func_179550
    ctx->pc = 0x26EDA4u;
    SET_GPR_U32(ctx, 31, 0x26EDACu);
    ctx->pc = 0x26EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDA4u;
    // 0x26eda8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179550u, 0x26EDA4u, 0x26EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDACu;
label_26edac:
    // 0x26edac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EDACu;
    {
        const bool branch_taken_0x26edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26edac) {
            ctx->pc = 0x26EDD0u;
            goto label_26edd0;
        }
    }
    ctx->pc = 0x26EDB4u;
    // 0x26edb4: 0x0  nop
    ctx->pc = 0x26edb4u;
    // NOP
label_26edb8:
    // 0x26edb8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26edbc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26edc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26edc4: 0xc05e554  jal         func_179550
    ctx->pc = 0x26EDC4u;
    SET_GPR_U32(ctx, 31, 0x26EDCCu);
    ctx->pc = 0x26EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDC4u;
    // 0x26edc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179550u, 0x26EDC4u, 0x26EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDCCu;
label_26edcc:
    // 0x26edcc: 0x0  nop
    ctx->pc = 0x26edccu;
    // NOP
label_26edd0:
    // 0x26edd0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26edd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26edd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26edd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26eddc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26EDDCu;
    {
        const bool branch_taken_0x26eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDDCu;
        // 0x26ede0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eddc) {
            ctx->pc = 0x26EE08u;
            goto label_26ee08;
        }
    }
    ctx->pc = 0x26EDE4u;
    // 0x26ede4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x26ede8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x26edec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26edecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26edf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26edf4: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26edf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26edf8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26edfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ee00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26EE00u;
    {
        const bool branch_taken_0x26ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE00u;
        // 0x26ee04: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee00) {
            ctx->pc = 0x26EE30u;
            goto label_26ee30;
        }
    }
    ctx->pc = 0x26EE08u;
label_26ee08:
    // 0x26ee08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ee0c: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26ee10: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x26ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x26ee14: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x26ee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ee18: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x26ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26ee1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ee20: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26ee20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26ee24: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26ee28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ee2c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x26ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_26ee30:
    // 0x26ee30: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26ee34: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x26ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x26ee38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ee3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EE3Cu;
    {
        const bool branch_taken_0x26ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE3Cu;
        // 0x26ee40: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee3c) {
            ctx->pc = 0x26EE60u;
            goto label_26ee60;
        }
    }
    ctx->pc = 0x26EE44u;
    // 0x26ee44: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26ee44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26ee48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26ee4c: 0xc05ee48  jal         func_17B920
    ctx->pc = 0x26EE4Cu;
    SET_GPR_U32(ctx, 31, 0x26EE54u);
    ctx->pc = 0x26EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE4Cu;
    // 0x26ee50: 0xa020ff61  sb          $zero, -0x9F($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967137), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B920u, 0x26EE4Cu, 0x26EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE54u;
label_26ee54:
    // 0x26ee54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EE54u;
    {
        const bool branch_taken_0x26ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ee54) {
            ctx->pc = 0x26EE78u;
            goto label_26ee78;
        }
    }
    ctx->pc = 0x26EE5Cu;
    // 0x26ee5c: 0x0  nop
    ctx->pc = 0x26ee5cu;
    // NOP
label_26ee60:
    // 0x26ee60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ee64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee68: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26ee6c: 0xa022ff61  sb          $v0, -0x9F($at)
    ctx->pc = 0x26ee6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82FF61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x82FF61u, _value); } while (0);
    // 0x26ee70: 0xc05ee44  jal         func_17B910
    ctx->pc = 0x26EE70u;
    SET_GPR_U32(ctx, 31, 0x26EE78u);
    ctx->pc = 0x26EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE70u;
    // 0x26ee74: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B910u, 0x26EE70u, 0x26EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE78u;
label_26ee78:
    // 0x26ee78: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26ee7c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x26ee80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ee84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EE84u;
    {
        const bool branch_taken_0x26ee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE84u;
        // 0x26ee88: 0x3c010083  lui         $at, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee84) {
            ctx->pc = 0x26EE98u;
            goto label_26ee98;
        }
    }
    ctx->pc = 0x26EE8Cu;
    // 0x26ee8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26EE8Cu;
    {
        const bool branch_taken_0x26ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE8Cu;
        // 0x26ee90: 0xa020ff62  sb          $zero, -0x9E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967138), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee8c) {
            ctx->pc = 0x26EEA8u;
            goto label_26eea8;
        }
    }
    ctx->pc = 0x26EE94u;
    // 0x26ee94: 0x0  nop
    ctx->pc = 0x26ee94u;
    // NOP
label_26ee98:
    // 0x26ee98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee9c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26eea0: 0xa022ff62  sb          $v0, -0x9E($at)
    ctx->pc = 0x26eea0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82FF62u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x82FF62u, _value); } while (0);
    // 0x26eea4: 0x0  nop
    ctx->pc = 0x26eea4u;
    // NOP
label_26eea8:
    // 0x26eea8: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26eea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26eeac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26eeb0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26EEB0u;
    {
        const bool branch_taken_0x26eeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEB0u;
        // 0x26eeb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eeb0) {
            ctx->pc = 0x26EFC0u;
            goto label_26efc0;
        }
    }
    ctx->pc = 0x26EEB8u;
    // 0x26eeb8: 0x1065002f  beq         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x26EEB8u;
    {
        const bool branch_taken_0x26eeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x26eeb8) {
            ctx->pc = 0x26EF78u;
            goto label_26ef78;
        }
    }
    ctx->pc = 0x26EEC0u;
    // 0x26eec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eec4: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26EEC4u;
    {
        const bool branch_taken_0x26eec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x26eec4) {
            ctx->pc = 0x26EF28u;
            goto label_26ef28;
        }
    }
    ctx->pc = 0x26EECCu;
    // 0x26eecc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EECCu;
    {
        const bool branch_taken_0x26eecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eecc) {
            ctx->pc = 0x26EEE0u;
            goto label_26eee0;
        }
    }
    ctx->pc = 0x26EED4u;
    // 0x26eed4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x26EED4u;
    {
        const bool branch_taken_0x26eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eed4) {
            ctx->pc = 0x26F000u;
            goto label_26f000;
        }
    }
    ctx->pc = 0x26EEDCu;
    // 0x26eedc: 0x0  nop
    ctx->pc = 0x26eedcu;
    // NOP
label_26eee0:
    // 0x26eee0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26eee4: 0xc05e8a4  jal         func_17A290
    ctx->pc = 0x26EEE4u;
    SET_GPR_U32(ctx, 31, 0x26EEECu);
    ctx->pc = 0x26EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEE4u;
    // 0x26eee8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A290u, 0x26EEE4u, 0x26EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEECu;
label_26eeec:
    // 0x26eeec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26eef0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26eef4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26eef8: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26eefc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26ef00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ef08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ef0c: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26ef0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26ef10: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26ef14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ef18: 0xc0ce374  jal         func_338DD0
    ctx->pc = 0x26EF18u;
    SET_GPR_U32(ctx, 31, 0x26EF20u);
    ctx->pc = 0x26EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF18u;
    // 0x26ef1c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DD0u, 0x26EF18u, 0x26EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF20u;
label_26ef20:
    // 0x26ef20: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26EF20u;
    {
        const bool branch_taken_0x26ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef20) {
            ctx->pc = 0x26F000u;
            goto label_26f000;
        }
    }
    ctx->pc = 0x26EF28u;
label_26ef28:
    // 0x26ef28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ef2c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26ef30: 0xc05e8a4  jal         func_17A290
    ctx->pc = 0x26EF30u;
    SET_GPR_U32(ctx, 31, 0x26EF38u);
    ctx->pc = 0x26EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF30u;
    // 0x26ef34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A290u, 0x26EF30u, 0x26EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF38u;
label_26ef38:
    // 0x26ef38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ef3c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26ef40: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26ef44: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26ef48: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26ef4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ef50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ef54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ef54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ef58: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26ef58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26ef5c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26ef60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ef64: 0xc0ce374  jal         func_338DD0
    ctx->pc = 0x26EF64u;
    SET_GPR_U32(ctx, 31, 0x26EF6Cu);
    ctx->pc = 0x26EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF64u;
    // 0x26ef68: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DD0u, 0x26EF64u, 0x26EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF6Cu;
label_26ef6c:
    // 0x26ef6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26EF6Cu;
    {
        const bool branch_taken_0x26ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef6c) {
            ctx->pc = 0x26F000u;
            goto label_26f000;
        }
    }
    ctx->pc = 0x26EF74u;
    // 0x26ef74: 0x0  nop
    ctx->pc = 0x26ef74u;
    // NOP
label_26ef78:
    // 0x26ef78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ef7c: 0xc05e8a4  jal         func_17A290
    ctx->pc = 0x26EF7Cu;
    SET_GPR_U32(ctx, 31, 0x26EF84u);
    ctx->pc = 0x26EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF7Cu;
    // 0x26ef80: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A290u, 0x26EF7Cu, 0x26EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF84u;
label_26ef84:
    // 0x26ef84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26ef88: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26ef8c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26ef90: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26ef94: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26ef98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ef98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26efa0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26efa4: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26efa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26efa8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26efac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26efb0: 0xc0ce374  jal         func_338DD0
    ctx->pc = 0x26EFB0u;
    SET_GPR_U32(ctx, 31, 0x26EFB8u);
    ctx->pc = 0x26EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFB0u;
    // 0x26efb4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DD0u, 0x26EFB0u, 0x26EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFB8u;
label_26efb8:
    // 0x26efb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26EFB8u;
    {
        const bool branch_taken_0x26efb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efb8) {
            ctx->pc = 0x26F000u;
            goto label_26f000;
        }
    }
    ctx->pc = 0x26EFC0u;
label_26efc0:
    // 0x26efc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26efc4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26efc8: 0xc05e8a4  jal         func_17A290
    ctx->pc = 0x26EFC8u;
    SET_GPR_U32(ctx, 31, 0x26EFD0u);
    ctx->pc = 0x26EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFC8u;
    // 0x26efcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A290u, 0x26EFC8u, 0x26EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFD0u;
label_26efd0:
    // 0x26efd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26efd4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26efd8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x26efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26efdc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26efe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efe4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26efe8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26efec: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26efecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26eff0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x26eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x26eff4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26eff8: 0xc0ce374  jal         func_338DD0
    ctx->pc = 0x26EFF8u;
    SET_GPR_U32(ctx, 31, 0x26F000u);
    ctx->pc = 0x26EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFF8u;
    // 0x26effc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DD0u, 0x26EFF8u, 0x26F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F000u;
label_26f000:
    // 0x26f000: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f004: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26f008: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f00c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26F00Cu;
    {
        const bool branch_taken_0x26f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f00c) {
            ctx->pc = 0x26F038u;
            goto label_26f038;
        }
    }
    ctx->pc = 0x26F014u;
    // 0x26f014: 0x920200aa  lbu         $v0, 0xAA($s0)
    ctx->pc = 0x26f014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x26f018: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f01c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26f020: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26f024: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x26F024u;
    SET_GPR_U32(ctx, 31, 0x26F02Cu);
    ctx->pc = 0x26F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F024u;
    // 0x26f028: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x26F024u, 0x26F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F02Cu;
label_26f02c:
    // 0x26f02c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26F02Cu;
    {
        const bool branch_taken_0x26f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f02c) {
            ctx->pc = 0x26F048u;
            goto label_26f048;
        }
    }
    ctx->pc = 0x26F034u;
    // 0x26f034: 0x0  nop
    ctx->pc = 0x26f034u;
    // NOP
label_26f038:
    // 0x26f038: 0x920500aa  lbu         $a1, 0xAA($s0)
    ctx->pc = 0x26f038u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x26f03c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f040: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x26F040u;
    SET_GPR_U32(ctx, 31, 0x26F048u);
    ctx->pc = 0x26F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F040u;
    // 0x26f044: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x26F040u, 0x26F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F048u;
label_26f048:
    // 0x26f048: 0x82030095  lb          $v1, 0x95($s0)
    ctx->pc = 0x26f048u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x26f04c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f050: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26F050u;
    {
        const bool branch_taken_0x26f050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F050u;
        // 0x26f054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f050) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F058u;
    // 0x26f058: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26F058u;
    {
        const bool branch_taken_0x26f058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f058) {
            ctx->pc = 0x26F0A0u;
            goto label_26f0a0;
        }
    }
    ctx->pc = 0x26F060u;
    // 0x26f060: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F060u;
    {
        const bool branch_taken_0x26f060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f060) {
            ctx->pc = 0x26F070u;
            goto label_26f070;
        }
    }
    ctx->pc = 0x26F068u;
    // 0x26f068: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26F068u;
    {
        const bool branch_taken_0x26f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f068) {
            ctx->pc = 0x26F0F0u;
            goto label_26f0f0;
        }
    }
    ctx->pc = 0x26F070u;
label_26f070:
    // 0x26f070: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f074: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x26f074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x26f078: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x26f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x26f07c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f084: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f088: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f08c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f090: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f094: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26F094u;
    {
        const bool branch_taken_0x26f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F094u;
        // 0x26f098: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f094) {
            ctx->pc = 0x26F0F0u;
            goto label_26f0f0;
        }
    }
    ctx->pc = 0x26F09Cu;
    // 0x26f09c: 0x0  nop
    ctx->pc = 0x26f09cu;
    // NOP
label_26f0a0:
    // 0x26f0a0: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f0a4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x26f0a8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26f0ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f0b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f0b4: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f0b8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f0bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f0c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F0C0u;
    {
        const bool branch_taken_0x26f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0C0u;
        // 0x26f0c4: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0c0) {
            ctx->pc = 0x26F0F0u;
            goto label_26f0f0;
        }
    }
    ctx->pc = 0x26F0C8u;
label_26f0c8:
    // 0x26f0c8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f0cc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x26f0d0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x26f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x26f0d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f0d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26f0dc: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f0e0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f0e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f0e8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x26f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x26f0ec: 0x0  nop
    ctx->pc = 0x26f0ecu;
    // NOP
label_26f0f0:
    // 0x26f0f0: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26f0f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26f0f4: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26f0f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26f0f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f0fc: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26F0FCu;
    SET_GPR_U32(ctx, 31, 0x26F104u);
    ctx->pc = 0x26F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0FCu;
    // 0x26f100: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26F0FCu, 0x26F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F104u;
label_26f104:
    // 0x26f104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f10c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F10Cu;
        // 0x26f110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F114u;
}
