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

// Function: sub_0022CBA0
// Address: 0x22cba0 - 0x22cdd0
void sub_0022CBA0_0x22cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CBA0_0x22cba0");
#endif

    switch (ctx->pc) {
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc68u: goto label_22cc68;
        default: break;
    }

    ctx->pc = 0x22cba0u;

    // 0x22cba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22cba4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22cba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22cba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22cbb0: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x22cbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x22cbb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22cbb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22cbb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbbc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22cbc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22cbc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22cbc8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22cbc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbcc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22cbd0: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x22cbd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbd4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x22cbd8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x22cbd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbdc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x22cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x22cbe0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x22cbe0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbe4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22cbe8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22cbec: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x22cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x22cbf0: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x22cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x22cbf4: 0x0  nop
    ctx->pc = 0x22cbf4u;
    // NOP
label_22cbf8:
    // 0x22cbf8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x22cbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22cbfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CBFCu;
    {
        const bool branch_taken_0x22cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBFCu;
        // 0x22cc00: 0x8e25c348  lw          $a1, -0x3CB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbfc) {
            ctx->pc = 0x22CC18u;
            goto label_22cc18;
        }
    }
    ctx->pc = 0x22CC04u;
    // 0x22cc04: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22cc08: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22CC08u;
    SET_GPR_U32(ctx, 31, 0x22CC10u);
    ctx->pc = 0x22CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC08u;
    // 0x22cc0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22CC08u, 0x22CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC10u;
label_22cc10:
    // 0x22cc10: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22CC10u;
    {
        const bool branch_taken_0x22cc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cc10) {
            ctx->pc = 0x22CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC10u;
            // 0x22cc14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cbf8;
        }
    }
    ctx->pc = 0x22CC18u;
label_22cc18:
    // 0x22cc18: 0x12120061  beq         $s0, $s2, . + 4 + (0x61 << 2)
    ctx->pc = 0x22CC18u;
    {
        const bool branch_taken_0x22cc18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x22CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC18u;
        // 0x22cc1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc18) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CC20u;
    // 0x22cc20: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x22cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x22cc24: 0x5460005f  bnel        $v1, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x22CC24u;
    {
        const bool branch_taken_0x22cc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cc24) {
            ctx->pc = 0x22CC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC24u;
            // 0x22cc28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CDA4u;
            goto label_22cda4;
        }
    }
    ctx->pc = 0x22CC2Cu;
    // 0x22cc2c: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22cc30: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22cc34: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cc38: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22cc38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cc3c: 0x50600059  beql        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x22CC3Cu;
    {
        const bool branch_taken_0x22cc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc3c) {
            ctx->pc = 0x22CC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC3Cu;
            // 0x22cc40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CDA4u;
            goto label_22cda4;
        }
    }
    ctx->pc = 0x22CC44u;
    // 0x22cc44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22cc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc48: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x22cc4c: 0x0  nop
    ctx->pc = 0x22cc4cu;
    // NOP
label_22cc50:
    // 0x22cc50: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x22cc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22cc54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CC54u;
    {
        const bool branch_taken_0x22cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC54u;
        // 0x22cc58: 0x8ea5c34c  lw          $a1, -0x3CB4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc54) {
            ctx->pc = 0x22CC70u;
            goto label_22cc70;
        }
    }
    ctx->pc = 0x22CC5Cu;
    // 0x22cc5c: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22cc60: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22CC60u;
    SET_GPR_U32(ctx, 31, 0x22CC68u);
    ctx->pc = 0x22CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC60u;
    // 0x22cc64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22CC60u, 0x22CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC68u;
label_22cc68:
    // 0x22cc68: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22CC68u;
    {
        const bool branch_taken_0x22cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cc68) {
            ctx->pc = 0x22CC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC68u;
            // 0x22cc6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cc50;
        }
    }
    ctx->pc = 0x22CC70u;
label_22cc70:
    // 0x22cc70: 0x1212004b  beq         $s0, $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x22CC70u;
    {
        const bool branch_taken_0x22cc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x22CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC70u;
        // 0x22cc74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc70) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CC78u;
    // 0x22cc78: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x22cc7c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x22cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22cc80: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x22cc80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22cc84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc88: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x22cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22cc8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cc90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cc94: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22cc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22cc98: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x22cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22cc9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22cca0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22cca4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x22cca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x22cca8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22ccac: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x22ccacu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ccb0: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x22ccb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x22ccb4: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x22ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ccb8: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x22ccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22ccbc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22ccc0: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x22ccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ccc4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22ccc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x22ccc8: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x22ccc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22cccc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22CCCCu;
    {
        const bool branch_taken_0x22cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cccc) {
            ctx->pc = 0x22CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CCCCu;
            // 0x22ccd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CCD4u;
            goto label_22ccd4;
        }
    }
    ctx->pc = 0x22CCD4u;
label_22ccd4:
    // 0x22ccd4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ccd8: 0x1812  mflo        $v1
    ctx->pc = 0x22ccd8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22ccdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22cce0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22cce4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x22cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x22cce8: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x22cce8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22ccec: 0x14a80004  bne         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CCECu;
    {
        const bool branch_taken_0x22ccec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x22CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCECu;
        // 0x22ccf0: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccec) {
            ctx->pc = 0x22CD00u;
            goto label_22cd00;
        }
    }
    ctx->pc = 0x22CCF4u;
    // 0x22ccf4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ccf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22CCF8u;
    {
        const bool branch_taken_0x22ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCF8u;
        // 0x22ccfc: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccf8) {
            ctx->pc = 0x22CD68u;
            goto label_22cd68;
        }
    }
    ctx->pc = 0x22CD00u;
label_22cd00:
    // 0x22cd00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22cd04: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CD04u;
    {
        const bool branch_taken_0x22cd04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD04u;
        // 0x22cd08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd04) {
            ctx->pc = 0x22CD18u;
            goto label_22cd18;
        }
    }
    ctx->pc = 0x22CD0Cu;
    // 0x22cd0c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x22cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cd10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22CD10u;
    {
        const bool branch_taken_0x22cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD10u;
        // 0x22cd14: 0xa4870000  sh          $a3, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd10) {
            ctx->pc = 0x22CD68u;
            goto label_22cd68;
        }
    }
    ctx->pc = 0x22CD18u;
label_22cd18:
    // 0x22cd18: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22CD18u;
    {
        const bool branch_taken_0x22cd18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD18u;
        // 0x22cd1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd18) {
            ctx->pc = 0x22CD6Cu;
            goto label_22cd6c;
        }
    }
    ctx->pc = 0x22CD20u;
    // 0x22cd20: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22cd24: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x22cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x22cd28: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22cd2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22cd30: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22cd34: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x22cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22cd38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x22cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22cd3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22cd40: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x22cd40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22cd44: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22cd44u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22cd48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22CD48u;
    {
        const bool branch_taken_0x22cd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd48) {
            ctx->pc = 0x22CD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CD48u;
            // 0x22cd4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD50u;
            goto label_22cd50;
        }
    }
    ctx->pc = 0x22CD50u;
label_22cd50:
    // 0x22cd50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cd54: 0x1812  mflo        $v1
    ctx->pc = 0x22cd54u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22cd58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22cd5c: 0xa2880000  sb          $t0, 0x0($s4)
    ctx->pc = 0x22cd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x22cd60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cd64: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x22cd64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_22cd68:
    // 0x22cd68: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x22cd68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_22cd6c:
    // 0x22cd6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22CD6Cu;
    {
        const bool branch_taken_0x22cd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD6Cu;
        // 0x22cd70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd6c) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CD74u;
    // 0x22cd74: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x22cd74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22cd78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22CD78u;
    {
        const bool branch_taken_0x22cd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD78u;
        // 0x22cd7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd78) {
            ctx->pc = 0x22CDA4u;
            goto label_22cda4;
        }
    }
    ctx->pc = 0x22CD80u;
    // 0x22cd80: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x22cd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22cd84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22cd88: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x22cd88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cd8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CD8Cu;
    {
        const bool branch_taken_0x22cd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD8Cu;
        // 0x22cd90: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd8c) {
            ctx->pc = 0x22CDA8u;
            goto label_22cda8;
        }
    }
    ctx->pc = 0x22CD94u;
    // 0x22cd94: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22cd98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22cd9c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x22cd9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_22cda0:
    // 0x22cda0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22cda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22cda4:
    // 0x22cda4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22cda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22cda8:
    // 0x22cda8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22cda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cdac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22cdacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22cdb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22cdb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cdb4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22cdb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22cdb8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22cdb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cdbc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22cdbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cdc0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x22cdc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cdc4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x22CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDC8u;
        // 0x22cdcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CDD0u;
}
