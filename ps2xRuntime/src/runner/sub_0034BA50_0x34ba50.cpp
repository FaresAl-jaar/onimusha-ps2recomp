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

// Function: sub_0034BA50
// Address: 0x34ba50 - 0x34bb48
void sub_0034BA50_0x34ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BA50_0x34ba50");
#endif

    switch (ctx->pc) {
        case 0x34ba50u: goto label_34ba50;
        case 0x34ba54u: goto label_34ba54;
        case 0x34ba58u: goto label_34ba58;
        case 0x34ba5cu: goto label_34ba5c;
        case 0x34ba60u: goto label_34ba60;
        case 0x34ba64u: goto label_34ba64;
        case 0x34ba68u: goto label_34ba68;
        case 0x34ba6cu: goto label_34ba6c;
        case 0x34ba70u: goto label_34ba70;
        case 0x34ba74u: goto label_34ba74;
        case 0x34ba78u: goto label_34ba78;
        case 0x34ba7cu: goto label_34ba7c;
        case 0x34ba80u: goto label_34ba80;
        case 0x34ba84u: goto label_34ba84;
        case 0x34ba88u: goto label_34ba88;
        case 0x34ba8cu: goto label_34ba8c;
        case 0x34ba90u: goto label_34ba90;
        case 0x34ba94u: goto label_34ba94;
        case 0x34ba98u: goto label_34ba98;
        case 0x34ba9cu: goto label_34ba9c;
        case 0x34baa0u: goto label_34baa0;
        case 0x34baa4u: goto label_34baa4;
        case 0x34baa8u: goto label_34baa8;
        case 0x34baacu: goto label_34baac;
        case 0x34bab0u: goto label_34bab0;
        case 0x34bab4u: goto label_34bab4;
        case 0x34bab8u: goto label_34bab8;
        case 0x34babcu: goto label_34babc;
        case 0x34bac0u: goto label_34bac0;
        case 0x34bac4u: goto label_34bac4;
        case 0x34bac8u: goto label_34bac8;
        case 0x34baccu: goto label_34bacc;
        case 0x34bad0u: goto label_34bad0;
        case 0x34bad4u: goto label_34bad4;
        case 0x34bad8u: goto label_34bad8;
        case 0x34badcu: goto label_34badc;
        case 0x34bae0u: goto label_34bae0;
        case 0x34bae4u: goto label_34bae4;
        case 0x34bae8u: goto label_34bae8;
        case 0x34baecu: goto label_34baec;
        case 0x34baf0u: goto label_34baf0;
        case 0x34baf4u: goto label_34baf4;
        case 0x34baf8u: goto label_34baf8;
        case 0x34bafcu: goto label_34bafc;
        case 0x34bb00u: goto label_34bb00;
        case 0x34bb04u: goto label_34bb04;
        case 0x34bb08u: goto label_34bb08;
        case 0x34bb0cu: goto label_34bb0c;
        case 0x34bb10u: goto label_34bb10;
        case 0x34bb14u: goto label_34bb14;
        case 0x34bb18u: goto label_34bb18;
        case 0x34bb1cu: goto label_34bb1c;
        case 0x34bb20u: goto label_34bb20;
        case 0x34bb24u: goto label_34bb24;
        case 0x34bb28u: goto label_34bb28;
        case 0x34bb2cu: goto label_34bb2c;
        case 0x34bb30u: goto label_34bb30;
        case 0x34bb34u: goto label_34bb34;
        case 0x34bb38u: goto label_34bb38;
        case 0x34bb3cu: goto label_34bb3c;
        case 0x34bb40u: goto label_34bb40;
        case 0x34bb44u: goto label_34bb44;
        default: break;
    }

    ctx->pc = 0x34ba50u;

label_34ba50:
    // 0x34ba50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34ba54:
    // 0x34ba54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ba58:
    // 0x34ba58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34ba5c:
    // 0x34ba5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34ba60:
    // 0x34ba60: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x34ba60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_34ba64:
    // 0x34ba64: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_34ba68:
    if (ctx->pc == 0x34BA68u) {
        ctx->pc = 0x34BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA64u;
        // 0x34ba68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BA6Cu;
        goto label_34ba6c;
    }
    ctx->pc = 0x34BA64u;
    {
        const bool branch_taken_0x34ba64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA64u;
        // 0x34ba68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba64) {
            ctx->pc = 0x34BAD0u;
            goto label_34bad0;
        }
    }
    ctx->pc = 0x34BA6Cu;
label_34ba6c:
    // 0x34ba6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_34ba70:
    if (ctx->pc == 0x34BA70u) {
        ctx->pc = 0x34BA74u;
        goto label_34ba74;
    }
    ctx->pc = 0x34BA6Cu;
    {
        const bool branch_taken_0x34ba6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba6c) {
            ctx->pc = 0x34BA80u;
            goto label_34ba80;
        }
    }
    ctx->pc = 0x34BA74u;
label_34ba74:
    // 0x34ba74: 0x10000030  b           . + 4 + (0x30 << 2)
label_34ba78:
    if (ctx->pc == 0x34BA78u) {
        ctx->pc = 0x34BA7Cu;
        goto label_34ba7c;
    }
    ctx->pc = 0x34BA74u;
    {
        const bool branch_taken_0x34ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba74) {
            ctx->pc = 0x34BB38u;
            goto label_34bb38;
        }
    }
    ctx->pc = 0x34BA7Cu;
label_34ba7c:
    // 0x34ba7c: 0x0  nop
    ctx->pc = 0x34ba7cu;
    // NOP
label_34ba80:
    // 0x34ba80: 0xc0d2ed8  jal         func_34BB60
label_34ba84:
    if (ctx->pc == 0x34BA84u) {
        ctx->pc = 0x34BA88u;
        goto label_34ba88;
    }
    ctx->pc = 0x34BA80u;
    SET_GPR_U32(ctx, 31, 0x34BA88u);
    ctx->pc = 0x34BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB60u, 0x34BA80u, 0x34BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA88u;
label_34ba88:
    // 0x34ba88: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x34ba88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34ba8c:
    // 0x34ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ba90:
    // 0x34ba90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34ba90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34ba94:
    // 0x34ba94: 0x320f809  jalr        $t9
label_34ba98:
    if (ctx->pc == 0x34BA98u) {
        ctx->pc = 0x34BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA94u;
        // 0x34ba98: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BA9Cu;
        goto label_34ba9c;
    }
    ctx->pc = 0x34BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34BA9Cu);
        ctx->pc = 0x34BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA94u;
        // 0x34ba98: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BA94u, 0x34BA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BA9Cu;
label_34ba9c:
    // 0x34ba9c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_34baa0:
    // 0x34baa0: 0x24637a88  addiu       $v1, $v1, 0x7A88
    ctx->pc = 0x34baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31368));
label_34baa4:
    // 0x34baa4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x34baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34baa8:
    // 0x34baa8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x34baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34baac:
    // 0x34baac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34bab0:
    // 0x34bab0: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x34bab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_34bab4:
    // 0x34bab4: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x34bab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_34bab8:
    // 0x34bab8: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x34bab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_34babc:
    // 0x34babc: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34babcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34bac0:
    // 0x34bac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34bac4:
    // 0x34bac4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_34bac8:
    if (ctx->pc == 0x34BAC8u) {
        ctx->pc = 0x34BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAC4u;
        // 0x34bac8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BACCu;
        goto label_34bacc;
    }
    ctx->pc = 0x34BAC4u;
    {
        const bool branch_taken_0x34bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAC4u;
        // 0x34bac8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bac4) {
            ctx->pc = 0x34BB38u;
            goto label_34bb38;
        }
    }
    ctx->pc = 0x34BACCu;
label_34bacc:
    // 0x34bacc: 0x0  nop
    ctx->pc = 0x34baccu;
    // NOP
label_34bad0:
    // 0x34bad0: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x34bad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_34bad4:
    // 0x34bad4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_34bad8:
    if (ctx->pc == 0x34BAD8u) {
        ctx->pc = 0x34BADCu;
        goto label_34badc;
    }
    ctx->pc = 0x34BAD4u;
    {
        const bool branch_taken_0x34bad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bad4) {
            ctx->pc = 0x34BB00u;
            goto label_34bb00;
        }
    }
    ctx->pc = 0x34BADCu;
label_34badc:
    // 0x34badc: 0xc0d2ed8  jal         func_34BB60
label_34bae0:
    if (ctx->pc == 0x34BAE0u) {
        ctx->pc = 0x34BAE4u;
        goto label_34bae4;
    }
    ctx->pc = 0x34BADCu;
    SET_GPR_U32(ctx, 31, 0x34BAE4u);
    ctx->pc = 0x34BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB60u, 0x34BADCu, 0x34BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BAE4u;
label_34bae4:
    // 0x34bae4: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x34bae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34bae8:
    // 0x34bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34baec:
    // 0x34baec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x34baecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_34baf0:
    // 0x34baf0: 0x320f809  jalr        $t9
label_34baf4:
    if (ctx->pc == 0x34BAF4u) {
        ctx->pc = 0x34BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAF0u;
        // 0x34baf4: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BAF8u;
        goto label_34baf8;
    }
    ctx->pc = 0x34BAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34BAF8u);
        ctx->pc = 0x34BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAF0u;
        // 0x34baf4: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BAF0u, 0x34BAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BAF8u;
label_34baf8:
    // 0x34baf8: 0x1000000f  b           . + 4 + (0xF << 2)
label_34bafc:
    if (ctx->pc == 0x34BAFCu) {
        ctx->pc = 0x34BB00u;
        goto label_34bb00;
    }
    ctx->pc = 0x34BAF8u;
    {
        const bool branch_taken_0x34baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34baf8) {
            ctx->pc = 0x34BB38u;
            goto label_34bb38;
        }
    }
    ctx->pc = 0x34BB00u;
label_34bb00:
    // 0x34bb00: 0xc0d2ed4  jal         func_34BB50
label_34bb04:
    if (ctx->pc == 0x34BB04u) {
        ctx->pc = 0x34BB08u;
        goto label_34bb08;
    }
    ctx->pc = 0x34BB00u;
    SET_GPR_U32(ctx, 31, 0x34BB08u);
    ctx->pc = 0x34BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB50u, 0x34BB00u, 0x34BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB08u;
label_34bb08:
    // 0x34bb08: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_34bb0c:
    // 0x34bb0c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x34bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
label_34bb10:
    // 0x34bb10: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x34bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34bb14:
    // 0x34bb14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x34bb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34bb18:
    // 0x34bb18: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34bb1c:
    // 0x34bb1c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x34bb1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_34bb20:
    // 0x34bb20: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x34bb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_34bb24:
    // 0x34bb24: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x34bb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_34bb28:
    // 0x34bb28: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34bb28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34bb2c:
    // 0x34bb2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34bb30:
    // 0x34bb30: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x34bb30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_34bb34:
    // 0x34bb34: 0x0  nop
    ctx->pc = 0x34bb34u;
    // NOP
label_34bb38:
    // 0x34bb38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34bb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34bb3c:
    // 0x34bb3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34bb40:
    // 0x34bb40: 0x3e00008  jr          $ra
label_34bb44:
    if (ctx->pc == 0x34BB44u) {
        ctx->pc = 0x34BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB40u;
        // 0x34bb44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BB48u;
        goto label_fallthrough_0x34bb40;
    }
    ctx->pc = 0x34BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB40u;
        // 0x34bb44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34bb40:
    ctx->pc = 0x34BB48u;
}
