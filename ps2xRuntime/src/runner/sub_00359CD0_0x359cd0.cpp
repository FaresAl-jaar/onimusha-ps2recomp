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

// Function: sub_00359CD0
// Address: 0x359cd0 - 0x35a668
void sub_00359CD0_0x359cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359CD0_0x359cd0");
#endif

    switch (ctx->pc) {
        case 0x359d28u: goto label_359d28;
        case 0x359d38u: goto label_359d38;
        case 0x359d48u: goto label_359d48;
        case 0x359d8cu: goto label_359d8c;
        case 0x359db0u: goto label_359db0;
        case 0x359dc4u: goto label_359dc4;
        case 0x359dd0u: goto label_359dd0;
        case 0x359de4u: goto label_359de4;
        case 0x359df8u: goto label_359df8;
        case 0x359e18u: goto label_359e18;
        case 0x359e24u: goto label_359e24;
        case 0x359e3cu: goto label_359e3c;
        case 0x359e70u: goto label_359e70;
        case 0x359ea0u: goto label_359ea0;
        case 0x359ec0u: goto label_359ec0;
        case 0x359ee8u: goto label_359ee8;
        case 0x359f0cu: goto label_359f0c;
        case 0x359f40u: goto label_359f40;
        case 0x359f54u: goto label_359f54;
        case 0x359f60u: goto label_359f60;
        case 0x359f74u: goto label_359f74;
        case 0x359f84u: goto label_359f84;
        case 0x359f98u: goto label_359f98;
        case 0x359fbcu: goto label_359fbc;
        case 0x35a090u: goto label_35a090;
        case 0x35a0f4u: goto label_35a0f4;
        case 0x35a110u: goto label_35a110;
        case 0x35a13cu: goto label_35a13c;
        case 0x35a154u: goto label_35a154;
        case 0x35a160u: goto label_35a160;
        case 0x35a174u: goto label_35a174;
        case 0x35a180u: goto label_35a180;
        case 0x35a1a0u: goto label_35a1a0;
        case 0x35a1acu: goto label_35a1ac;
        case 0x35a1c4u: goto label_35a1c4;
        case 0x35a1f8u: goto label_35a1f8;
        case 0x35a228u: goto label_35a228;
        case 0x35a248u: goto label_35a248;
        case 0x35a270u: goto label_35a270;
        case 0x35a288u: goto label_35a288;
        case 0x35a2b4u: goto label_35a2b4;
        case 0x35a2f0u: goto label_35a2f0;
        case 0x35a320u: goto label_35a320;
        case 0x35a338u: goto label_35a338;
        case 0x35a344u: goto label_35a344;
        case 0x35a358u: goto label_35a358;
        case 0x35a368u: goto label_35a368;
        case 0x35a388u: goto label_35a388;
        case 0x35a394u: goto label_35a394;
        case 0x35a3acu: goto label_35a3ac;
        case 0x35a3e0u: goto label_35a3e0;
        case 0x35a410u: goto label_35a410;
        case 0x35a430u: goto label_35a430;
        case 0x35a458u: goto label_35a458;
        case 0x35a47cu: goto label_35a47c;
        case 0x35a498u: goto label_35a498;
        case 0x35a4a4u: goto label_35a4a4;
        case 0x35a4bcu: goto label_35a4bc;
        case 0x35a4dcu: goto label_35a4dc;
        case 0x35a504u: goto label_35a504;
        case 0x35a524u: goto label_35a524;
        case 0x35a54cu: goto label_35a54c;
        case 0x35a558u: goto label_35a558;
        case 0x35a588u: goto label_35a588;
        case 0x35a5c0u: goto label_35a5c0;
        case 0x35a5d0u: goto label_35a5d0;
        case 0x35a5f0u: goto label_35a5f0;
        case 0x35a60cu: goto label_35a60c;
        case 0x35a628u: goto label_35a628;
        default: break;
    }

    ctx->pc = 0x359cd0u;

    // 0x359cd0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x359cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x359cd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x359cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x359cd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x359cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x359cdc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x359cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x359ce0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x359ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x359ce4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x359ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x359ce8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x359ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x359cec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x359cecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359cf0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x359cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x359cf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x359cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x359cf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x359cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x359cfc: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x359cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x359d00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x359d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x359d04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x359d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x359d08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d0c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x359d0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x359d10: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x359d10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x359d14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x359d14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x359d18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x359d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x359d1c: 0x8ea500cc  lw          $a1, 0xCC($s5)
    ctx->pc = 0x359d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x359d20: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x359D20u;
    SET_GPR_U32(ctx, 31, 0x359D28u);
    ctx->pc = 0x359D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D20u;
    // 0x359d24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x359D20u, 0x359D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D28u;
label_359d28:
    // 0x359d28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359D28u;
    {
        const bool branch_taken_0x359d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D28u;
        // 0x359d2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d28) {
            ctx->pc = 0x359D40u;
            goto label_359d40;
        }
    }
    ctx->pc = 0x359D30u;
    // 0x359d30: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x359D30u;
    SET_GPR_U32(ctx, 31, 0x359D38u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x359D30u, 0x359D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D38u;
label_359d38:
    // 0x359d38: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x359D38u;
    {
        const bool branch_taken_0x359d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359d38) {
            ctx->pc = 0x35A628u;
            goto label_35a628;
        }
    }
    ctx->pc = 0x359D40u;
label_359d40:
    // 0x359d40: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x359D40u;
    SET_GPR_U32(ctx, 31, 0x359D48u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x359D40u, 0x359D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D48u;
label_359d48:
    // 0x359d48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x359d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d4c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x359d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x359d50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x359d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x359d54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x359d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x359d58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359d58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359d5c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x359d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x359d60: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x359d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x359d64: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x359d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x359d68: 0x86a200d0  lh          $v0, 0xD0($s5)
    ctx->pc = 0x359d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x359d6c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x359d6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x359d70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x359d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x359d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x359d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x359d78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x359d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x359d7c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x359d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x359d80: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x359d80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x359d84: 0xc09e644  jal         func_279910
    ctx->pc = 0x359D84u;
    SET_GPR_U32(ctx, 31, 0x359D8Cu);
    ctx->pc = 0x359D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D84u;
    // 0x359d88: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x359D84u, 0x359D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D8Cu;
label_359d8c:
    // 0x359d8c: 0x92a200d5  lbu         $v0, 0xD5($s5)
    ctx->pc = 0x359d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 213)));
    // 0x359d90: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x359D90u;
    {
        const bool branch_taken_0x359d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D90u;
        // 0x359d94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d90) {
            ctx->pc = 0x359F28u;
            goto label_359f28;
        }
    }
    ctx->pc = 0x359D98u;
    // 0x359d98: 0x93858340  lbu         $a1, -0x7CC0($gp)
    ctx->pc = 0x359d98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x359d9c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x359d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x359da0: 0x93868341  lbu         $a2, -0x7CBF($gp)
    ctx->pc = 0x359da0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935361)));
    // 0x359da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359da8: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x359DA8u;
    SET_GPR_U32(ctx, 31, 0x359DB0u);
    ctx->pc = 0x359DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DA8u;
    // 0x359dac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x359DA8u, 0x359DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DB0u;
label_359db0:
    // 0x359db0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x359db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x359db4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x359db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359db8: 0xdc265ae0  ld          $a2, 0x5AE0($at)
    ctx->pc = 0x359db8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE0u));
    // 0x359dbc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x359DBCu;
    SET_GPR_U32(ctx, 31, 0x359DC4u);
    ctx->pc = 0x359DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DBCu;
    // 0x359dc0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x359DBCu, 0x359DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DC4u;
label_359dc4:
    // 0x359dc4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x359dc8: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x359DC8u;
    SET_GPR_U32(ctx, 31, 0x359DD0u);
    ctx->pc = 0x359DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DC8u;
    // 0x359dcc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x359DC8u, 0x359DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DD0u;
label_359dd0:
    // 0x359dd0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x359dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x359dd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x359dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x359dd8: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x359dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x359ddc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x359DDCu;
    SET_GPR_U32(ctx, 31, 0x359DE4u);
    ctx->pc = 0x359DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DDCu;
    // 0x359de0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x359DDCu, 0x359DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DE4u;
label_359de4:
    // 0x359de4: 0x10b43c  dsll32      $s6, $s0, 16
    ctx->pc = 0x359de4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 16));
    // 0x359de8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x359dec: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x359decu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x359df0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x359df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359df4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x359df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359df8:
    // 0x359df8: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x359df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x359dfc: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x359dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x359e00: 0x778021  addu        $s0, $v1, $s7
    ctx->pc = 0x359e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x359e04: 0x86030528  lh          $v1, 0x528($s0)
    ctx->pc = 0x359e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x359e08: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x359E08u;
    {
        const bool branch_taken_0x359e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x359E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E08u;
        // 0x359e0c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e08) {
            ctx->pc = 0x359F10u;
            goto label_359f10;
        }
    }
    ctx->pc = 0x359E10u;
    // 0x359e10: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x359E10u;
    SET_GPR_U32(ctx, 31, 0x359E18u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x359E10u, 0x359E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E18u;
label_359e18:
    // 0x359e18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x359e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e1c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x359E1Cu;
    SET_GPR_U32(ctx, 31, 0x359E24u);
    ctx->pc = 0x359E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E1Cu;
    // 0x359e20: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x359E1Cu, 0x359E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E24u;
label_359e24:
    // 0x359e24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x359e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x359e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e2c: 0x260404d0  addiu       $a0, $s0, 0x4D0
    ctx->pc = 0x359e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x359e30: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x359e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x359e34: 0xc074458  jal         func_1D1160
    ctx->pc = 0x359E34u;
    SET_GPR_U32(ctx, 31, 0x359E3Cu);
    ctx->pc = 0x359E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E34u;
    // 0x359e38: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x359E34u, 0x359E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E3Cu;
label_359e3c:
    // 0x359e3c: 0x8606052c  lh          $a2, 0x52C($s0)
    ctx->pc = 0x359e3cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1324)));
    // 0x359e40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x359e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x359e44: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x359e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x359e48: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x359e48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x359e4c: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x359e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x359e50: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x359e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x359e54: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x359e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x359e58: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x359e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x359e5c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x359e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x359e60: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x359e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x359e64: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x359e64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x359e68: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x359E68u;
    SET_GPR_U32(ctx, 31, 0x359E70u);
    ctx->pc = 0x359E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E68u;
    // 0x359e6c: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x359E68u, 0x359E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E70u;
label_359e70:
    // 0x359e70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x359e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x359e74: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x359e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x359e78: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x359e78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x359e7c: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x359e7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x359e80: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x359e80u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x359e84: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x359e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x359e88: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x359e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x359e8c: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x359e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x359e90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x359e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x359e94: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x359e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x359e98: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x359E98u;
    SET_GPR_U32(ctx, 31, 0x359EA0u);
    ctx->pc = 0x359E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E98u;
    // 0x359e9c: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x359E98u, 0x359EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EA0u;
label_359ea0:
    // 0x359ea0: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x359ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x359ea4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x359ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x359ea8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x359ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x359eac: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x359eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x359eb0: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x359eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x359eb4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x359eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x359eb8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x359EB8u;
    SET_GPR_U32(ctx, 31, 0x359EC0u);
    ctx->pc = 0x359EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EB8u;
    // 0x359ebc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x359EB8u, 0x359EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EC0u;
label_359ec0:
    // 0x359ec0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x359ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x359ec4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x359ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x359ec8: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x359ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x359ecc: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x359eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x359ed0: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x359ed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x359ed4: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x359ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x359ed8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x359ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x359edc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x359edcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x359ee0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x359EE0u;
    SET_GPR_U32(ctx, 31, 0x359EE8u);
    ctx->pc = 0x359EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EE0u;
    // 0x359ee4: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x359EE0u, 0x359EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EE8u;
label_359ee8:
    // 0x359ee8: 0xc60c0518  lwc1        $f12, 0x518($s0)
    ctx->pc = 0x359ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x359eec: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x359eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x359ef0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x359ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x359ef4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x359ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x359ef8: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x359ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x359efc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x359efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x359f00: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x359f00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x359f04: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x359F04u;
    SET_GPR_U32(ctx, 31, 0x359F0Cu);
    ctx->pc = 0x359F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F04u;
    // 0x359f08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x359F04u, 0x359F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F0Cu;
label_359f0c:
    // 0x359f0c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_359f10:
    // 0x359f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x359f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x359f14: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x359f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x359f18: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x359F18u;
    {
        const bool branch_taken_0x359f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F18u;
        // 0x359f1c: 0x26f70540  addiu       $s7, $s7, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f18) {
            ctx->pc = 0x359DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359df8;
        }
    }
    ctx->pc = 0x359F20u;
    // 0x359f20: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x359F20u;
    {
        const bool branch_taken_0x359f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359f20) {
            ctx->pc = 0x35A118u;
            goto label_35a118;
        }
    }
    ctx->pc = 0x359F28u;
label_359f28:
    // 0x359f28: 0x93858350  lbu         $a1, -0x7CB0($gp)
    ctx->pc = 0x359f28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935376)));
    // 0x359f2c: 0x93868351  lbu         $a2, -0x7CAF($gp)
    ctx->pc = 0x359f2cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935377)));
    // 0x359f30: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x359f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x359f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f38: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x359F38u;
    SET_GPR_U32(ctx, 31, 0x359F40u);
    ctx->pc = 0x359F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F38u;
    // 0x359f3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x359F38u, 0x359F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F40u;
label_359f40:
    // 0x359f40: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x359f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x359f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x359f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f48: 0xdc265ae0  ld          $a2, 0x5AE0($at)
    ctx->pc = 0x359f48u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE0u));
    // 0x359f4c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x359F4Cu;
    SET_GPR_U32(ctx, 31, 0x359F54u);
    ctx->pc = 0x359F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F4Cu;
    // 0x359f50: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x359F4Cu, 0x359F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F54u;
label_359f54:
    // 0x359f54: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x359f58: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x359F58u;
    SET_GPR_U32(ctx, 31, 0x359F60u);
    ctx->pc = 0x359F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F58u;
    // 0x359f5c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x359F58u, 0x359F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F60u;
label_359f60:
    // 0x359f60: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x359f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x359f64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x359f68: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x359f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x359f6c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x359F6Cu;
    SET_GPR_U32(ctx, 31, 0x359F74u);
    ctx->pc = 0x359F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F6Cu;
    // 0x359f70: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x359F6Cu, 0x359F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F74u;
label_359f74:
    // 0x359f74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x359f78: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x359f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x359f7c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x359F7Cu;
    SET_GPR_U32(ctx, 31, 0x359F84u);
    ctx->pc = 0x359F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F7Cu;
    // 0x359f80: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x359F7Cu, 0x359F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F84u;
label_359f84:
    // 0x359f84: 0x10b43c  dsll32      $s6, $s0, 16
    ctx->pc = 0x359f84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 16));
    // 0x359f88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x359f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f8c: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x359f8cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x359f90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x359f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f94: 0x0  nop
    ctx->pc = 0x359f94u;
    // NOP
label_359f98:
    // 0x359f98: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x359f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x359f9c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x359f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x359fa0: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x359fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x359fa4: 0x86030528  lh          $v1, 0x528($s0)
    ctx->pc = 0x359fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x359fa8: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x359FA8u;
    {
        const bool branch_taken_0x359fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x359FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FA8u;
        // 0x359fac: 0x260404f0  addiu       $a0, $s0, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359fa8) {
            ctx->pc = 0x35A0F8u;
            goto label_35a0f8;
        }
    }
    ctx->pc = 0x359FB0u;
    // 0x359fb0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x359fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x359fb4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x359FB4u;
    SET_GPR_U32(ctx, 31, 0x359FBCu);
    ctx->pc = 0x359FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FB4u;
    // 0x359fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x359FB4u, 0x359FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FBCu;
label_359fbc:
    // 0x359fbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x359fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x359fc0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x359fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x359fc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x359fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x359fc8: 0x8fb700f0  lw          $s7, 0xF0($sp)
    ctx->pc = 0x359fc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x359fcc: 0x24a5fa30  addiu       $a1, $a1, -0x5D0
    ctx->pc = 0x359fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965808));
    // 0x359fd0: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x359fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x359fd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359fd8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x359fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x359fdc: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x359fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x359fe0: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x359fe0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359fe4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x359fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x359fe8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x359fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x359fec: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x359fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x359ff0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359ff4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x359ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x359ff8: 0xc6000520  lwc1        $f0, 0x520($s0)
    ctx->pc = 0x359ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359ffc: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x359ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x35a000: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35a000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a004: 0x84490008  lh          $t1, 0x8($v0)
    ctx->pc = 0x35a004u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35a008: 0x8448000a  lh          $t0, 0xA($v0)
    ctx->pc = 0x35a008u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x35a00c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x35a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x35a010: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x35a010u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a014: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x35a014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35a018: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x35a018u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x35a01c: 0x860a052c  lh          $t2, 0x52C($s0)
    ctx->pc = 0x35a01cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1324)));
    // 0x35a020: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x35a020u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35a024: 0x92a300d2  lbu         $v1, 0xD2($s5)
    ctx->pc = 0x35a024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a028: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x35a028u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35a02c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x35a02cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a030: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x35a030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x35a034: 0x2ca1018  mult        $v0, $s6, $t2
    ctx->pc = 0x35a034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a038: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a03c: 0x460428c3  div.s       $f3, $f5, $f4
    ctx->pc = 0x35a03cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x35a040: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x35a040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x35a044: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x35a044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35a048: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x35a048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35a04c: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x35a04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x35a050: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x35a050u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x35a054: 0x4603ad02  mul.s       $f20, $f21, $f3
    ctx->pc = 0x35a054u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x35a058: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x35a058u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x35a05c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x35a05cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x35a060: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x35a060u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a064: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x35a064u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x35a068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35a06c: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x35a06cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x35a070: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x35a070u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a074: 0x0  nop
    ctx->pc = 0x35a074u;
    // NOP
    // 0x35a078: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x35a078u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x35a07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35a080: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x35a080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x35a084: 0x46021dc2  mul.s       $f23, $f3, $f2
    ctx->pc = 0x35a084u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35a088: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A088u;
    SET_GPR_U32(ctx, 31, 0x35A090u);
    ctx->pc = 0x35A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A088u;
    // 0x35a08c: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A088u, 0x35A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A090u;
label_35a090:
    // 0x35a090: 0x87a200b0  lh          $v0, 0xB0($sp)
    ctx->pc = 0x35a090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35a094: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a098: 0x8c2b004c  lw          $t3, 0x4C($at)
    ctx->pc = 0x35a098u;
    SET_GPR_S32(ctx, 11, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x35a09c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35a0a0: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x35a0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x35a0a4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x35a0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35a0a8: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x35a0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35a0ac: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x35a0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x35a0b0: 0x260404c0  addiu       $a0, $s0, 0x4C0
    ctx->pc = 0x35a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x35a0b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35a0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35a0b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35a0bc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x35a0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x35a0c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c4: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x35a0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x35a0c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a0cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a0d0: 0x34490040  ori         $t1, $v0, 0x40
    ctx->pc = 0x35a0d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a0d4: 0x16c1018  mult        $v0, $t3, $t4
    ctx->pc = 0x35a0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a0d8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x35a0d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x35a0dc: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x35a0dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x35a0e0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x35a0e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x35a0e4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a0e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a0e8: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x35a0e8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x35a0ec: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x35A0ECu;
    SET_GPR_U32(ctx, 31, 0x35A0F4u);
    ctx->pc = 0x35A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0ECu;
    // 0x35a0f0: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x35A0ECu, 0x35A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0F4u;
label_35a0f4:
    // 0x35a0f4: 0x0  nop
    ctx->pc = 0x35a0f4u;
    // NOP
label_35a0f8:
    // 0x35a0f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35a0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35a0fc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x35a0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35a100: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x35A100u;
    {
        const bool branch_taken_0x35a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A100u;
        // 0x35a104: 0x26520540  addiu       $s2, $s2, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a100) {
            ctx->pc = 0x359F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f98;
        }
    }
    ctx->pc = 0x35A108u;
    // 0x35a108: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x35A108u;
    SET_GPR_U32(ctx, 31, 0x35A110u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x35A108u, 0x35A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A110u;
label_35a110:
    // 0x35a110: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a114: 0x0  nop
    ctx->pc = 0x35a114u;
    // NOP
label_35a118:
    // 0x35a118: 0x92a200d6  lbu         $v0, 0xD6($s5)
    ctx->pc = 0x35a118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 214)));
    // 0x35a11c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x35A11Cu;
    {
        const bool branch_taken_0x35a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a11c) {
            ctx->pc = 0x35A308u;
            goto label_35a308;
        }
    }
    ctx->pc = 0x35A124u;
    // 0x35a124: 0x93858358  lbu         $a1, -0x7CA8($gp)
    ctx->pc = 0x35a124u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x35a128: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35a12c: 0x93868359  lbu         $a2, -0x7CA7($gp)
    ctx->pc = 0x35a12cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935385)));
    // 0x35a130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35a130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a134: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x35A134u;
    SET_GPR_U32(ctx, 31, 0x35A13Cu);
    ctx->pc = 0x35A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A134u;
    // 0x35a138: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x35A134u, 0x35A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A13Cu;
label_35a13c:
    // 0x35a13c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35a13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35a140: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x35a140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a144: 0xdc265ae0  ld          $a2, 0x5AE0($at)
    ctx->pc = 0x35a144u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 23264)));
    // 0x35a148: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x35a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x35a14c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x35A14Cu;
    SET_GPR_U32(ctx, 31, 0x35A154u);
    ctx->pc = 0x35A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A14Cu;
    // 0x35a150: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x35A14Cu, 0x35A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A154u;
label_35a154:
    // 0x35a154: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a158: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x35A158u;
    SET_GPR_U32(ctx, 31, 0x35A160u);
    ctx->pc = 0x35A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A158u;
    // 0x35a15c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x35A158u, 0x35A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A160u;
label_35a160:
    // 0x35a160: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x35a160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a164: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a168: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x35a168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35a16c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x35A16Cu;
    SET_GPR_U32(ctx, 31, 0x35A174u);
    ctx->pc = 0x35A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A16Cu;
    // 0x35a170: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x35A16Cu, 0x35A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A174u;
label_35a174:
    // 0x35a174: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a178: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x35a178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a17c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35a17cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a180:
    // 0x35a180: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x35a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x35a184: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x35a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x35a188: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x35a188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x35a18c: 0x86030528  lh          $v1, 0x528($s0)
    ctx->pc = 0x35a18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x35a190: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x35A190u;
    {
        const bool branch_taken_0x35a190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A190u;
        // 0x35a194: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a190) {
            ctx->pc = 0x35A2F8u;
            goto label_35a2f8;
        }
    }
    ctx->pc = 0x35A198u;
    // 0x35a198: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x35A198u;
    SET_GPR_U32(ctx, 31, 0x35A1A0u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x35A198u, 0x35A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1A0u;
label_35a1a0:
    // 0x35a1a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35a1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1a4: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x35A1A4u;
    SET_GPR_U32(ctx, 31, 0x35A1ACu);
    ctx->pc = 0x35A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1A4u;
    // 0x35a1a8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x35A1A4u, 0x35A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1ACu;
label_35a1ac:
    // 0x35a1ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1b4: 0x26040500  addiu       $a0, $s0, 0x500
    ctx->pc = 0x35a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x35a1b8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35a1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35a1bc: 0xc074458  jal         func_1D1160
    ctx->pc = 0x35A1BCu;
    SET_GPR_U32(ctx, 31, 0x35A1C4u);
    ctx->pc = 0x35A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1BCu;
    // 0x35a1c0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x35A1BCu, 0x35A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1C4u;
label_35a1c4:
    // 0x35a1c4: 0x8606052c  lh          $a2, 0x52C($s0)
    ctx->pc = 0x35a1c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1324)));
    // 0x35a1c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a1cc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a1d0: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a1d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a1d4: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x35a1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a1d8: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x35a1dc: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x35a1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x35a1e0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a1e4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x35a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a1e8: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x35a1e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x35a1ec: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x35a1ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35a1f0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A1F0u;
    SET_GPR_U32(ctx, 31, 0x35A1F8u);
    ctx->pc = 0x35A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1F0u;
    // 0x35a1f4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A1F0u, 0x35A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1F8u;
label_35a1f8:
    // 0x35a1f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a1fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a200: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x35a200u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x35a204: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x35a204u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x35a208: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x35a208u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x35a20c: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x35a210: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x35a210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a214: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x35a214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a218: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a21c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a220: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A220u;
    SET_GPR_U32(ctx, 31, 0x35A228u);
    ctx->pc = 0x35A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A220u;
    // 0x35a224: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A220u, 0x35A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A228u;
label_35a228:
    // 0x35a228: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a22c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a230: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a234: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x35a234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a238: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x35a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x35a23c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a240: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A240u;
    SET_GPR_U32(ctx, 31, 0x35A248u);
    ctx->pc = 0x35A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A240u;
    // 0x35a244: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A240u, 0x35A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A248u;
label_35a248:
    // 0x35a248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a24c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a250: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x35a250u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x35a254: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x35a254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x35a258: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x35a258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a25c: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x35a25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a260: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a264: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a268: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A268u;
    SET_GPR_U32(ctx, 31, 0x35A270u);
    ctx->pc = 0x35A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A268u;
    // 0x35a26c: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A268u, 0x35A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A270u;
label_35a270:
    // 0x35a270: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x35a270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35a274: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x35a274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35a278: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x35A278u;
    {
        const bool branch_taken_0x35a278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A278u;
        // 0x35a27c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a278) {
            ctx->pc = 0x35A2C8u;
            goto label_35a2c8;
        }
    }
    ctx->pc = 0x35A280u;
    // 0x35a280: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a284: 0x34510080  ori         $s1, $v0, 0x80
    ctx->pc = 0x35a284u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_35a288:
    // 0x35a288: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35a28c: 0x86020516  lh          $v0, 0x516($s0)
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1302)));
    // 0x35a290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35a29c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x35a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x35a2a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35a2a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a2a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x35a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35a2ac: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x35A2ACu;
    SET_GPR_U32(ctx, 31, 0x35A2B4u);
    ctx->pc = 0x35A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2ACu;
    // 0x35a2b0: 0x24460440  addiu       $a2, $v0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x35A2ACu, 0x35A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2B4u;
label_35a2b4:
    // 0x35a2b4: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x35a2b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35a2b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35a2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35a2bc: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x35a2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35a2c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x35A2C0u;
    {
        const bool branch_taken_0x35a2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2C0u;
        // 0x35a2c4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2c0) {
            ctx->pc = 0x35A288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a288;
        }
    }
    ctx->pc = 0x35A2C8u;
label_35a2c8:
    // 0x35a2c8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35a2cc: 0xc60c0518  lwc1        $f12, 0x518($s0)
    ctx->pc = 0x35a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35a2d0: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x35a2d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35a2d4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x35a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a2d8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x35a2d8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x35a2dc: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x35a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35a2e0: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x35a2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x35a2e4: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x35a2e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x35a2e8: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x35A2E8u;
    SET_GPR_U32(ctx, 31, 0x35A2F0u);
    ctx->pc = 0x35A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2E8u;
    // 0x35a2ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x35A2E8u, 0x35A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2F0u;
label_35a2f0:
    // 0x35a2f0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a2f4: 0x0  nop
    ctx->pc = 0x35a2f4u;
    // NOP
label_35a2f8:
    // 0x35a2f8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x35a2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x35a2fc: 0x2ae20008  slti        $v0, $s7, 0x8
    ctx->pc = 0x35a2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35a300: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x35A300u;
    {
        const bool branch_taken_0x35a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A300u;
        // 0x35a304: 0x27de0540  addiu       $fp, $fp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a300) {
            ctx->pc = 0x35A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a180;
        }
    }
    ctx->pc = 0x35A308u;
label_35a308:
    // 0x35a308: 0x93858348  lbu         $a1, -0x7CB8($gp)
    ctx->pc = 0x35a308u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x35a30c: 0x93868349  lbu         $a2, -0x7CB7($gp)
    ctx->pc = 0x35a30cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935369)));
    // 0x35a310: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x35a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35a314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35a314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a318: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x35A318u;
    SET_GPR_U32(ctx, 31, 0x35A320u);
    ctx->pc = 0x35A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A318u;
    // 0x35a31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x35A318u, 0x35A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A320u;
label_35a320:
    // 0x35a320: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35a320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35a324: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x35a324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a328: 0xdc265ae0  ld          $a2, 0x5AE0($at)
    ctx->pc = 0x35a328u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 23264)));
    // 0x35a32c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x35a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x35a330: 0xc074648  jal         func_1D1920
    ctx->pc = 0x35A330u;
    SET_GPR_U32(ctx, 31, 0x35A338u);
    ctx->pc = 0x35A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A330u;
    // 0x35a334: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x35A330u, 0x35A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A338u;
label_35a338:
    // 0x35a338: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a33c: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x35A33Cu;
    SET_GPR_U32(ctx, 31, 0x35A344u);
    ctx->pc = 0x35A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A33Cu;
    // 0x35a340: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x35A33Cu, 0x35A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A344u;
label_35a344:
    // 0x35a344: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x35a344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a348: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35a348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a34c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x35a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35a350: 0xc074648  jal         func_1D1920
    ctx->pc = 0x35A350u;
    SET_GPR_U32(ctx, 31, 0x35A358u);
    ctx->pc = 0x35A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A350u;
    // 0x35a354: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x35A350u, 0x35A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A358u;
label_35a358:
    // 0x35a358: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a35c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35a35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a360: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x35a360u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a364: 0x0  nop
    ctx->pc = 0x35a364u;
    // NOP
label_35a368:
    // 0x35a368: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x35a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x35a36c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x35a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x35a370: 0x778021  addu        $s0, $v1, $s7
    ctx->pc = 0x35a370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x35a374: 0x86030528  lh          $v1, 0x528($s0)
    ctx->pc = 0x35a374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x35a378: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x35A378u;
    {
        const bool branch_taken_0x35a378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A378u;
        // 0x35a37c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a378) {
            ctx->pc = 0x35A480u;
            goto label_35a480;
        }
    }
    ctx->pc = 0x35A380u;
    // 0x35a380: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x35A380u;
    SET_GPR_U32(ctx, 31, 0x35A388u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x35A380u, 0x35A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A388u;
label_35a388:
    // 0x35a388: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35a388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a38c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x35A38Cu;
    SET_GPR_U32(ctx, 31, 0x35A394u);
    ctx->pc = 0x35A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A38Cu;
    // 0x35a390: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x35A38Cu, 0x35A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A394u;
label_35a394:
    // 0x35a394: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a398: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a39c: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x35a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35a3a0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35a3a4: 0xc074458  jal         func_1D1160
    ctx->pc = 0x35A3A4u;
    SET_GPR_U32(ctx, 31, 0x35A3ACu);
    ctx->pc = 0x35A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3A4u;
    // 0x35a3a8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x35A3A4u, 0x35A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3ACu;
label_35a3ac:
    // 0x35a3ac: 0x8606052c  lh          $a2, 0x52C($s0)
    ctx->pc = 0x35a3acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1324)));
    // 0x35a3b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a3b4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a3b8: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a3b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a3bc: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x35a3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a3c0: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x35a3c4: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x35a3c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x35a3c8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a3cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x35a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a3d0: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x35a3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x35a3d4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x35a3d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35a3d8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A3D8u;
    SET_GPR_U32(ctx, 31, 0x35A3E0u);
    ctx->pc = 0x35A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3D8u;
    // 0x35a3dc: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A3D8u, 0x35A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3E0u;
label_35a3e0:
    // 0x35a3e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a3e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a3e8: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x35a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x35a3ec: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x35a3ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x35a3f0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x35a3f0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x35a3f4: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x35a3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x35a3f8: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x35a3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a3fc: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x35a3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a400: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a404: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a408: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A408u;
    SET_GPR_U32(ctx, 31, 0x35A410u);
    ctx->pc = 0x35A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A408u;
    // 0x35a40c: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A408u, 0x35A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A410u;
label_35a410:
    // 0x35a410: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a414: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a418: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a41c: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x35a41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a420: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x35a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x35a424: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a428: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A428u;
    SET_GPR_U32(ctx, 31, 0x35A430u);
    ctx->pc = 0x35A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A428u;
    // 0x35a42c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A428u, 0x35A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A430u;
label_35a430:
    // 0x35a430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a434: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a438: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x35a438u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x35a43c: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x35a43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x35a440: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x35a440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a444: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x35a444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a448: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a44c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a44cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a450: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A450u;
    SET_GPR_U32(ctx, 31, 0x35A458u);
    ctx->pc = 0x35A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A450u;
    // 0x35a454: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A450u, 0x35A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A458u;
label_35a458:
    // 0x35a458: 0x8608052e  lh          $t0, 0x52E($s0)
    ctx->pc = 0x35a458u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35a45c: 0xc60c051c  lwc1        $f12, 0x51C($s0)
    ctx->pc = 0x35a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35a460: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x35a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a464: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35a464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35a468: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x35a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35a46c: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x35a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x35a470: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x35a470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x35a474: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x35A474u;
    SET_GPR_U32(ctx, 31, 0x35A47Cu);
    ctx->pc = 0x35A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A474u;
    // 0x35a478: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x35A474u, 0x35A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A47Cu;
label_35a47c:
    // 0x35a47c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_35a480:
    // 0x35a480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35a480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35a484: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x35a484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35a488: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x35A488u;
    {
        const bool branch_taken_0x35a488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A488u;
        // 0x35a48c: 0x26f70540  addiu       $s7, $s7, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a488) {
            ctx->pc = 0x35A368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a368;
        }
    }
    ctx->pc = 0x35A490u;
    // 0x35a490: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x35A490u;
    SET_GPR_U32(ctx, 31, 0x35A498u);
    ctx->pc = 0x35A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A490u;
    // 0x35a494: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x35A490u, 0x35A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A498u;
label_35a498:
    // 0x35a498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35a498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a49c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x35A49Cu;
    SET_GPR_U32(ctx, 31, 0x35A4A4u);
    ctx->pc = 0x35A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A49Cu;
    // 0x35a4a0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x35A49Cu, 0x35A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4A4u;
label_35a4a4:
    // 0x35a4a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4ac: 0x26a400b0  addiu       $a0, $s5, 0xB0
    ctx->pc = 0x35a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x35a4b0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x35a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x35a4b4: 0xc074458  jal         func_1D1160
    ctx->pc = 0x35A4B4u;
    SET_GPR_U32(ctx, 31, 0x35A4BCu);
    ctx->pc = 0x35A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4B4u;
    // 0x35a4b8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x35A4B4u, 0x35A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4BCu;
label_35a4bc:
    // 0x35a4bc: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a4bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a4c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a4c4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a4c8: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x35a4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a4cc: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x35a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x35a4d0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a4d4: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A4D4u;
    SET_GPR_U32(ctx, 31, 0x35A4DCu);
    ctx->pc = 0x35A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4D4u;
    // 0x35a4d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A4D4u, 0x35A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4DCu;
label_35a4dc:
    // 0x35a4dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a4e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a4e4: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x35a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x35a4e8: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x35a4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x35a4ec: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x35a4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35a4f0: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x35a4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a4f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a4f8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a4f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a4fc: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A4FCu;
    SET_GPR_U32(ctx, 31, 0x35A504u);
    ctx->pc = 0x35A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4FCu;
    // 0x35a500: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A4FCu, 0x35A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A504u;
label_35a504:
    // 0x35a504: 0x92a500d2  lbu         $a1, 0xD2($s5)
    ctx->pc = 0x35a504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x35a508: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a50c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x35a510: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x35a510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a514: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x35a514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x35a518: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a51c: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A51Cu;
    SET_GPR_U32(ctx, 31, 0x35A524u);
    ctx->pc = 0x35A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A51Cu;
    // 0x35a520: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A51Cu, 0x35A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A524u;
label_35a524:
    // 0x35a524: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a528: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a52c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x35a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x35a530: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x35a530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x35a534: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x35a534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x35a538: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x35a538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35a53c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x35a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x35a540: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x35a540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x35a544: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x35A544u;
    SET_GPR_U32(ctx, 31, 0x35A54Cu);
    ctx->pc = 0x35A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A544u;
    // 0x35a548: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x35A544u, 0x35A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A54Cu;
label_35a54c:
    // 0x35a54c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35a550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a554: 0x34510080  ori         $s1, $v0, 0x80
    ctx->pc = 0x35a554u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_35a558:
    // 0x35a558: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x35a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x35a55c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x35a55cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a568: 0x26a50090  addiu       $a1, $s5, 0x90
    ctx->pc = 0x35a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x35a56c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35a56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35a570: 0x26a600a0  addiu       $a2, $s5, 0xA0
    ctx->pc = 0x35a570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x35a574: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35a574u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35a578: 0x0  nop
    ctx->pc = 0x35a578u;
    // NOP
    // 0x35a57c: 0x0  nop
    ctx->pc = 0x35a57cu;
    // NOP
    // 0x35a580: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x35A580u;
    SET_GPR_U32(ctx, 31, 0x35A588u);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x35A580u, 0x35A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A588u;
label_35a588:
    // 0x35a588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a58c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35a58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a590: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x35A590u;
    {
        const bool branch_taken_0x35a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A590u;
        // 0x35a594: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a590) {
            ctx->pc = 0x35A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a558;
        }
    }
    ctx->pc = 0x35A598u;
    // 0x35a598: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x35a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x35a59c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35a5a0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x35a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x35a5a4: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x35a5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x35a5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35a5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a5ac: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x35a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35a5b0: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x35a5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x35a5b4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x35a5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a5b8: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x35A5B8u;
    SET_GPR_U32(ctx, 31, 0x35A5C0u);
    ctx->pc = 0x35A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5B8u;
    // 0x35a5bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x35A5B8u, 0x35A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5C0u;
label_35a5c0:
    // 0x35a5c0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x35a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35a5c4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x35a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35a5c8: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x35A5C8u;
    SET_GPR_U32(ctx, 31, 0x35A5D0u);
    ctx->pc = 0x35A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5C8u;
    // 0x35a5cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x35A5C8u, 0x35A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5D0u;
label_35a5d0:
    // 0x35a5d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x35a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35a5d4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x35a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x35a5d8: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x35a5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x35a5dc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x35a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x35a5e0: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x35a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x35a5e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35a5e8: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x35A5E8u;
    SET_GPR_U32(ctx, 31, 0x35A5F0u);
    ctx->pc = 0x35A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5E8u;
    // 0x35a5ec: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x35A5E8u, 0x35A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5F0u;
label_35a5f0:
    // 0x35a5f0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x35a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x35a5f4: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x35a5f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x35a5f8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x35a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35a5fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35A5FCu;
    {
        const bool branch_taken_0x35a5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A5FCu;
        // 0x35a600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a5fc) {
            ctx->pc = 0x35A628u;
            goto label_35a628;
        }
    }
    ctx->pc = 0x35A604u;
    // 0x35a604: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x35A604u;
    SET_GPR_U32(ctx, 31, 0x35A60Cu);
    ctx->pc = 0x35A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A604u;
    // 0x35a608: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x35A604u, 0x35A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A60Cu;
label_35a60c:
    // 0x35a60c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x35a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35a610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35a610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a618: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x35a618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x35a61c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x35a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35a620: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x35A620u;
    SET_GPR_U32(ctx, 31, 0x35A628u);
    ctx->pc = 0x35A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A620u;
    // 0x35a624: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x35A620u, 0x35A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A628u;
label_35a628:
    // 0x35a628: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x35a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35a62c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x35a62cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a630: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x35a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x35a634: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35a634u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35a638: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x35a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35a63c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35a63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a640: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35a644: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35a644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a648: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a64c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35a64cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a650: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35a650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a654: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35a654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a658: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a65c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35a65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a660: 0x3e00008  jr          $ra
    ctx->pc = 0x35A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A660u;
        // 0x35a664: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A668u;
}
