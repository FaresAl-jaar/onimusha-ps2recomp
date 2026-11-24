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

// Function: sub_003680D0
// Address: 0x3680d0 - 0x368298
void sub_003680D0_0x3680d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003680D0_0x3680d0");
#endif

    switch (ctx->pc) {
        case 0x36813cu: goto label_36813c;
        case 0x368148u: goto label_368148;
        case 0x368150u: goto label_368150;
        case 0x368160u: goto label_368160;
        case 0x368180u: goto label_368180;
        case 0x368190u: goto label_368190;
        case 0x368248u: goto label_368248;
        default: break;
    }

    ctx->pc = 0x3680d0u;

    // 0x3680d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3680d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3680d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3680d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3680d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3680d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3680dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3680dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3680e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3680e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3680e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3680e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3680e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3680ec: 0x269300a8  addiu       $s3, $s4, 0xA8
    ctx->pc = 0x3680ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x3680f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3680f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3680f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3680f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3680f8: 0xa08500a8  sb          $a1, 0xA8($a0)
    ctx->pc = 0x3680f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 168), (uint8_t)GPR_U32(ctx, 5));
    // 0x3680fc: 0xa48200aa  sh          $v0, 0xAA($a0)
    ctx->pc = 0x3680fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x368100: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x368100u;
    {
        const bool branch_taken_0x368100 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x368104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368100u;
        // 0x368104: 0xa08000ac  sb          $zero, 0xAC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368100) {
            ctx->pc = 0x368110u;
            goto label_368110;
        }
    }
    ctx->pc = 0x368108u;
    // 0x368108: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x368108u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36810c: 0x0  nop
    ctx->pc = 0x36810cu;
    // NOP
label_368110:
    // 0x368110: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x368110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x368114: 0x2442aad8  addiu       $v0, $v0, -0x5528
    ctx->pc = 0x368114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945496));
    // 0x368118: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x368118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x36811c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x36811cu;
    { uint32_t bits = FAST_READ32(0x65AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368124: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x368124u;
    { uint32_t bits = FAST_READ32(0x65AADCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368128: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x368128u;
    { uint32_t bits = FAST_READ32(0x65AAE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36812c: 0xe682009c  swc1        $f2, 0x9C($s4)
    ctx->pc = 0x36812cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    // 0x368130: 0xe68100a0  swc1        $f1, 0xA0($s4)
    ctx->pc = 0x368130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
    // 0x368134: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x368134u;
    SET_GPR_U32(ctx, 31, 0x36813Cu);
    ctx->pc = 0x368138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368134u;
    // 0x368138: 0xe68000a4  swc1        $f0, 0xA4($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x368134u, 0x36813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36813Cu;
label_36813c:
    // 0x36813c: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x36813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x368140: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x368140u;
    SET_GPR_U32(ctx, 31, 0x368148u);
    ctx->pc = 0x368144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368140u;
    // 0x368144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x368140u, 0x368148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368148u;
label_368148:
    // 0x368148: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x368148u;
    SET_GPR_U32(ctx, 31, 0x368150u);
    ctx->pc = 0x36814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368148u;
    // 0x36814c: 0x26840058  addiu       $a0, $s4, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x368148u, 0x368150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368150u;
label_368150:
    // 0x368150: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x368150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x368154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368158: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x368158u;
    SET_GPR_U32(ctx, 31, 0x368160u);
    ctx->pc = 0x36815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368158u;
    // 0x36815c: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x368158u, 0x368160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368160u;
label_368160:
    // 0x368160: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x368160u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x368164: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x368164u;
    {
        const bool branch_taken_0x368164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x368164) {
            ctx->pc = 0x3681F0u;
            goto label_3681f0;
        }
    }
    ctx->pc = 0x36816Cu;
    // 0x36816c: 0x928301c2  lbu         $v1, 0x1C2($s4)
    ctx->pc = 0x36816cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 450)));
    // 0x368170: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x368170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x368174: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x368174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x368178: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x368178u;
    {
        const bool branch_taken_0x368178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368178u;
        // 0x36817c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368178) {
            ctx->pc = 0x3681C0u;
            goto label_3681c0;
        }
    }
    ctx->pc = 0x368180u;
label_368180:
    // 0x368180: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x368180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x368184: 0x904401bd  lbu         $a0, 0x1BD($v0)
    ctx->pc = 0x368184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x368188: 0xc0d8fc4  jal         func_363F10
    ctx->pc = 0x368188u;
    SET_GPR_U32(ctx, 31, 0x368190u);
    ctx->pc = 0x36818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368188u;
    // 0x36818c: 0x245001bd  addiu       $s0, $v0, 0x1BD (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F10u, 0x368188u, 0x368190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368190u;
label_368190:
    // 0x368190: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x368190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x368194: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x368194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x368198: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x368198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x36819c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36819cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3681a0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3681a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3681a4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3681a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3681a8: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x3681a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3681ac: 0x928301c2  lbu         $v1, 0x1C2($s4)
    ctx->pc = 0x3681acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 450)));
    // 0x3681b0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3681b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3681b4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3681B4u;
    {
        const bool branch_taken_0x3681b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3681B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681B4u;
        // 0x3681b8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681b4) {
            ctx->pc = 0x368180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368180;
        }
    }
    ctx->pc = 0x3681BCu;
    // 0x3681bc: 0x0  nop
    ctx->pc = 0x3681bcu;
    // NOP
label_3681c0:
    // 0x3681c0: 0x3c030104  lui         $v1, 0x104
    ctx->pc = 0x3681c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)260 << 16));
    // 0x3681c4: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x3681c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3681c8: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x3681c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x3681cc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3681ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x3681d0: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x3681d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x3681d4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3681d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3681d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3681d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3681dc: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x3681dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3681e0: 0x928301c2  lbu         $v1, 0x1C2($s4)
    ctx->pc = 0x3681e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 450)));
    // 0x3681e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3681e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3681e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3681E8u;
    {
        const bool branch_taken_0x3681e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3681ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681E8u;
        // 0x3681ec: 0xae630068  sw          $v1, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681e8) {
            ctx->pc = 0x368278u;
            goto label_368278;
        }
    }
    ctx->pc = 0x3681F0u;
label_3681f0:
    // 0x3681f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3681f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3681f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3681f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3681f8: 0x26680008  addiu       $t0, $s3, 0x8
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3681fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3681fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x368200: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x368200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368204: 0x2463aa74  addiu       $v1, $v1, -0x558C
    ctx->pc = 0x368204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945396));
    // 0x368208: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x368208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x36820c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x368210: 0x2484aa70  addiu       $a0, $a0, -0x5590
    ctx->pc = 0x368210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
    // 0x368214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x368214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368218: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x368218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x36821c: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x36821cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x368220: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x368220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x368224: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x368224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x368228: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x368228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36822c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36822cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x368230: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x368234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x368238: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x368238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36823c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x36823Cu;
    {
        const bool branch_taken_0x36823c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x368240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36823Cu;
        // 0x368240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36823c) {
            ctx->pc = 0x368278u;
            goto label_368278;
        }
    }
    ctx->pc = 0x368244u;
    // 0x368244: 0x0  nop
    ctx->pc = 0x368244u;
    // NOP
label_368248:
    // 0x368248: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x368248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36824c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x36824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x368250: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x368250u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x368254: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x368254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x368258: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x368258u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x36825c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x36825cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x368260: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x368260u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x368264: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x368264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x368268: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x368268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x36826c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x36826cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x368270: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x368270u;
    {
        const bool branch_taken_0x368270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368270u;
        // 0x368274: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368270) {
            ctx->pc = 0x368248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368248;
        }
    }
    ctx->pc = 0x368278u;
label_368278:
    // 0x368278: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x368278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36827c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36827cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x368280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36828c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368290: 0x3e00008  jr          $ra
    ctx->pc = 0x368290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368290u;
        // 0x368294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368298u;
}
