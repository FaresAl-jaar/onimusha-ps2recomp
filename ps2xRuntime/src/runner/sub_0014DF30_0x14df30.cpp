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

// Function: sub_0014DF30
// Address: 0x14df30 - 0x14e1a0
void sub_0014DF30_0x14df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DF30_0x14df30");
#endif

    switch (ctx->pc) {
        case 0x14dfa0u: goto label_14dfa0;
        case 0x14e080u: goto label_14e080;
        case 0x14e148u: goto label_14e148;
        case 0x14e158u: goto label_14e158;
        default: break;
    }

    ctx->pc = 0x14df30u;

    // 0x14df30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14df34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14df38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14df3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14df40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14df44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14df44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14df48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14df4c: 0x94834060  lhu         $v1, 0x4060($a0)
    ctx->pc = 0x14df4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16480)));
    // 0x14df50: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x14DF50u;
    {
        const bool branch_taken_0x14df50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF50u;
        // 0x14df54: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df50) {
            ctx->pc = 0x14E180u;
            goto label_14e180;
        }
    }
    ctx->pc = 0x14DF58u;
    // 0x14df58: 0xdf838030  ld          $v1, -0x7FD0($gp)
    ctx->pc = 0x14df58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x14df5c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x14df60: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x14df60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14df64: 0x96634060  lhu         $v1, 0x4060($s3)
    ctx->pc = 0x14df64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16480)));
    // 0x14df68: 0x246dffff  addiu       $t5, $v1, -0x1
    ctx->pc = 0x14df68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14df6c: 0x5a0002e  bltz        $t5, . + 4 + (0x2E << 2)
    ctx->pc = 0x14DF6Cu;
    {
        const bool branch_taken_0x14df6c = (GPR_S64(ctx, 13) < 0);
        ctx->pc = 0x14DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF6Cu;
        // 0x14df70: 0xd18c0  sll         $v1, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df6c) {
            ctx->pc = 0x14E028u;
            goto label_14e028;
        }
    }
    ctx->pc = 0x14DF74u;
    // 0x14df74: 0x27ab008c  addiu       $t3, $sp, 0x8C
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x14df78: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x14df7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14df80: 0x2636021  addu        $t4, $s3, $v1
    ctx->pc = 0x14df80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14df84: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x14df84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14df88: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14df8c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x14df8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14df90: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14df94: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x14df98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14df98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14df9c: 0x0  nop
    ctx->pc = 0x14df9cu;
    // NOP
label_14dfa0:
    // 0x14dfa0: 0x9183085c  lbu         $v1, 0x85C($t4)
    ctx->pc = 0x14dfa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2140)));
    // 0x14dfa4: 0x1469001c  bne         $v1, $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x14DFA4u;
    {
        const bool branch_taken_0x14dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x14dfa4) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14DFACu;
    // 0x14dfac: 0x918a0868  lbu         $t2, 0x868($t4)
    ctx->pc = 0x14dfacu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2152)));
    // 0x14dfb0: 0x1548000d  bne         $t2, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x14DFB0u;
    {
        const bool branch_taken_0x14dfb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x14dfb0) {
            ctx->pc = 0x14DFE8u;
            goto label_14dfe8;
        }
    }
    ctx->pc = 0x14DFB8u;
    // 0x14dfb8: 0x91830869  lbu         $v1, 0x869($t4)
    ctx->pc = 0x14dfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2153)));
    // 0x14dfbc: 0x1467000a  bne         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x14DFBCu;
    {
        const bool branch_taken_0x14dfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x14dfbc) {
            ctx->pc = 0x14DFE8u;
            goto label_14dfe8;
        }
    }
    ctx->pc = 0x14DFC4u;
    // 0x14dfc4: 0x9183086a  lbu         $v1, 0x86A($t4)
    ctx->pc = 0x14dfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2154)));
    // 0x14dfc8: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DFC8u;
    {
        const bool branch_taken_0x14dfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x14dfc8) {
            ctx->pc = 0x14DFE8u;
            goto label_14dfe8;
        }
    }
    ctx->pc = 0x14DFD0u;
    // 0x14dfd0: 0x9183086b  lbu         $v1, 0x86B($t4)
    ctx->pc = 0x14dfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2155)));
    // 0x14dfd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DFD4u;
    {
        const bool branch_taken_0x14dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dfd4) {
            ctx->pc = 0x14DFE8u;
            goto label_14dfe8;
        }
    }
    ctx->pc = 0x14DFDCu;
    // 0x14dfdc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14DFDCu;
    {
        const bool branch_taken_0x14dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFDCu;
        // 0x14dfe0: 0xafad0088  sw          $t5, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfdc) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14DFE4u;
    // 0x14dfe4: 0x0  nop
    ctx->pc = 0x14dfe4u;
    // NOP
label_14dfe8:
    // 0x14dfe8: 0x1545000b  bne         $t2, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x14DFE8u;
    {
        const bool branch_taken_0x14dfe8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x14dfe8) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14DFF0u;
    // 0x14dff0: 0x91830869  lbu         $v1, 0x869($t4)
    ctx->pc = 0x14dff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2153)));
    // 0x14dff4: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DFF4u;
    {
        const bool branch_taken_0x14dff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x14dff4) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14DFFCu;
    // 0x14dffc: 0x9183086a  lbu         $v1, 0x86A($t4)
    ctx->pc = 0x14dffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2154)));
    // 0x14e000: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E000u;
    {
        const bool branch_taken_0x14e000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e000) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14E008u;
    // 0x14e008: 0x9183086b  lbu         $v1, 0x86B($t4)
    ctx->pc = 0x14e008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2155)));
    // 0x14e00c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E00Cu;
    {
        const bool branch_taken_0x14e00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e00c) {
            ctx->pc = 0x14E018u;
            goto label_14e018;
        }
    }
    ctx->pc = 0x14E014u;
    // 0x14e014: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x14e014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
label_14e018:
    // 0x14e018: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x14e018u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x14e01c: 0x5a1ffe0  bgez        $t5, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14E01Cu;
    {
        const bool branch_taken_0x14e01c = (GPR_S64(ctx, 13) >= 0);
        ctx->pc = 0x14E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E01Cu;
        // 0x14e020: 0x258cffe4  addiu       $t4, $t4, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e01c) {
            ctx->pc = 0x14DFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dfa0;
        }
    }
    ctx->pc = 0x14E024u;
    // 0x14e024: 0x0  nop
    ctx->pc = 0x14e024u;
    // NOP
label_14e028:
    // 0x14e028: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x14e028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x14e02c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e030: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E030u;
    {
        const bool branch_taken_0x14e030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E030u;
        // 0x14e034: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e030) {
            ctx->pc = 0x14E040u;
            goto label_14e040;
        }
    }
    ctx->pc = 0x14E038u;
    // 0x14e038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14e038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14e03c: 0x0  nop
    ctx->pc = 0x14e03cu;
    // NOP
label_14e040:
    // 0x14e040: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x14e044: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x14e044u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e048: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e04c: 0x11230002  beq         $t1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E04Cu;
    {
        const bool branch_taken_0x14e04c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e04c) {
            ctx->pc = 0x14E058u;
            goto label_14e058;
        }
    }
    ctx->pc = 0x14E054u;
    // 0x14e054: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14e058:
    // 0x14e058: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x14E058u;
    {
        const bool branch_taken_0x14e058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e058) {
            ctx->pc = 0x14E180u;
            goto label_14e180;
        }
    }
    ctx->pc = 0x14E060u;
    // 0x14e060: 0x96634060  lhu         $v1, 0x4060($s3)
    ctx->pc = 0x14e060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16480)));
    // 0x14e064: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e068: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x14e068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14e06c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x14E06Cu;
    {
        const bool branch_taken_0x14e06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E06Cu;
        // 0x14e070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e06c) {
            ctx->pc = 0x14E128u;
            goto label_14e128;
        }
    }
    ctx->pc = 0x14E074u;
    // 0x14e074: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x14e074u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e078: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x14e078u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e07c: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x14e07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_14e080:
    // 0x14e080: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x14e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x14e084: 0x10e30022  beq         $a3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14E084u;
    {
        const bool branch_taken_0x14e084 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e084) {
            ctx->pc = 0x14E110u;
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E08Cu;
    // 0x14e08c: 0x10e90020  beq         $a3, $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14E08Cu;
    {
        const bool branch_taken_0x14e08c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x14e08c) {
            ctx->pc = 0x14E110u;
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E094u;
    // 0x14e094: 0x9166085d  lbu         $a2, 0x85D($t3)
    ctx->pc = 0x14e094u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2141)));
    // 0x14e098: 0xc5630868  lwc1        $f3, 0x868($t3)
    ctx->pc = 0x14e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 2152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e09c: 0x9165085e  lbu         $a1, 0x85E($t3)
    ctx->pc = 0x14e09cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2142)));
    // 0x14e0a0: 0xc562086c  lwc1        $f2, 0x86C($t3)
    ctx->pc = 0x14e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 2156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e0a4: 0x8164085f  lb          $a0, 0x85F($t3)
    ctx->pc = 0x14e0a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 2143)));
    // 0x14e0a8: 0xc5610870  lwc1        $f1, 0x870($t3)
    ctx->pc = 0x14e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 2160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e0ac: 0x8d6d0860  lw          $t5, 0x860($t3)
    ctx->pc = 0x14e0acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 2144)));
    // 0x14e0b0: 0xc5600874  lwc1        $f0, 0x874($t3)
    ctx->pc = 0x14e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0b4: 0x8d6c0864  lw          $t4, 0x864($t3)
    ctx->pc = 0x14e0b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 2148)));
    // 0x14e0b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14e0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e0bc: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x14e0bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x14e0c0: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x14e0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x14e0c4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x14e0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x14e0c8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x14e0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x14e0cc: 0x9163085c  lbu         $v1, 0x85C($t3)
    ctx->pc = 0x14e0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2140)));
    // 0x14e0d0: 0xa143085c  sb          $v1, 0x85C($t2)
    ctx->pc = 0x14e0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2140), (uint8_t)GPR_U32(ctx, 3));
    // 0x14e0d4: 0xa146085d  sb          $a2, 0x85D($t2)
    ctx->pc = 0x14e0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2141), (uint8_t)GPR_U32(ctx, 6));
    // 0x14e0d8: 0xa145085e  sb          $a1, 0x85E($t2)
    ctx->pc = 0x14e0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2142), (uint8_t)GPR_U32(ctx, 5));
    // 0x14e0dc: 0xa144085f  sb          $a0, 0x85F($t2)
    ctx->pc = 0x14e0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2143), (uint8_t)GPR_U32(ctx, 4));
    // 0x14e0e0: 0xad4d0860  sw          $t5, 0x860($t2)
    ctx->pc = 0x14e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 2144), GPR_U32(ctx, 13));
    // 0x14e0e4: 0xad4c0864  sw          $t4, 0x864($t2)
    ctx->pc = 0x14e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 2148), GPR_U32(ctx, 12));
    // 0x14e0e8: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x14e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e0ec: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x14e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e0f0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x14e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e0f4: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x14e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0f8: 0xe5430868  swc1        $f3, 0x868($t2)
    ctx->pc = 0x14e0f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 2152), bits); }
    // 0x14e0fc: 0xe542086c  swc1        $f2, 0x86C($t2)
    ctx->pc = 0x14e0fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 2156), bits); }
    // 0x14e100: 0xe5410870  swc1        $f1, 0x870($t2)
    ctx->pc = 0x14e100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 2160), bits); }
    // 0x14e104: 0xe5400874  swc1        $f0, 0x874($t2)
    ctx->pc = 0x14e104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 2164), bits); }
    // 0x14e108: 0x254a001c  addiu       $t2, $t2, 0x1C
    ctx->pc = 0x14e108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28));
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
label_14e110:
    // 0x14e110: 0x96634060  lhu         $v1, 0x4060($s3)
    ctx->pc = 0x14e110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16480)));
    // 0x14e114: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e118: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x14e118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14e11c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x14E11Cu;
    {
        const bool branch_taken_0x14e11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E11Cu;
        // 0x14e120: 0x256b001c  addiu       $t3, $t3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e11c) {
            ctx->pc = 0x14E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e080;
        }
    }
    ctx->pc = 0x14E124u;
    // 0x14e124: 0x0  nop
    ctx->pc = 0x14e124u;
    // NOP
label_14e128:
    // 0x14e128: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x14e128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x14e12c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E12Cu;
    {
        const bool branch_taken_0x14e12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E12Cu;
        // 0x14e130: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e12c) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E134u;
    // 0x14e134: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x14e134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14e138: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x14e138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14e13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e140: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x14e140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14e144: 0x0  nop
    ctx->pc = 0x14e144u;
    // NOP
label_14e148:
    // 0x14e148: 0x2684085c  addiu       $a0, $s4, 0x85C
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2140));
    // 0x14e14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e150: 0xc049590  jal         func_125640
    ctx->pc = 0x14E150u;
    SET_GPR_U32(ctx, 31, 0x14E158u);
    ctx->pc = 0x14E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E150u;
    // 0x14e154: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x14E150u, 0x14E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E158u;
label_14e158:
    // 0x14e158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e15c: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x14e15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x14e160: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x14e160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x14e164: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14E164u;
    {
        const bool branch_taken_0x14e164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E164u;
        // 0x14e168: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e164) {
            ctx->pc = 0x14E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e148;
        }
    }
    ctx->pc = 0x14E16Cu;
    // 0x14e16c: 0x0  nop
    ctx->pc = 0x14e16cu;
    // NOP
label_14e170:
    // 0x14e170: 0x96644060  lhu         $a0, 0x4060($s3)
    ctx->pc = 0x14e170u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16480)));
    // 0x14e174: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x14e178: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x14e178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14e17c: 0xa6634060  sh          $v1, 0x4060($s3)
    ctx->pc = 0x14e17cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16480), (uint16_t)GPR_U32(ctx, 3));
label_14e180:
    // 0x14e180: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e18c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e198: 0x3e00008  jr          $ra
    ctx->pc = 0x14E198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E198u;
        // 0x14e19c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E1A0u;
}
