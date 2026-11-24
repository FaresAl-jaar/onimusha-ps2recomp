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

// Function: sub_00284010
// Address: 0x284010 - 0x284300
void sub_00284010_0x284010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284010_0x284010");
#endif

    switch (ctx->pc) {
        case 0x284068u: goto label_284068;
        case 0x284078u: goto label_284078;
        case 0x2840f4u: goto label_2840f4;
        case 0x284120u: goto label_284120;
        case 0x284140u: goto label_284140;
        case 0x28416cu: goto label_28416c;
        case 0x2841acu: goto label_2841ac;
        case 0x2841d8u: goto label_2841d8;
        case 0x284270u: goto label_284270;
        case 0x284294u: goto label_284294;
        case 0x2842d8u: goto label_2842d8;
        default: break;
    }

    ctx->pc = 0x284010u;

    // 0x284010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x284014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x284018: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28401c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284020: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x284020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284024: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28402c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284038: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x284038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x28403c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x28403cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x284040: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x284040u;
    {
        const bool branch_taken_0x284040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284040u;
        // 0x284044: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284040) {
            ctx->pc = 0x284098u;
            goto label_284098;
        }
    }
    ctx->pc = 0x284048u;
    // 0x284048: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x284048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28404c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x28404Cu;
    {
        const bool branch_taken_0x28404c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28404c) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x284054u;
    // 0x284054: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x284054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x284058: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x284058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x28405c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x28405cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x284060: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x284060u;
    {
        const bool branch_taken_0x284060 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x284064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284060u;
        // 0x284064: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284060) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x284068u;
label_284068:
    // 0x284068: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x284068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x28406c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x28406cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x284070: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x284070u;
    SET_GPR_U32(ctx, 31, 0x284078u);
    ctx->pc = 0x284074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284070u;
    // 0x284074: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x284070u, 0x284078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284078u;
label_284078:
    // 0x284078: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x284078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28407c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28407cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x284080: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x284080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x284084: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x284084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x284088: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x284088u;
    {
        const bool branch_taken_0x284088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x284088) {
            ctx->pc = 0x284068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284068;
        }
    }
    ctx->pc = 0x284090u;
    // 0x284090: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x284090u;
    {
        const bool branch_taken_0x284090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284090) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x284098u;
label_284098:
    // 0x284098: 0x86c50054  lh          $a1, 0x54($s6)
    ctx->pc = 0x284098u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28409c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2840a0: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x2840a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2840a4: 0x0  nop
    ctx->pc = 0x2840a4u;
    // NOP
    // 0x2840a8: 0x0  nop
    ctx->pc = 0x2840a8u;
    // NOP
    // 0x2840ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2840acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2840b0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2840B0u;
    {
        const bool branch_taken_0x2840b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840b0) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x2840B8u;
    // 0x2840b8: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x2840b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2840bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2840bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2840c0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2840C0u;
    {
        const bool branch_taken_0x2840c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840c0) {
            ctx->pc = 0x284100u;
            goto label_284100;
        }
    }
    ctx->pc = 0x2840C8u;
    // 0x2840c8: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x2840c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2840cc: 0x86c50084  lh          $a1, 0x84($s6)
    ctx->pc = 0x2840ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x2840d0: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x2840d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x2840d4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2840d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2840d8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2840D8u;
    {
        const bool branch_taken_0x2840d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840d8) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x2840E0u;
    // 0x2840e0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2840e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2840e4: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x2840e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2840e8: 0xa6c20084  sh          $v0, 0x84($s6)
    ctx->pc = 0x2840e8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x2840ec: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x2840ECu;
    SET_GPR_U32(ctx, 31, 0x2840F4u);
    ctx->pc = 0x2840F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840ECu;
    // 0x2840f0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x2840ECu, 0x2840F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840F4u;
label_2840f4:
    // 0x2840f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2840F4u;
    {
        const bool branch_taken_0x2840f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840f4) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x2840FCu;
    // 0x2840fc: 0x0  nop
    ctx->pc = 0x2840fcu;
    // NOP
label_284100:
    // 0x284100: 0x86c30084  lh          $v1, 0x84($s6)
    ctx->pc = 0x284100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x284104: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284104u;
    {
        const bool branch_taken_0x284104 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x284104) {
            ctx->pc = 0x284120u;
            goto label_284120;
        }
    }
    ctx->pc = 0x28410Cu;
    // 0x28410c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284110: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x284110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284114: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x284114u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x284118: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x284118u;
    SET_GPR_U32(ctx, 31, 0x284120u);
    ctx->pc = 0x28411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284118u;
    // 0x28411c: 0xa6c20084  sh          $v0, 0x84($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 132), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x284118u, 0x284120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284120u;
label_284120:
    // 0x284120: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x284120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x284124: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x284124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284128: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x284128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28412c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28412cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284130: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x284130u;
    {
        const bool branch_taken_0x284130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284130u;
        // 0x284134: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284130) {
            ctx->pc = 0x284238u;
            goto label_284238;
        }
    }
    ctx->pc = 0x284138u;
    // 0x284138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x284138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28413c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284140:
    // 0x284140: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x284140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x284144: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x284144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x284148: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x284148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x28414c: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x28414cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x284150: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x284150u;
    {
        const bool branch_taken_0x284150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x284150) {
            ctx->pc = 0x284218u;
            goto label_284218;
        }
    }
    ctx->pc = 0x284158u;
    // 0x284158: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x284158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x28415c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284160: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x284160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284164: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x284164u;
    SET_GPR_U32(ctx, 31, 0x28416Cu);
    ctx->pc = 0x284168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284164u;
    // 0x284168: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x284164u, 0x28416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28416Cu;
label_28416c:
    // 0x28416c: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x28416cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x284170: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x284170u;
    {
        const bool branch_taken_0x284170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284170) {
            ctx->pc = 0x2841D0u;
            goto label_2841d0;
        }
    }
    ctx->pc = 0x284178u;
    // 0x284178: 0x86c60080  lh          $a2, 0x80($s6)
    ctx->pc = 0x284178u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x28417c: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x28417cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x284180: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x284180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x284184: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x284184u;
    {
        const bool branch_taken_0x284184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x284184) {
            ctx->pc = 0x2841D0u;
            goto label_2841d0;
        }
    }
    ctx->pc = 0x28418Cu;
    // 0x28418c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28418Cu;
    {
        const bool branch_taken_0x28418c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x284190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28418Cu;
        // 0x284190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28418c) {
            ctx->pc = 0x2841A4u;
            goto label_2841a4;
        }
    }
    ctx->pc = 0x284194u;
    // 0x284194: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28419c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28419Cu;
    {
        const bool branch_taken_0x28419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28419Cu;
        // 0x2841a0: 0x3c024380  lui         $v0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28419c) {
            ctx->pc = 0x2841B0u;
            goto label_2841b0;
        }
    }
    ctx->pc = 0x2841A4u;
label_2841a4:
    // 0x2841a4: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x2841A4u;
    SET_GPR_U32(ctx, 31, 0x2841ACu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x2841A4u, 0x2841ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841ACu;
label_2841ac:
    // 0x2841ac: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_2841b0:
    // 0x2841b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2841b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2841b4: 0x0  nop
    ctx->pc = 0x2841b4u;
    // NOP
    // 0x2841b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2841b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2841bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2841bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2841c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2841c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2841c4: 0x0  nop
    ctx->pc = 0x2841c4u;
    // NOP
    // 0x2841c8: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x2841c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2841cc: 0x0  nop
    ctx->pc = 0x2841ccu;
    // NOP
label_2841d0:
    // 0x2841d0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2841D0u;
    SET_GPR_U32(ctx, 31, 0x2841D8u);
    ctx->pc = 0x2841D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841D0u;
    // 0x2841d4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2841D0u, 0x2841D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841D8u;
label_2841d8:
    // 0x2841d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841D8u;
    {
        const bool branch_taken_0x2841d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841D8u;
        // 0x2841dc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841d8) {
            ctx->pc = 0x2841E8u;
            goto label_2841e8;
        }
    }
    ctx->pc = 0x2841E0u;
    // 0x2841e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E0u;
        // 0x2841e4: 0xa6430020  sh          $v1, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x284218u;
            goto label_284218;
        }
    }
    ctx->pc = 0x2841E8u;
label_2841e8:
    // 0x2841e8: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2841ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2841f0: 0xa6430020  sh          $v1, 0x20($s2)
    ctx->pc = 0x2841f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2841f4: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2841f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2841f8: 0x28617ff1  slti        $at, $v1, 0x7FF1
    ctx->pc = 0x2841f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
    // 0x2841fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2841FCu;
    {
        const bool branch_taken_0x2841fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x284200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841FCu;
        // 0x284200: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841fc) {
            ctx->pc = 0x284210u;
            goto label_284210;
        }
    }
    ctx->pc = 0x284204u;
    // 0x284204: 0xa2430025  sb          $v1, 0x25($s2)
    ctx->pc = 0x284204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x284208: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x284208u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28420c: 0x0  nop
    ctx->pc = 0x28420cu;
    // NOP
label_284210:
    // 0x284210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x284210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x284214: 0x0  nop
    ctx->pc = 0x284214u;
    // NOP
label_284218:
    // 0x284218: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x284218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28421c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28421cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x284220: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x284224: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x284224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x284228: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x284228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28422c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x28422Cu;
    {
        const bool branch_taken_0x28422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28422Cu;
        // 0x284230: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28422c) {
            ctx->pc = 0x284140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284140;
        }
    }
    ctx->pc = 0x284234u;
    // 0x284234: 0x0  nop
    ctx->pc = 0x284234u;
    // NOP
label_284238:
    // 0x284238: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x28423c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x28423cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x284240: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x284240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x284244: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x284244u;
    {
        const bool branch_taken_0x284244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284244) {
            ctx->pc = 0x284278u;
            goto label_284278;
        }
    }
    ctx->pc = 0x28424Cu;
    // 0x28424c: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x28424cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x284250: 0x86c40084  lh          $a0, 0x84($s6)
    ctx->pc = 0x284250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x284254: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x284254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x284258: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x284258u;
    {
        const bool branch_taken_0x284258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x284258) {
            ctx->pc = 0x284298u;
            goto label_284298;
        }
    }
    ctx->pc = 0x284260u;
    // 0x284260: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x284260u;
    {
        const bool branch_taken_0x284260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x284264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284260u;
        // 0x284264: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284260) {
            ctx->pc = 0x284298u;
            goto label_284298;
        }
    }
    ctx->pc = 0x284268u;
    // 0x284268: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x284268u;
    SET_GPR_U32(ctx, 31, 0x284270u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x284268u, 0x284270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284270u;
label_284270:
    // 0x284270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x284270u;
    {
        const bool branch_taken_0x284270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284270) {
            ctx->pc = 0x284298u;
            goto label_284298;
        }
    }
    ctx->pc = 0x284278u;
label_284278:
    // 0x284278: 0x86c30084  lh          $v1, 0x84($s6)
    ctx->pc = 0x284278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x28427c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28427Cu;
    {
        const bool branch_taken_0x28427c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x28427c) {
            ctx->pc = 0x284298u;
            goto label_284298;
        }
    }
    ctx->pc = 0x284284u;
    // 0x284284: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x284284u;
    {
        const bool branch_taken_0x284284 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x284288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284284u;
        // 0x284288: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284284) {
            ctx->pc = 0x284298u;
            goto label_284298;
        }
    }
    ctx->pc = 0x28428Cu;
    // 0x28428c: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x28428Cu;
    SET_GPR_U32(ctx, 31, 0x284294u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x28428Cu, 0x284294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284294u;
label_284294:
    // 0x284294: 0x0  nop
    ctx->pc = 0x284294u;
    // NOP
label_284298:
    // 0x284298: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x284298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x28429c: 0x7ec30040  sq          $v1, 0x40($s6)
    ctx->pc = 0x28429cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 3));
    // 0x2842a0: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2842a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2842a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2842a8: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x2842a8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2842ac: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x2842acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2842b0: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x2842b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2842b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2842B4u;
    {
        const bool branch_taken_0x2842b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2842B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842B4u;
        // 0x2842b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842b4) {
            ctx->pc = 0x2842C0u;
            goto label_2842c0;
        }
    }
    ctx->pc = 0x2842BCu;
    // 0x2842bc: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x2842bcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
label_2842c0:
    // 0x2842c0: 0x92c30050  lbu         $v1, 0x50($s6)
    ctx->pc = 0x2842c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2842c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2842c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2842c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842C8u;
        // 0x2842cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842D8u;
            goto label_2842d8;
        }
    }
    ctx->pc = 0x2842D0u;
    // 0x2842d0: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2842D0u;
    SET_GPR_U32(ctx, 31, 0x2842D8u);
    ctx->pc = 0x2842D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842D0u;
    // 0x2842d4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2842D0u, 0x2842D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842D8u;
label_2842d8:
    // 0x2842d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2842d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2842dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2842dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2842e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2842e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2842e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2842e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2842e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2842e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2842ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2842ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2842f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2842f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2842f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2842f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2842f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2842F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2842FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842F8u;
        // 0x2842fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2842F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284300u;
}
