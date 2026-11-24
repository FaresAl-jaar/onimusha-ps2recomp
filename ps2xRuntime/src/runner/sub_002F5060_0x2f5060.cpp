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

// Function: sub_002F5060
// Address: 0x2f5060 - 0x2f51d0
void sub_002F5060_0x2f5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5060_0x2f5060");
#endif

    switch (ctx->pc) {
        case 0x2f5084u: goto label_2f5084;
        case 0x2f5090u: goto label_2f5090;
        case 0x2f517cu: goto label_2f517c;
        case 0x2f51a4u: goto label_2f51a4;
        case 0x2f51b0u: goto label_2f51b0;
        default: break;
    }

    ctx->pc = 0x2f5060u;

    // 0x2f5060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f5068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f506c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5074: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f5074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5078: 0x278487c0  addiu       $a0, $gp, -0x7840
    ctx->pc = 0x2f5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    // 0x2f507c: 0xc06916c  jal         func_1A45B0
    ctx->pc = 0x2F507Cu;
    SET_GPR_U32(ctx, 31, 0x2F5084u);
    ctx->pc = 0x2F5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F507Cu;
    // 0x2f5080: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45B0u, 0x2F507Cu, 0x2F5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5084u;
label_2f5084:
    // 0x2f5084: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2f5088: 0xc0ceafc  jal         func_33ABF0
    ctx->pc = 0x2F5088u;
    SET_GPR_U32(ctx, 31, 0x2F5090u);
    ctx->pc = 0x2F508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5088u;
    // 0x2f508c: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABF0u, 0x2F5088u, 0x2F5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5090u;
label_2f5090:
    // 0x2f5090: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5094: 0x924a0001  lbu         $t2, 0x1($s2)
    ctx->pc = 0x2f5094u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2f5098: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x2f5098u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2f509c: 0x3c09004f  lui         $t1, 0x4F
    ctx->pc = 0x2f509cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)79 << 16));
    // 0x2f50a0: 0x25299100  addiu       $t1, $t1, -0x6F00
    ctx->pc = 0x2f50a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938880));
    // 0x2f50a4: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2f50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2f50a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50ac: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x2f50acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f50b0: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2f50b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50b8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2f50b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2f50bc: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2f50c0: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x2f50c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2f50c4: 0x1288021  addu        $s0, $t1, $t0
    ctx->pc = 0x2f50c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f50c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50cc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2f50ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2f50d0: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2f50d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2f50d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50d8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2f50d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2f50dc: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2f50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2f50e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2f50e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2f50e8: 0xac20cedc  sw          $zero, -0x3124($at)
    ctx->pc = 0x2f50e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x2f50ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50f0: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2f50f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f50f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f50f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f50f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f50fc: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2f50fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2f5100: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x2f5100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2f5104: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5104u;
    {
        const bool branch_taken_0x2f5104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5104u;
        // 0x2f5108: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5104) {
            ctx->pc = 0x2F5148u;
            goto label_2f5148;
        }
    }
    ctx->pc = 0x2F510Cu;
    // 0x2f510c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f510cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5110: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2f5110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f5114: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2f5114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2f5118: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f5118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f511c: 0xa42816  dsrlv       $a1, $a0, $a1
    ctx->pc = 0x2f511cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x2f5120: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f5120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f5124: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2f5124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f5128: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f5128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f512c: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x2f512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x2f5130: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2f5130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f5134: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2f5134u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f5138: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f513c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5140: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2f5140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2f5144: 0x0  nop
    ctx->pc = 0x2f5144u;
    // NOP
label_2f5148:
    // 0x2f5148: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F5180u;
            goto label_2f5180;
        }
    }
    ctx->pc = 0x2F5150u;
    // 0x2f5150: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x2f5150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f5154: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f5154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f5158: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5158u;
    {
        const bool branch_taken_0x2f5158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5158u;
        // 0x2f515c: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5158) {
            ctx->pc = 0x2F5180u;
            goto label_2f5180;
        }
    }
    ctx->pc = 0x2F5160u;
    // 0x2f5160: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f5160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f5164: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f5168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f516c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f516cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5170: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5174: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F5174u;
    SET_GPR_U32(ctx, 31, 0x2F517Cu);
    ctx->pc = 0x2F5178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5174u;
    // 0x2f5178: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F5174u, 0x2F517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F517Cu;
label_2f517c:
    // 0x2f517c: 0x0  nop
    ctx->pc = 0x2f517cu;
    // NOP
label_2f5180:
    // 0x2f5180: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x2f5180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f5184: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F5184u;
    {
        const bool branch_taken_0x2f5184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5184u;
        // 0x2f5188: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5184) {
            ctx->pc = 0x2F51B0u;
            goto label_2f51b0;
        }
    }
    ctx->pc = 0x2F518Cu;
    // 0x2f518c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f5190: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f5190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2f5194: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5194u;
    {
        const bool branch_taken_0x2f5194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5194) {
            ctx->pc = 0x2F51A8u;
            goto label_2f51a8;
        }
    }
    ctx->pc = 0x2F519Cu;
    // 0x2f519c: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x2F519Cu;
    SET_GPR_U32(ctx, 31, 0x2F51A4u);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x2F519Cu, 0x2F51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51A4u;
label_2f51a4:
    // 0x2f51a4: 0x0  nop
    ctx->pc = 0x2f51a4u;
    // NOP
label_2f51a8:
    // 0x2f51a8: 0xc0d2800  jal         func_34A000
    ctx->pc = 0x2F51A8u;
    SET_GPR_U32(ctx, 31, 0x2F51B0u);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x2F51A8u, 0x2F51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51B0u;
label_2f51b0:
    // 0x2f51b0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2f51b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f51b4: 0xa2400015  sb          $zero, 0x15($s2)
    ctx->pc = 0x2f51b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f51b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f51b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f51bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f51bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f51c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f51c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f51c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f51c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f51c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F51C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C8u;
        // 0x2f51cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F51C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F51D0u;
}
