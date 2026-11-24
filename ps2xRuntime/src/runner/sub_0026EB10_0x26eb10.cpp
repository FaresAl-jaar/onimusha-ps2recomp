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

// Function: sub_0026EB10
// Address: 0x26eb10 - 0x26ed70
void sub_0026EB10_0x26eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EB10_0x26eb10");
#endif

    switch (ctx->pc) {
        case 0x26eb4cu: goto label_26eb4c;
        case 0x26eb68u: goto label_26eb68;
        case 0x26eb90u: goto label_26eb90;
        case 0x26ec20u: goto label_26ec20;
        case 0x26ec78u: goto label_26ec78;
        case 0x26ece0u: goto label_26ece0;
        case 0x26ed40u: goto label_26ed40;
        default: break;
    }

    ctx->pc = 0x26eb10u;

    // 0x26eb10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26eb14: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26eb18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26eb1c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26eb20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26eb24: 0x24051500  addiu       $a1, $zero, 0x1500
    ctx->pc = 0x26eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    // 0x26eb28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26eb2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26eb30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26eb34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26eb38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26eb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26eb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26eb44: 0xc05e360  jal         func_178D80
    ctx->pc = 0x26EB44u;
    SET_GPR_U32(ctx, 31, 0x26EB4Cu);
    ctx->pc = 0x26EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB44u;
    // 0x26eb48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x26EB44u, 0x26EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB4Cu;
label_26eb4c:
    // 0x26eb4c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26eb4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb50: 0x12c00045  beqz        $s6, . + 4 + (0x45 << 2)
    ctx->pc = 0x26EB50u;
    {
        const bool branch_taken_0x26eb50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB50u;
        // 0x26eb54: 0x3c1e004e  lui         $fp, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb50) {
            ctx->pc = 0x26EC68u;
            goto label_26ec68;
        }
    }
    ctx->pc = 0x26EB58u;
    // 0x26eb58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26eb58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb5c: 0x24170060  addiu       $s7, $zero, 0x60
    ctx->pc = 0x26eb5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x26eb60: 0x27de2380  addiu       $fp, $fp, 0x2380
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 9088));
    // 0x26eb64: 0x0  nop
    ctx->pc = 0x26eb64u;
    // NOP
label_26eb68:
    // 0x26eb68: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x26eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
    // 0x26eb6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26eb6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26eb70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26eb70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb74: 0x24430f20  addiu       $v1, $v0, 0xF20
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x26eb78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26eb78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb7c: 0x24420f30  addiu       $v0, $v0, 0xF30
    ctx->pc = 0x26eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3888));
    // 0x26eb80: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x26eb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb84: 0x38cc0  sll         $s1, $v1, 19
    ctx->pc = 0x26eb84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x26eb88: 0x284c0  sll         $s0, $v0, 19
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x26eb8c: 0x0  nop
    ctx->pc = 0x26eb8cu;
    // NOP
label_26eb90:
    // 0x26eb90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26eb94: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x26eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x26eb98: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x26eb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x26eb9c: 0x3c023420  lui         $v0, 0x3420
    ctx->pc = 0x26eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13344 << 16));
    // 0x26eba0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x26eba0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x26eba4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26eba8: 0x3408fff7  ori         $t0, $zero, 0xFFF7
    ctx->pc = 0x26eba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x26ebac: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x26ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x26ebb0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26ebb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebb4: 0x8eca0004  lw          $t2, 0x4($s6)
    ctx->pc = 0x26ebb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x26ebb8: 0x24820700  addiu       $v0, $a0, 0x700
    ctx->pc = 0x26ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x26ebbc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x26ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26ebc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ebc4: 0x24820740  addiu       $v0, $a0, 0x740
    ctx->pc = 0x26ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    // 0x26ebc8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26ebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26ebcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26ebd0: 0x714825  or          $t1, $v1, $s1
    ctx->pc = 0x26ebd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x26ebd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26ebd8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ebdc: 0x513825  or          $a3, $v0, $s1
    ctx->pc = 0x26ebdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x26ebe0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x26ebe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x26ebe4: 0x354a0040  ori         $t2, $t2, 0x40
    ctx->pc = 0x26ebe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x26ebe8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x26ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x26ebec: 0xaeca0004  sw          $t2, 0x4($s6)
    ctx->pc = 0x26ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 10));
    // 0x26ebf0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26ebf4: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26ebf8: 0xaeca0008  sw          $t2, 0x8($s6)
    ctx->pc = 0x26ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 10));
    // 0x26ebfc: 0xaec90010  sw          $t1, 0x10($s6)
    ctx->pc = 0x26ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 9));
    // 0x26ec00: 0xaec80014  sw          $t0, 0x14($s6)
    ctx->pc = 0x26ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 8));
    // 0x26ec04: 0xaec70018  sw          $a3, 0x18($s6)
    ctx->pc = 0x26ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 7));
    // 0x26ec08: 0xaec8001c  sw          $t0, 0x1C($s6)
    ctx->pc = 0x26ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 8));
    // 0x26ec0c: 0xaec30020  sw          $v1, 0x20($s6)
    ctx->pc = 0x26ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 3));
    // 0x26ec10: 0xaec80024  sw          $t0, 0x24($s6)
    ctx->pc = 0x26ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 8));
    // 0x26ec14: 0xaec20028  sw          $v0, 0x28($s6)
    ctx->pc = 0x26ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 2));
    // 0x26ec18: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26EC18u;
    SET_GPR_U32(ctx, 31, 0x26EC20u);
    ctx->pc = 0x26EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC18u;
    // 0x26ec1c: 0xaec8002c  sw          $t0, 0x2C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26EC18u, 0x26EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC20u;
label_26ec20:
    // 0x26ec20: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x26ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x26ec24: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x26ec24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x26ec28: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x26ec28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ec2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26ec2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26ec30: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x26ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26ec34: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x26ec34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ec38: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x26ec38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26ec3c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26EC3Cu;
    {
        const bool branch_taken_0x26ec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC3Cu;
        // 0x26ec40: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec3c) {
            ctx->pc = 0x26EB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26eb90;
        }
    }
    ctx->pc = 0x26EC44u;
    // 0x26ec44: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x26ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x26ec48: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x26ec48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x26ec4c: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x26ec4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ec50: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x26ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26ec54: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x26ec54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ec58: 0x2aa2000e  slti        $v0, $s5, 0xE
    ctx->pc = 0x26ec58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x26ec5c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x26EC5Cu;
    {
        const bool branch_taken_0x26ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC5Cu;
        // 0x26ec60: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec5c) {
            ctx->pc = 0x26EB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26eb68;
        }
    }
    ctx->pc = 0x26EC64u;
    // 0x26ec64: 0x0  nop
    ctx->pc = 0x26ec64u;
    // NOP
label_26ec68:
    // 0x26ec68: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26ec6c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26ec70: 0xc05e360  jal         func_178D80
    ctx->pc = 0x26EC70u;
    SET_GPR_U32(ctx, 31, 0x26EC78u);
    ctx->pc = 0x26EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC70u;
    // 0x26ec74: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x26EC70u, 0x26EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC78u;
label_26ec78:
    // 0x26ec78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ec78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec7c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26EC7Cu;
    {
        const bool branch_taken_0x26ec7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC7Cu;
        // 0x26ec80: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec7c) {
            ctx->pc = 0x26ED40u;
            goto label_26ed40;
        }
    }
    ctx->pc = 0x26EC84u;
    // 0x26ec84: 0x3c022c18  lui         $v0, 0x2C18
    ctx->pc = 0x26ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11288 << 16));
    // 0x26ec88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26ec8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26ec90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x26ec94: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ec98: 0x8ec90004  lw          $t1, 0x4($s6)
    ctx->pc = 0x26ec98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x26ec9c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x26ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x26eca0: 0x344800ff  ori         $t0, $v0, 0xFF
    ctx->pc = 0x26eca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x26eca4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x26eca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x26eca8: 0x3c028200  lui         $v0, 0x8200
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33280 << 16));
    // 0x26ecac: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26ecb0: 0x34477000  ori         $a3, $v0, 0x7000
    ctx->pc = 0x26ecb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x26ecb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ecb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ecb8: 0x34428ff0  ori         $v0, $v0, 0x8FF0
    ctx->pc = 0x26ecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36848);
    // 0x26ecbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ecc0: 0x35290040  ori         $t1, $t1, 0x40
    ctx->pc = 0x26ecc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64);
    // 0x26ecc4: 0xaec90004  sw          $t1, 0x4($s6)
    ctx->pc = 0x26ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 9));
    // 0x26ecc8: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x26ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x26eccc: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x26ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x26ecd0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x26ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x26ecd4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x26ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x26ecd8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26ECD8u;
    SET_GPR_U32(ctx, 31, 0x26ECE0u);
    ctx->pc = 0x26ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECD8u;
    // 0x26ecdc: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26ECD8u, 0x26ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECE0u;
label_26ece0:
    // 0x26ece0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26ece4: 0x3c022c18  lui         $v0, 0x2C18
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11288 << 16));
    // 0x26ece8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x26ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x26ecec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26ececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26ecf0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x26ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x26ecf4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ecf8: 0x8ec90004  lw          $t1, 0x4($s6)
    ctx->pc = 0x26ecf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x26ecfc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x26ed00: 0x344800ff  ori         $t0, $v0, 0xFF
    ctx->pc = 0x26ed00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x26ed04: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x26ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x26ed08: 0x3c028208  lui         $v0, 0x8208
    ctx->pc = 0x26ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33288 << 16));
    // 0x26ed0c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26ed10: 0x34477000  ori         $a3, $v0, 0x7000
    ctx->pc = 0x26ed10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x26ed14: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26ed18: 0x34428ff0  ori         $v0, $v0, 0x8FF0
    ctx->pc = 0x26ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36848);
    // 0x26ed1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ed20: 0x35290040  ori         $t1, $t1, 0x40
    ctx->pc = 0x26ed20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64);
    // 0x26ed24: 0xaec90004  sw          $t1, 0x4($s6)
    ctx->pc = 0x26ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 9));
    // 0x26ed28: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x26ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    // 0x26ed2c: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x26ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x26ed30: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x26ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x26ed34: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x26ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x26ed38: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26ED38u;
    SET_GPR_U32(ctx, 31, 0x26ED40u);
    ctx->pc = 0x26ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED38u;
    // 0x26ed3c: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26ED38u, 0x26ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED40u;
label_26ed40:
    // 0x26ed40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26ed40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ed44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26ed44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ed48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26ed48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ed4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26ed4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ed50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26ed50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ed54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26ed54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ed58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ed58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ed5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ed5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ed60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ed60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ed64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ed64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ed68: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED68u;
        // 0x26ed6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ED70u;
}
