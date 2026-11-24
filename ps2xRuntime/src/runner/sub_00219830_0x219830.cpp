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

// Function: sub_00219830
// Address: 0x219830 - 0x219a38
void sub_00219830_0x219830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219830_0x219830");
#endif

    switch (ctx->pc) {
        case 0x21985cu: goto label_21985c;
        default: break;
    }

    ctx->pc = 0x219830u;

    // 0x219830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21983c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219840: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219844: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219848: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21984c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219850: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219854: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 31, 0x21985Cu);
    ctx->pc = 0x219858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219854u;
    // 0x219858: 0x8e111fc0  lw          $s1, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x219854u, 0x21985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21985Cu;
label_21985c:
    // 0x21985c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219860: 0x2669005c  addiu       $t1, $s3, 0x5C
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x219864: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x219864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x219868: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x219868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21986c: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x219870: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x219874: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x219874u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x219878: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x219878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x21987c: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x219880: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x219880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x219884: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x219884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x219888: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x219888u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x21988c: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x21988cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x219890: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x219894: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x219894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x219898: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x219898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x21989c: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x21989cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x2198a0: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2198a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2198a4: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x2198a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x2198a8: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x2198a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x2198ac: 0xad040020  sw          $a0, 0x20($t0)
    ctx->pc = 0x2198acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
    // 0x2198b0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2198b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2198b4: 0xad050038  sw          $a1, 0x38($t0)
    ctx->pc = 0x2198b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 5));
    // 0x2198b8: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x2198b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x2198bc: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x2198bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x2198c0: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2198c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2198c4: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x2198c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x2198c8: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2198cc: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x2198ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x2198d0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2198d4: 0xad020028  sw          $v0, 0x28($t0)
    ctx->pc = 0x2198d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 2));
    // 0x2198d8: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x2198d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2198dc: 0xad03002c  sw          $v1, 0x2C($t0)
    ctx->pc = 0x2198dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 3));
    // 0x2198e0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2198e4: 0xad020030  sw          $v0, 0x30($t0)
    ctx->pc = 0x2198e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
    // 0x2198e8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2198ec: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x2198ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x2198f0: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x2198f4: 0xad07003c  sw          $a3, 0x3C($t0)
    ctx->pc = 0x2198f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 7));
    // 0x2198f8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2198F8u;
    {
        const bool branch_taken_0x2198f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2198FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198F8u;
        // 0x2198fc: 0xad020040  sw          $v0, 0x40($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198f8) {
            ctx->pc = 0x219910u;
            goto label_219910;
        }
    }
    ctx->pc = 0x219900u;
    // 0x219900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219904u;
    {
        const bool branch_taken_0x219904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219904u;
        // 0x219908: 0xad020048  sw          $v0, 0x48($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219904) {
            ctx->pc = 0x219914u;
            goto label_219914;
        }
    }
    ctx->pc = 0x21990Cu;
    // 0x21990c: 0x0  nop
    ctx->pc = 0x21990cu;
    // NOP
label_219910:
    // 0x219910: 0xad0a0048  sw          $t2, 0x48($t0)
    ctx->pc = 0x219910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 10));
label_219914:
    // 0x219914: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x219914u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x219918: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21991c: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x21991cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x219920: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219924: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x219928: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x219928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x21992c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219930: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x219930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x219934: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x219934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x219938: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21993c: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x219940: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x219940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x219944: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219948: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x21994c: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x21994cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x219950: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219954: 0x95220050  lhu         $v0, 0x50($t1)
    ctx->pc = 0x219954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x219958: 0xa4820068  sh          $v0, 0x68($a0)
    ctx->pc = 0x219958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x21995c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219960: 0x95220052  lhu         $v0, 0x52($t1)
    ctx->pc = 0x219960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 82)));
    // 0x219964: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x219964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x219968: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21996c: 0x91220055  lbu         $v0, 0x55($t1)
    ctx->pc = 0x21996cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 85)));
    // 0x219970: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x219970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x219974: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x219974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219978: 0x91220056  lbu         $v0, 0x56($t1)
    ctx->pc = 0x219978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x21997c: 0xa062006d  sb          $v0, 0x6D($v1)
    ctx->pc = 0x21997cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x219980: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219984: 0x91220057  lbu         $v0, 0x57($t1)
    ctx->pc = 0x219984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 87)));
    // 0x219988: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x219988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x21998c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219990: 0x91220059  lbu         $v0, 0x59($t1)
    ctx->pc = 0x219990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 89)));
    // 0x219994: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x219994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x219998: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21999c: 0x9122005a  lbu         $v0, 0x5A($t1)
    ctx->pc = 0x21999cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x2199a0: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x2199a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2199a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199a8: 0x9122005b  lbu         $v0, 0x5B($t1)
    ctx->pc = 0x2199a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x2199ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2199acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2199b0: 0xa0620071  sb          $v0, 0x71($v1)
    ctx->pc = 0x2199b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2199b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2199b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2199b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199bc: 0x9122005c  lbu         $v0, 0x5C($t1)
    ctx->pc = 0x2199bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x2199c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2199c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2199c4: 0xa0820072  sb          $v0, 0x72($a0)
    ctx->pc = 0x2199c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2199c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2199cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199d0: 0x9122005d  lbu         $v0, 0x5D($t1)
    ctx->pc = 0x2199d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x2199d4: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x2199d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199dc: 0x9122005e  lbu         $v0, 0x5E($t1)
    ctx->pc = 0x2199dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x2199e0: 0xa0820074  sb          $v0, 0x74($a0)
    ctx->pc = 0x2199e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2199e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199e8: 0x9122005f  lbu         $v0, 0x5F($t1)
    ctx->pc = 0x2199e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x2199ec: 0xa0620075  sb          $v0, 0x75($v1)
    ctx->pc = 0x2199ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2199f4: 0x91220060  lbu         $v0, 0x60($t1)
    ctx->pc = 0x2199f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x2199f8: 0xa0820076  sb          $v0, 0x76($a0)
    ctx->pc = 0x2199f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219a00: 0x91220061  lbu         $v0, 0x61($t1)
    ctx->pc = 0x219a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 97)));
    // 0x219a04: 0xa0620077  sb          $v0, 0x77($v1)
    ctx->pc = 0x219a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 119), (uint8_t)GPR_U32(ctx, 2));
    // 0x219a08: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219a0c: 0x91220062  lbu         $v0, 0x62($t1)
    ctx->pc = 0x219a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 98)));
    // 0x219a10: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x219a10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x219a14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x219a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219a18: 0x91220063  lbu         $v0, 0x63($t1)
    ctx->pc = 0x219a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
    // 0x219a1c: 0xa0620079  sb          $v0, 0x79($v1)
    ctx->pc = 0x219a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x219a20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x219a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219a24: 0x91220064  lbu         $v0, 0x64($t1)
    ctx->pc = 0x219a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x219a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a2c: 0xa082007a  sb          $v0, 0x7A($a0)
    ctx->pc = 0x219a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x219a30: 0x3e00008  jr          $ra
    ctx->pc = 0x219A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A30u;
        // 0x219a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A38u;
}
