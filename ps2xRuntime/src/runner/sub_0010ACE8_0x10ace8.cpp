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

// Function: sub_0010ACE8
// Address: 0x10ace8 - 0x10af20
void sub_0010ACE8_0x10ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ACE8_0x10ace8");
#endif

    switch (ctx->pc) {
        case 0x10ad18u: goto label_10ad18;
        case 0x10ad44u: goto label_10ad44;
        case 0x10ad68u: goto label_10ad68;
        case 0x10ae10u: goto label_10ae10;
        case 0x10ae5cu: goto label_10ae5c;
        case 0x10ae64u: goto label_10ae64;
        case 0x10ae6cu: goto label_10ae6c;
        case 0x10aebcu: goto label_10aebc;
        case 0x10aef8u: goto label_10aef8;
        default: break;
    }

    ctx->pc = 0x10ace8u;

    // 0x10ace8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10acec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10acecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10acf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10acf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10acf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10acfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10acfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ad08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ad10: 0xc049590  jal         func_125640
    ctx->pc = 0x10AD10u;
    SET_GPR_U32(ctx, 31, 0x10AD18u);
    ctx->pc = 0x10AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD10u;
    // 0x10ad14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x10AD10u, 0x10AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD18u;
label_10ad18:
    // 0x10ad18: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x10ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x10ad1c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x10ad20: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x10ad20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ad24: 0x2508023  subu        $s0, $s2, $s0
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x10ad28: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x10ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10ad2c: 0x28c219a0  slti        $v0, $a2, 0x19A0
    ctx->pc = 0x10ad2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6560) ? 1 : 0);
    // 0x10ad30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AD30u;
    {
        const bool branch_taken_0x10ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD30u;
        // 0x10ad34: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad30) {
            ctx->pc = 0x10AD4Cu;
            goto label_10ad4c;
        }
    }
    ctx->pc = 0x10AD38u;
    // 0x10ad38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad3c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10AD3Cu;
    SET_GPR_U32(ctx, 31, 0x10AD44u);
    ctx->pc = 0x10AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD3Cu;
    // 0x10ad40: 0x24a521d8  addiu       $a1, $a1, 0x21D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10AD3Cu, 0x10AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD44u;
label_10ad44:
    // 0x10ad44: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x10AD44u;
    {
        const bool branch_taken_0x10ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD44u;
        // 0x10ad48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad44) {
            ctx->pc = 0x10AF04u;
            goto label_10af04;
        }
    }
    ctx->pc = 0x10AD4Cu;
label_10ad4c:
    // 0x10ad4c: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x10ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x10ad50: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x10ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x10ad54: 0x24c6e660  addiu       $a2, $a2, -0x19A0
    ctx->pc = 0x10ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960736));
    // 0x10ad58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad5c: 0x264519a0  addiu       $a1, $s2, 0x19A0
    ctx->pc = 0x10ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6560));
    // 0x10ad60: 0xc042fb6  jal         func_10BED8
    ctx->pc = 0x10AD60u;
    SET_GPR_U32(ctx, 31, 0x10AD68u);
    ctx->pc = 0x10AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD60u;
    // 0x10ad64: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BED8u, 0x10AD60u, 0x10AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD68u;
label_10ad68:
    // 0x10ad68: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x10ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x10ad6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ad70: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x10ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x10ad74: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x10ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x10ad78: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x10ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x10ad7c: 0x3c080011  lui         $t0, 0x11
    ctx->pc = 0x10ad7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17 << 16));
    // 0x10ad80: 0x2463bf98  addiu       $v1, $v1, -0x4068
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950808));
    // 0x10ad84: 0x2508bfc0  addiu       $t0, $t0, -0x4040
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950848));
    // 0x10ad88: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x10ad88u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x10ad8c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x10ad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10ad90: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x10ad90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x10ad94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad98: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x10ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x10ad9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ada0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x10ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x10ada4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x10ada4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x10ada8: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x10ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x10adac: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x10adacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x10adb0: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x10adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x10adb4: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x10adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x10adb8: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x10adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x10adbc: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x10adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x10adc0: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x10adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x10adc4: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x10adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x10adc8: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x10adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x10adcc: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x10adccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x10add0: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x10add0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x10add4: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x10add4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x10add8: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x10add8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x10addc: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x10addcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x10ade0: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x10ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x10ade4: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x10ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x10ade8: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10adec: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x10adecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x10adf0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x10adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x10adf4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x10adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x10adf8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x10adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x10adfc: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x10adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x10ae00: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10ae04: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x10ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x10ae08: 0xc042fc4  jal         func_10BF10
    ctx->pc = 0x10AE08u;
    SET_GPR_U32(ctx, 31, 0x10AE10u);
    ctx->pc = 0x10AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE08u;
    // 0x10ae0c: 0xae480030  sw          $t0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x10AE08u, 0x10AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE10u;
label_10ae10:
    // 0x10ae10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae14: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x10ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x10ae18: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x10ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x10ae1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae20: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x10ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x10ae24: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x10ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x10ae28: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x10ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x10ae2c: 0xfe400090  sd          $zero, 0x90($s2)
    ctx->pc = 0x10ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 0));
    // 0x10ae30: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x10ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x10ae34: 0xfe4000a0  sd          $zero, 0xA0($s2)
    ctx->pc = 0x10ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x10ae38: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x10ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x10ae3c: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x10ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x10ae40: 0xae5000a8  sw          $s0, 0xA8($s2)
    ctx->pc = 0x10ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 16));
    // 0x10ae44: 0xae5000ac  sw          $s0, 0xAC($s2)
    ctx->pc = 0x10ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 16));
    // 0x10ae48: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x10ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x10ae4c: 0xae530868  sw          $s3, 0x868($s2)
    ctx->pc = 0x10ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2152), GPR_U32(ctx, 19));
    // 0x10ae50: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x10ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x10ae54: 0xc042b06  jal         func_10AC18
    ctx->pc = 0x10AE54u;
    SET_GPR_U32(ctx, 31, 0x10AE5Cu);
    ctx->pc = 0x10AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE54u;
    // 0x10ae58: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC18u, 0x10AE54u, 0x10AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE5Cu;
label_10ae5c:
    // 0x10ae5c: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x10AE5Cu;
    SET_GPR_U32(ctx, 31, 0x10AE64u);
    ctx->pc = 0x10AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE5Cu;
    // 0x10ae60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA28u, 0x10AE5Cu, 0x10AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE64u;
label_10ae64:
    // 0x10ae64: 0xc042f2e  jal         func_10BCB8
    ctx->pc = 0x10AE64u;
    SET_GPR_U32(ctx, 31, 0x10AE6Cu);
    ctx->pc = 0x10AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE64u;
    // 0x10ae68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCB8u, 0x10AE64u, 0x10AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE6Cu;
label_10ae6c:
    // 0x10ae6c: 0x264301f8  addiu       $v1, $s2, 0x1F8
    ctx->pc = 0x10ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x10ae70: 0x26420260  addiu       $v0, $s2, 0x260
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x10ae74: 0x264502c8  addiu       $a1, $s2, 0x2C8
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x10ae78: 0x26460330  addiu       $a2, $s2, 0x330
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x10ae7c: 0x26470398  addiu       $a3, $s2, 0x398
    ctx->pc = 0x10ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x10ae80: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x10ae80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x10ae84: 0x26490468  addiu       $t1, $s2, 0x468
    ctx->pc = 0x10ae84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x10ae88: 0x264a04d0  addiu       $t2, $s2, 0x4D0
    ctx->pc = 0x10ae88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x10ae8c: 0x264b0538  addiu       $t3, $s2, 0x538
    ctx->pc = 0x10ae8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x10ae90: 0xae4301c8  sw          $v1, 0x1C8($s2)
    ctx->pc = 0x10ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 3));
    // 0x10ae94: 0xae4201cc  sw          $v0, 0x1CC($s2)
    ctx->pc = 0x10ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
    // 0x10ae98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae9c: 0xae4501d4  sw          $a1, 0x1D4($s2)
    ctx->pc = 0x10ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 5));
    // 0x10aea0: 0xae4601d8  sw          $a2, 0x1D8($s2)
    ctx->pc = 0x10aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 6));
    // 0x10aea4: 0xae4701dc  sw          $a3, 0x1DC($s2)
    ctx->pc = 0x10aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 7));
    // 0x10aea8: 0xae4801e4  sw          $t0, 0x1E4($s2)
    ctx->pc = 0x10aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 8));
    // 0x10aeac: 0xae4901e8  sw          $t1, 0x1E8($s2)
    ctx->pc = 0x10aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 9));
    // 0x10aeb0: 0xae4a01ec  sw          $t2, 0x1EC($s2)
    ctx->pc = 0x10aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 10));
    // 0x10aeb4: 0xc042fbc  jal         func_10BEF0
    ctx->pc = 0x10AEB4u;
    SET_GPR_U32(ctx, 31, 0x10AEBCu);
    ctx->pc = 0x10AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEB4u;
    // 0x10aeb8: 0xae4b01f4  sw          $t3, 0x1F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BEF0u, 0x10AEB4u, 0x10AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEBCu;
label_10aebc:
    // 0x10aebc: 0xae500860  sw          $s0, 0x860($s2)
    ctx->pc = 0x10aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2144), GPR_U32(ctx, 16));
    // 0x10aec0: 0x3246003c  andi        $a2, $s2, 0x3C
    ctx->pc = 0x10aec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)60);
    // 0x10aec4: 0xae40085c  sw          $zero, 0x85C($s2)
    ctx->pc = 0x10aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2140), GPR_U32(ctx, 0));
    // 0x10aec8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AEC8u;
    {
        const bool branch_taken_0x10aec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEC8u;
        // 0x10aecc: 0xae400864  sw          $zero, 0x864($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aec8) {
            ctx->pc = 0x10AEE0u;
            goto label_10aee0;
        }
    }
    ctx->pc = 0x10AED0u;
    // 0x10aed0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10aed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10AED8u;
    {
        const bool branch_taken_0x10aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AED8u;
        // 0x10aedc: 0x24a52188  addiu       $a1, $a1, 0x2188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aed8) {
            ctx->pc = 0x10AEF0u;
            goto label_10aef0;
        }
    }
    ctx->pc = 0x10AEE0u;
label_10aee0:
    // 0x10aee0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AEE0u;
    {
        const bool branch_taken_0x10aee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEE0u;
        // 0x10aee4: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aee0) {
            ctx->pc = 0x10AF00u;
            goto label_10af00;
        }
    }
    ctx->pc = 0x10AEE8u;
    // 0x10aee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aeec: 0x24a521b0  addiu       $a1, $a1, 0x21B0
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
label_10aef0:
    // 0x10aef0: 0xc04354c  jal         func_10D530
    ctx->pc = 0x10AEF0u;
    SET_GPR_U32(ctx, 31, 0x10AEF8u);
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x10AEF0u, 0x10AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEF8u;
label_10aef8:
    // 0x10aef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AEF8u;
    {
        const bool branch_taken_0x10aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEF8u;
        // 0x10aefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aef8) {
            ctx->pc = 0x10AF04u;
            goto label_10af04;
        }
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af04:
    // 0x10af04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10af08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10af08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10af0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10af0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10af10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af18: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF18u;
        // 0x10af1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF20u;
}
