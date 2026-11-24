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

// Function: sub_001E8E50
// Address: 0x1e8e50 - 0x1e9350
void sub_001E8E50_0x1e8e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8E50_0x1e8e50");
#endif

    switch (ctx->pc) {
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9084u: goto label_1e9084;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9318u: goto label_1e9318;
        default: break;
    }

    ctx->pc = 0x1e8e50u;

    // 0x1e8e50: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1e8e54: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e8e58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e8e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e8e5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e8e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e8e60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e8e64: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1e8e64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e8e6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e8e70: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e8e70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e8e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e8e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e8e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8e88: 0xa7a800ae  sh          $t0, 0xAE($sp)
    ctx->pc = 0x1e8e88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e8e8c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8e90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8E90u;
    {
        const bool branch_taken_0x1e8e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E90u;
        // 0x1e8e94: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e90) {
            ctx->pc = 0x1E8EA0u;
            goto label_1e8ea0;
        }
    }
    ctx->pc = 0x1E8E98u;
    // 0x1e8e98: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1E8E98u;
    {
        const bool branch_taken_0x1e8e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E98u;
        // 0x1e8e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e98) {
            ctx->pc = 0x1E9320u;
            goto label_1e9320;
        }
    }
    ctx->pc = 0x1E8EA0u;
label_1e8ea0:
    // 0x1e8ea0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8EA0u;
    {
        const bool branch_taken_0x1e8ea0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA0u;
        // 0x1e8ea4: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ea0) {
            ctx->pc = 0x1E8EB0u;
            goto label_1e8eb0;
        }
    }
    ctx->pc = 0x1E8EA8u;
    // 0x1e8ea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8EA8u;
    {
        const bool branch_taken_0x1e8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ea8) {
            ctx->pc = 0x1E8EC0u;
            goto label_1e8ec0;
        }
    }
    ctx->pc = 0x1E8EB0u;
label_1e8eb0:
    // 0x1e8eb0: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E8EB0u;
    SET_GPR_U32(ctx, 31, 0x1E8EB8u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E8EB0u, 0x1E8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EB8u;
label_1e8eb8:
    // 0x1e8eb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ebc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e8ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ec0:
    // 0x1e8ec0: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e8ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e8ec4: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e8ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e8ec8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8ecc: 0x92a5003a  lbu         $a1, 0x3A($s5)
    ctx->pc = 0x1e8eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 58)));
    // 0x1e8ed0: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x1e8ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x1e8ed4: 0x92a6003b  lbu         $a2, 0x3B($s5)
    ctx->pc = 0x1e8ed4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
    // 0x1e8ed8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e8edc: 0x92a8003e  lbu         $t0, 0x3E($s5)
    ctx->pc = 0x1e8edcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 62)));
    // 0x1e8ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ee4: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e8ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8ee8: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1e8ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8eec: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x1e8eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e8ef0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e8ef4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E8EF4u;
    SET_GPR_U32(ctx, 31, 0x1E8EFCu);
    ctx->pc = 0x1E8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EF4u;
    // 0x1e8ef8: 0x41a021  addu        $s4, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E8EF4u, 0x1E8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EFCu;
label_1e8efc:
    // 0x1e8efc: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1E8EFCu;
    SET_GPR_U32(ctx, 31, 0x1E8F04u);
    ctx->pc = 0x1E8F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EFCu;
    // 0x1e8f00: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1E8EFCu, 0x1E8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F04u;
label_1e8f04:
    // 0x1e8f04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e8f04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f08: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1E8F08u;
    SET_GPR_U32(ctx, 31, 0x1E8F10u);
    ctx->pc = 0x1E8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F08u;
    // 0x1e8f0c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1E8F08u, 0x1E8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F10u;
label_1e8f10:
    // 0x1e8f10: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1e8f10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1e8f14: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e8f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f18: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x1e8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1e8f1c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e8f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8f20: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1E8F20u;
    SET_GPR_U32(ctx, 31, 0x1E8F28u);
    ctx->pc = 0x1E8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F20u;
    // 0x1e8f24: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1E8F20u, 0x1E8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F28u;
label_1e8f28:
    // 0x1e8f28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e8f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f2c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e8f30: 0xc076554  jal         func_1D9550
    ctx->pc = 0x1E8F30u;
    SET_GPR_U32(ctx, 31, 0x1E8F38u);
    ctx->pc = 0x1E8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F30u;
    // 0x1e8f34: 0x26a50040  addiu       $a1, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9550u, 0x1E8F30u, 0x1E8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F38u;
label_1e8f38:
    // 0x1e8f38: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1e8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8f3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e8f40: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e8f40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e8f44: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x1E8F44u;
    SET_GPR_U32(ctx, 31, 0x1E8F4Cu);
    ctx->pc = 0x1E8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F44u;
    // 0x1e8f48: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x1E8F44u, 0x1E8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F4Cu;
label_1e8f4c:
    // 0x1e8f4c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e8f50: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x1e8f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e8f54: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e8f54u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e8f58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8f5c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8f60: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e8f64: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e8f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e8f68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e8f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e8f6c: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x1e8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x1e8f70: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e8f70u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e8f74: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e8f78: 0x7fa80170  sq          $t0, 0x170($sp)
    ctx->pc = 0x1e8f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 8));
    // 0x1e8f7c: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e8f7cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e8f80: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e8f84: 0x7fa70180  sq          $a3, 0x180($sp)
    ctx->pc = 0x1e8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 7));
    // 0x1e8f88: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e8f88u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e8f8c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e8f90: 0x7aa30080  lq          $v1, 0x80($s5)
    ctx->pc = 0x1e8f90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1e8f94: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e8f98: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E8F98u;
    SET_GPR_U32(ctx, 31, 0x1E8FA0u);
    ctx->pc = 0x1E8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F98u;
    // 0x1e8f9c: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E8F98u, 0x1E8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FA0u;
label_1e8fa0:
    // 0x1e8fa0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8fa4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e8fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e8fa8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E8FA8u;
    SET_GPR_U32(ctx, 31, 0x1E8FB0u);
    ctx->pc = 0x1E8FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FA8u;
    // 0x1e8fac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E8FA8u, 0x1E8FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FB0u;
label_1e8fb0:
    // 0x1e8fb0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8fb4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fb8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E8FB8u;
    SET_GPR_U32(ctx, 31, 0x1E8FC0u);
    ctx->pc = 0x1E8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FB8u;
    // 0x1e8fbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E8FB8u, 0x1E8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FC0u;
label_1e8fc0:
    // 0x1e8fc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8fc4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e8fc8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e8fcc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E8FCCu;
    SET_GPR_U32(ctx, 31, 0x1E8FD4u);
    ctx->pc = 0x1E8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FCCu;
    // 0x1e8fd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E8FCCu, 0x1E8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FD4u;
label_1e8fd4:
    // 0x1e8fd4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e8fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fd8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e8fdc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E8FDCu;
    SET_GPR_U32(ctx, 31, 0x1E8FE4u);
    ctx->pc = 0x1E8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FDCu;
    // 0x1e8fe0: 0x26a60080  addiu       $a2, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E8FDCu, 0x1E8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FE4u;
label_1e8fe4:
    // 0x1e8fe4: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x1e8fe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8fec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ff0: 0x7aa20060  lq          $v0, 0x60($s5)
    ctx->pc = 0x1e8ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1e8ff4: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1e8ff4u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 2));
    // 0x1e8ff8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8ffc: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1e9000: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e9000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e9004: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9008: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e900c: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1e900cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1e9010: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9014: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x1e9014u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x1e9018: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e901c: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1e901cu;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1e9020: 0x7aa20070  lq          $v0, 0x70($s5)
    ctx->pc = 0x1e9020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1e9024: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9028: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1e9028u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1e902c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9030: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1e9030u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1e9034: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1e9034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e9038: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e903c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e9040: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1e9040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1e9044: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9048: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x1e9048u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x1e904c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9050: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1e9050u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1e9054: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e9054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e9058: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e9058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e905c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E905Cu;
    {
        const bool branch_taken_0x1e905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E905Cu;
        // 0x1e9060: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e905c) {
            ctx->pc = 0x1E9070u;
            goto label_1e9070;
        }
    }
    ctx->pc = 0x1E9064u;
    // 0x1e9064: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1E9064u;
    SET_GPR_U32(ctx, 31, 0x1E906Cu);
    ctx->pc = 0x1E9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9064u;
    // 0x1e9068: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1E9064u, 0x1E906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E906Cu;
label_1e906c:
    // 0x1e906c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e906cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e9070:
    // 0x1e9070: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1e9070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1e9074: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9078: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e907c: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E907Cu;
    SET_GPR_U32(ctx, 31, 0x1E9084u);
    ctx->pc = 0x1E9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E907Cu;
    // 0x1e9080: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E907Cu, 0x1E9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9084u;
label_1e9084:
    // 0x1e9084: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9088: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e9088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e908c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e9090: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E9090u;
    {
        const bool branch_taken_0x1e9090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9090) {
            ctx->pc = 0x1E9208u;
            goto label_1e9208;
        }
    }
    ctx->pc = 0x1E9098u;
    // 0x1e9098: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x1e9098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e909c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e90a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e90a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e90a4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e90a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e90a8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e90a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e90ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e90acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90b0: 0x86e20008  lh          $v0, 0x8($s7)
    ctx->pc = 0x1e90b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e90b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e90b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e90b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e90b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90bc: 0x0  nop
    ctx->pc = 0x1e90bcu;
    // NOP
    // 0x1e90c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e90c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e90c4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e90c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e90c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e90c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e90cc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e90ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e90d0: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x1e90d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e90d4: 0x86e2000a  lh          $v0, 0xA($s7)
    ctx->pc = 0x1e90d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x1e90d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e90d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e90dc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1e90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1e90e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e90e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90e4: 0x0  nop
    ctx->pc = 0x1e90e4u;
    // NOP
    // 0x1e90e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e90e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e90ec: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e90ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e90f0: 0x0  nop
    ctx->pc = 0x1e90f0u;
    // NOP
    // 0x1e90f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e90f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e90f8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E90F8u;
    SET_GPR_U32(ctx, 31, 0x1E9100u);
    ctx->pc = 0x1E90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90F8u;
    // 0x1e90fc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E90F8u, 0x1E9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9100u;
label_1e9100:
    // 0x1e9100: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9104: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9108: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e910c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E910Cu;
    SET_GPR_U32(ctx, 31, 0x1E9114u);
    ctx->pc = 0x1E9110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E910Cu;
    // 0x1e9110: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E910Cu, 0x1E9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9114u;
label_1e9114:
    // 0x1e9114: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9118: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e9118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e911c: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1e911cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1e9120: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E9120u;
    SET_GPR_U32(ctx, 31, 0x1E9128u);
    ctx->pc = 0x1E9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9120u;
    // 0x1e9124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E9120u, 0x1E9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9128u;
label_1e9128:
    // 0x1e9128: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e912c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9130: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1e9134: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E9134u;
    SET_GPR_U32(ctx, 31, 0x1E913Cu);
    ctx->pc = 0x1E9138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9134u;
    // 0x1e9138: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E9134u, 0x1E913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E913Cu;
label_1e913c:
    // 0x1e913c: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e913cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e9140: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e9140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e9144: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e9144u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e9148: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e9148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e914c: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e9150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e9154: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e9154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e9158: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e915c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9160u;
    {
        const bool branch_taken_0x1e9160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9160u;
        // 0x1e9164: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9160) {
            ctx->pc = 0x1E9180u;
            goto label_1e9180;
        }
    }
    ctx->pc = 0x1E9168u;
    // 0x1e9168: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e916c: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e916cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e9170: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E9170u;
    SET_GPR_U32(ctx, 31, 0x1E9178u);
    ctx->pc = 0x1E9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9170u;
    // 0x1e9174: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E9170u, 0x1E9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9178u;
label_1e9178:
    // 0x1e9178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9178u;
    {
        const bool branch_taken_0x1e9178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9178) {
            ctx->pc = 0x1E9198u;
            goto label_1e9198;
        }
    }
    ctx->pc = 0x1E9180u;
label_1e9180:
    // 0x1e9180: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e9180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9184: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e9184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e9188: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e918c: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E918Cu;
    SET_GPR_U32(ctx, 31, 0x1E9194u);
    ctx->pc = 0x1E9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E918Cu;
    // 0x1e9190: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E918Cu, 0x1E9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9194u;
label_1e9194:
    // 0x1e9194: 0x0  nop
    ctx->pc = 0x1e9194u;
    // NOP
label_1e9198:
    // 0x1e9198: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e919c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e91a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91a4: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e91a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e91a8: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E91A8u;
    SET_GPR_U32(ctx, 31, 0x1E91B0u);
    ctx->pc = 0x1E91ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91A8u;
    // 0x1e91ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E91A8u, 0x1E91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91B0u;
label_1e91b0:
    // 0x1e91b0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e91b4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e91b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91b8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e91bc: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1E91BCu;
    SET_GPR_U32(ctx, 31, 0x1E91C4u);
    ctx->pc = 0x1E91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91BCu;
    // 0x1e91c0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1E91BCu, 0x1E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91C4u;
label_1e91c4:
    // 0x1e91c4: 0x8ea600a0  lw          $a2, 0xA0($s5)
    ctx->pc = 0x1e91c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1e91c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e91cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e91d0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e91d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91d4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e91d8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e91d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e91e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e91e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91e4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e91e8: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E91E8u;
    SET_GPR_U32(ctx, 31, 0x1E91F0u);
    ctx->pc = 0x1E91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91E8u;
    // 0x1e91ec: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E91E8u, 0x1E91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91F0u;
label_1e91f0:
    // 0x1e91f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e91f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e91f8: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1E91F8u;
    SET_GPR_U32(ctx, 31, 0x1E9200u);
    ctx->pc = 0x1E91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91F8u;
    // 0x1e91fc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1E91F8u, 0x1E9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9200u;
label_1e9200:
    // 0x1e9200: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E9200u;
    {
        const bool branch_taken_0x1e9200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9200u;
        // 0x1e9204: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9200) {
            ctx->pc = 0x1E92B0u;
            goto label_1e92b0;
        }
    }
    ctx->pc = 0x1E9208u;
label_1e9208:
    // 0x1e9208: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e9208u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e920c: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e920cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e9210: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e9210u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e9214: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e9214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e9218: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e9218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e921c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e921cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e9220: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e9220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e9224: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e9228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e922c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E922Cu;
    {
        const bool branch_taken_0x1e922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E922Cu;
        // 0x1e9230: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e922c) {
            ctx->pc = 0x1E9250u;
            goto label_1e9250;
        }
    }
    ctx->pc = 0x1E9234u;
    // 0x1e9234: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9238: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e9238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e923c: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E923Cu;
    SET_GPR_U32(ctx, 31, 0x1E9244u);
    ctx->pc = 0x1E9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E923Cu;
    // 0x1e9240: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E923Cu, 0x1E9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9244u;
label_1e9244:
    // 0x1e9244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9244u;
    {
        const bool branch_taken_0x1e9244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9244) {
            ctx->pc = 0x1E9268u;
            goto label_1e9268;
        }
    }
    ctx->pc = 0x1E924Cu;
    // 0x1e924c: 0x0  nop
    ctx->pc = 0x1e924cu;
    // NOP
label_1e9250:
    // 0x1e9250: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9254: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e9254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e9258: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e925c: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E925Cu;
    SET_GPR_U32(ctx, 31, 0x1E9264u);
    ctx->pc = 0x1E9260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E925Cu;
    // 0x1e9260: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E925Cu, 0x1E9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9264u;
label_1e9264:
    // 0x1e9264: 0x0  nop
    ctx->pc = 0x1e9264u;
    // NOP
label_1e9268:
    // 0x1e9268: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e926c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9270: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9274: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e9274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e9278: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E9278u;
    SET_GPR_U32(ctx, 31, 0x1E9280u);
    ctx->pc = 0x1E927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9278u;
    // 0x1e927c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E9278u, 0x1E9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9280u;
label_1e9280:
    // 0x1e9280: 0x8ea600a0  lw          $a2, 0xA0($s5)
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1e9284: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9288: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e928c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e928cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9290: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9294: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e9294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9298: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e9298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e929c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e92a0: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E92A0u;
    SET_GPR_U32(ctx, 31, 0x1E92A8u);
    ctx->pc = 0x1E92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92A0u;
    // 0x1e92a4: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E92A0u, 0x1E92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92A8u;
label_1e92a8:
    // 0x1e92a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e92ac: 0x0  nop
    ctx->pc = 0x1e92acu;
    // NOP
label_1e92b0:
    // 0x1e92b0: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e92b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e92b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e92b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e92b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E92B8u;
    {
        const bool branch_taken_0x1e92b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92B8u;
        // 0x1e92bc: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92b8) {
            ctx->pc = 0x1E92D0u;
            goto label_1e92d0;
        }
    }
    ctx->pc = 0x1E92C0u;
    // 0x1e92c0: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1E92C0u;
    SET_GPR_U32(ctx, 31, 0x1E92C8u);
    ctx->pc = 0x1E92C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92C0u;
    // 0x1e92c4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1E92C0u, 0x1E92C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92C8u;
label_1e92c8:
    // 0x1e92c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e92c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e92cc: 0x0  nop
    ctx->pc = 0x1e92ccu;
    // NOP
label_1e92d0:
    // 0x1e92d0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E92D0u;
    {
        const bool branch_taken_0x1e92d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92D0u;
        // 0x1e92d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92d0) {
            ctx->pc = 0x1E92E0u;
            goto label_1e92e0;
        }
    }
    ctx->pc = 0x1E92D8u;
    // 0x1e92d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E92D8u;
    {
        const bool branch_taken_0x1e92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92d8) {
            ctx->pc = 0x1E9320u;
            goto label_1e9320;
        }
    }
    ctx->pc = 0x1E92E0u;
label_1e92e0:
    // 0x1e92e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e92e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e92e8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e92ec: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E92ECu;
    SET_GPR_U32(ctx, 31, 0x1E92F4u);
    ctx->pc = 0x1E92F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92ECu;
    // 0x1e92f0: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E92ECu, 0x1E92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92F4u;
label_1e92f4:
    // 0x1e92f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92f8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92F8u;
    // 0x1e92fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E92F8u, 0x1E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9308: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e930c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9310: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E9310u;
    SET_GPR_U32(ctx, 31, 0x1E9318u);
    ctx->pc = 0x1E9314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9310u;
    // 0x1e9314: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E9310u, 0x1E9318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9318u;
label_1e9318:
    // 0x1e9318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e931c: 0x0  nop
    ctx->pc = 0x1e931cu;
    // NOP
label_1e9320:
    // 0x1e9320: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e9320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9324: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e9324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9328: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e9328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e932c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e932cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e933c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e933cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9348: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9348u;
        // 0x1e934c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9350u;
}
