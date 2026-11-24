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

// Function: sub_002E7450
// Address: 0x2e7450 - 0x2e7548
void sub_002E7450_0x2e7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7450_0x2e7450");
#endif

    switch (ctx->pc) {
        case 0x2e7450u: goto label_2e7450;
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7464u: goto label_2e7464;
        case 0x2e7468u: goto label_2e7468;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e7474u: goto label_2e7474;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e747cu: goto label_2e747c;
        case 0x2e7480u: goto label_2e7480;
        case 0x2e7484u: goto label_2e7484;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e748cu: goto label_2e748c;
        case 0x2e7490u: goto label_2e7490;
        case 0x2e7494u: goto label_2e7494;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e749cu: goto label_2e749c;
        case 0x2e74a0u: goto label_2e74a0;
        case 0x2e74a4u: goto label_2e74a4;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e74acu: goto label_2e74ac;
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74b4u: goto label_2e74b4;
        case 0x2e74b8u: goto label_2e74b8;
        case 0x2e74bcu: goto label_2e74bc;
        case 0x2e74c0u: goto label_2e74c0;
        case 0x2e74c4u: goto label_2e74c4;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74ccu: goto label_2e74cc;
        case 0x2e74d0u: goto label_2e74d0;
        case 0x2e74d4u: goto label_2e74d4;
        case 0x2e74d8u: goto label_2e74d8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74e0u: goto label_2e74e0;
        case 0x2e74e4u: goto label_2e74e4;
        case 0x2e74e8u: goto label_2e74e8;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f0u: goto label_2e74f0;
        case 0x2e74f4u: goto label_2e74f4;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e74fcu: goto label_2e74fc;
        case 0x2e7500u: goto label_2e7500;
        case 0x2e7504u: goto label_2e7504;
        case 0x2e7508u: goto label_2e7508;
        case 0x2e750cu: goto label_2e750c;
        case 0x2e7510u: goto label_2e7510;
        case 0x2e7514u: goto label_2e7514;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e751cu: goto label_2e751c;
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e7528u: goto label_2e7528;
        case 0x2e752cu: goto label_2e752c;
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        default: break;
    }

    ctx->pc = 0x2e7450u;

label_2e7450:
    // 0x2e7450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e7454:
    // 0x2e7454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7458:
    // 0x2e7458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e745c:
    // 0x2e745c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e7460:
    // 0x2e7460: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x2e7460u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2e7464:
    // 0x2e7464: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_2e7468:
    if (ctx->pc == 0x2E7468u) {
        ctx->pc = 0x2E7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7464u;
        // 0x2e7468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E746Cu;
        goto label_2e746c;
    }
    ctx->pc = 0x2E7464u;
    {
        const bool branch_taken_0x2e7464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7464u;
        // 0x2e7468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7464) {
            ctx->pc = 0x2E74D0u;
            goto label_2e74d0;
        }
    }
    ctx->pc = 0x2E746Cu;
label_2e746c:
    // 0x2e746c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2e7470:
    if (ctx->pc == 0x2E7470u) {
        ctx->pc = 0x2E7474u;
        goto label_2e7474;
    }
    ctx->pc = 0x2E746Cu;
    {
        const bool branch_taken_0x2e746c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e746c) {
            ctx->pc = 0x2E7480u;
            goto label_2e7480;
        }
    }
    ctx->pc = 0x2E7474u;
label_2e7474:
    // 0x2e7474: 0x10000030  b           . + 4 + (0x30 << 2)
label_2e7478:
    if (ctx->pc == 0x2E7478u) {
        ctx->pc = 0x2E747Cu;
        goto label_2e747c;
    }
    ctx->pc = 0x2E7474u;
    {
        const bool branch_taken_0x2e7474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7474) {
            ctx->pc = 0x2E7538u;
            goto label_2e7538;
        }
    }
    ctx->pc = 0x2E747Cu;
label_2e747c:
    // 0x2e747c: 0x0  nop
    ctx->pc = 0x2e747cu;
    // NOP
label_2e7480:
    // 0x2e7480: 0xc0b9d58  jal         func_2E7560
label_2e7484:
    if (ctx->pc == 0x2E7484u) {
        ctx->pc = 0x2E7488u;
        goto label_2e7488;
    }
    ctx->pc = 0x2E7480u;
    SET_GPR_U32(ctx, 31, 0x2E7488u);
    ctx->pc = 0x2E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7560u, 0x2E7480u, 0x2E7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7488u;
label_2e7488:
    // 0x2e7488: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2e7488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2e748c:
    // 0x2e748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7490:
    // 0x2e7490: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2e7490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2e7494:
    // 0x2e7494: 0x320f809  jalr        $t9
label_2e7498:
    if (ctx->pc == 0x2E7498u) {
        ctx->pc = 0x2E7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7494u;
        // 0x2e7498: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E749Cu;
        goto label_2e749c;
    }
    ctx->pc = 0x2E7494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E749Cu);
        ctx->pc = 0x2E7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7494u;
        // 0x2e7498: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7494u, 0x2E749Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E749Cu;
label_2e749c:
    // 0x2e749c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2e749cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_2e74a0:
    // 0x2e74a0: 0x24636930  addiu       $v1, $v1, 0x6930
    ctx->pc = 0x2e74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26928));
label_2e74a4:
    // 0x2e74a4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e74a8:
    // 0x2e74a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e74ac:
    // 0x2e74ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e74b0:
    // 0x2e74b0: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2e74b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_2e74b4:
    // 0x2e74b4: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2e74b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_2e74b8:
    // 0x2e74b8: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2e74b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_2e74bc:
    // 0x2e74bc: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e74bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_2e74c0:
    // 0x2e74c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e74c4:
    // 0x2e74c4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2e74c8:
    if (ctx->pc == 0x2E74C8u) {
        ctx->pc = 0x2E74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74C4u;
        // 0x2e74c8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74CCu;
        goto label_2e74cc;
    }
    ctx->pc = 0x2E74C4u;
    {
        const bool branch_taken_0x2e74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74C4u;
        // 0x2e74c8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74c4) {
            ctx->pc = 0x2E7538u;
            goto label_2e7538;
        }
    }
    ctx->pc = 0x2E74CCu;
label_2e74cc:
    // 0x2e74cc: 0x0  nop
    ctx->pc = 0x2e74ccu;
    // NOP
label_2e74d0:
    // 0x2e74d0: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x2e74d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2e74d4:
    // 0x2e74d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2e74d8:
    if (ctx->pc == 0x2E74D8u) {
        ctx->pc = 0x2E74DCu;
        goto label_2e74dc;
    }
    ctx->pc = 0x2E74D4u;
    {
        const bool branch_taken_0x2e74d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e74d4) {
            ctx->pc = 0x2E7500u;
            goto label_2e7500;
        }
    }
    ctx->pc = 0x2E74DCu;
label_2e74dc:
    // 0x2e74dc: 0xc0b9d58  jal         func_2E7560
label_2e74e0:
    if (ctx->pc == 0x2E74E0u) {
        ctx->pc = 0x2E74E4u;
        goto label_2e74e4;
    }
    ctx->pc = 0x2E74DCu;
    SET_GPR_U32(ctx, 31, 0x2E74E4u);
    ctx->pc = 0x2E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7560u, 0x2E74DCu, 0x2E74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74E4u;
label_2e74e4:
    // 0x2e74e4: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2e74e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2e74e8:
    // 0x2e74e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e74e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e74ec:
    // 0x2e74ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2e74ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2e74f0:
    // 0x2e74f0: 0x320f809  jalr        $t9
label_2e74f4:
    if (ctx->pc == 0x2E74F4u) {
        ctx->pc = 0x2E74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74F0u;
        // 0x2e74f4: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74F8u;
        goto label_2e74f8;
    }
    ctx->pc = 0x2E74F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E74F8u);
        ctx->pc = 0x2E74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74F0u;
        // 0x2e74f4: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E74F0u, 0x2E74F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E74F8u;
label_2e74f8:
    // 0x2e74f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e74fc:
    if (ctx->pc == 0x2E74FCu) {
        ctx->pc = 0x2E7500u;
        goto label_2e7500;
    }
    ctx->pc = 0x2E74F8u;
    {
        const bool branch_taken_0x2e74f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74f8) {
            ctx->pc = 0x2E7538u;
            goto label_2e7538;
        }
    }
    ctx->pc = 0x2E7500u;
label_2e7500:
    // 0x2e7500: 0xc0b9d54  jal         func_2E7550
label_2e7504:
    if (ctx->pc == 0x2E7504u) {
        ctx->pc = 0x2E7508u;
        goto label_2e7508;
    }
    ctx->pc = 0x2E7500u;
    SET_GPR_U32(ctx, 31, 0x2E7508u);
    ctx->pc = 0x2E7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7550u, 0x2E7500u, 0x2E7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7508u;
label_2e7508:
    // 0x2e7508: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2e7508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_2e750c:
    // 0x2e750c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x2e750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
label_2e7510:
    // 0x2e7510: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e7510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7514:
    // 0x2e7514: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7518:
    // 0x2e7518: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e751c:
    // 0x2e751c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2e751cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_2e7520:
    // 0x2e7520: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2e7520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_2e7524:
    // 0x2e7524: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2e7524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_2e7528:
    // 0x2e7528: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e7528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_2e752c:
    // 0x2e752c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e7530:
    // 0x2e7530: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e7530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2e7534:
    // 0x2e7534: 0x0  nop
    ctx->pc = 0x2e7534u;
    // NOP
label_2e7538:
    // 0x2e7538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e753c:
    // 0x2e753c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e753cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7540:
    // 0x2e7540: 0x3e00008  jr          $ra
label_2e7544:
    if (ctx->pc == 0x2E7544u) {
        ctx->pc = 0x2E7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7540u;
        // 0x2e7544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7548u;
        goto label_fallthrough_0x2e7540;
    }
    ctx->pc = 0x2E7540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7540u;
        // 0x2e7544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e7540:
    ctx->pc = 0x2E7548u;
}
