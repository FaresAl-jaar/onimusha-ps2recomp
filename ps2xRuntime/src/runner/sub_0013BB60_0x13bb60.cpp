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

// Function: sub_0013BB60
// Address: 0x13bb60 - 0x13c7b4
void sub_0013BB60_0x13bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BB60_0x13bb60");
#endif

    switch (ctx->pc) {
        case 0x13bbe0u: goto label_13bbe0;
        case 0x13bc28u: goto label_13bc28;
        case 0x13bc40u: goto label_13bc40;
        case 0x13bc50u: goto label_13bc50;
        case 0x13bc68u: goto label_13bc68;
        case 0x13bc98u: goto label_13bc98;
        case 0x13bdb8u: goto label_13bdb8;
        case 0x13be24u: goto label_13be24;
        case 0x13bf8cu: goto label_13bf8c;
        case 0x13bfd4u: goto label_13bfd4;
        case 0x13c000u: goto label_13c000;
        case 0x13c084u: goto label_13c084;
        case 0x13c090u: goto label_13c090;
        case 0x13c104u: goto label_13c104;
        case 0x13c130u: goto label_13c130;
        case 0x13c150u: goto label_13c150;
        case 0x13c1c0u: goto label_13c1c0;
        case 0x13c23cu: goto label_13c23c;
        case 0x13c294u: goto label_13c294;
        case 0x13c2dcu: goto label_13c2dc;
        case 0x13c338u: goto label_13c338;
        case 0x13c374u: goto label_13c374;
        case 0x13c3a8u: goto label_13c3a8;
        case 0x13c41cu: goto label_13c41c;
        case 0x13c484u: goto label_13c484;
        case 0x13c4ccu: goto label_13c4cc;
        case 0x13c4f4u: goto label_13c4f4;
        case 0x13c5b4u: goto label_13c5b4;
        case 0x13c6f8u: goto label_13c6f8;
        default: break;
    }

    ctx->pc = 0x13bb60u;

    // 0x13bb60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x13bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13bb64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x13bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13bb68: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x13bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x13bb6c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x13bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x13bb70: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x13bb70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb74: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x13bb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x13bb78: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x13bb78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb7c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13bb80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x13bb84: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x13bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x13bb88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13bb8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13bb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13bb94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13bb9c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x13bb9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13bba0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x13bba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bba4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x13bba4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13bba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbac: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x13bbacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13bbb0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x13bbb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13bbb4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13bbb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13bbb8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13bbb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13bbbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13bbbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13bbc0: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x13bbc0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x13bbc4: 0xafaa00fc  sw          $t2, 0xFC($sp)
    ctx->pc = 0x13bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 10));
    // 0x13bbc8: 0xa3ab00fb  sb          $t3, 0xFB($sp)
    ctx->pc = 0x13bbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 251), (uint8_t)GPR_U32(ctx, 11));
    // 0x13bbcc: 0x461ad642  mul.s       $f25, $f26, $f26
    ctx->pc = 0x13bbccu;
    ctx->f[25] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x13bbd0: 0xac800fbc  sw          $zero, 0xFBC($a0)
    ctx->pc = 0x13bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4028), GPR_U32(ctx, 0));
    // 0x13bbd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13bbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd8: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x13BBD8u;
    SET_GPR_U32(ctx, 31, 0x13BBE0u);
    ctx->pc = 0x13BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBD8u;
    // 0x13bbdc: 0xa7a000d0  sh          $zero, 0xD0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x13BBD8u, 0x13BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBE0u;
label_13bbe0:
    // 0x13bbe0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13bbe4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bbe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13bbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bbec: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13bbecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13bbf0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13bbf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x13bbf4: 0x461a0e1c  madd.s      $f24, $f1, $f26
    ctx->pc = 0x13bbf4u;
    ctx->f[24] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[26]));
    // 0x13bbf8: 0x7bc80000  lq          $t0, 0x0($fp)
    ctx->pc = 0x13bbf8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13bbfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bc04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13bc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc08: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13bc0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bc14: 0x34453030  ori         $a1, $v0, 0x3030
    ctx->pc = 0x13bc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13bc18: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x13bc18u;
    runtime->Store128(rdram, ctx, 0x70003030u, GPR_VEC(ctx, 8));
    // 0x13bc1c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13bc1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bc20: 0xc04ec28  jal         func_13B0A0
    ctx->pc = 0x13BC20u;
    SET_GPR_U32(ctx, 31, 0x13BC28u);
    ctx->pc = 0x13BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC20u;
    // 0x13bc24: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0A0u, 0x13BC20u, 0x13BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC28u;
label_13bc28:
    // 0x13bc28: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13bc2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13bc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc30: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bc34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13bc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc38: 0xc04ec28  jal         func_13B0A0
    ctx->pc = 0x13BC38u;
    SET_GPR_U32(ctx, 31, 0x13BC40u);
    ctx->pc = 0x13BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC38u;
    // 0x13bc3c: 0x34453040  ori         $a1, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0A0u, 0x13BC38u, 0x13BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC40u;
label_13bc40:
    // 0x13bc40: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13bc40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13bc44: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x13bc44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bc48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13bc4c: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
label_13bc50:
    // 0x13bc50: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x13bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13bc54: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x13bc54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13bc58: 0xa7a000c0  sh          $zero, 0xC0($sp)
    ctx->pc = 0x13bc58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bc5c: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x13bc5cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x13bc60: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x13BC60u;
    {
        const bool branch_taken_0x13bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC60u;
        // 0x13bc64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc60) {
            ctx->pc = 0x13C668u;
            goto label_13c668;
        }
    }
    ctx->pc = 0x13BC68u;
label_13bc68:
    // 0x13bc68: 0xdf828538  ld          $v0, -0x7AC8($gp)
    ctx->pc = 0x13bc68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13bc6c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x13bc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13bc70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13bc74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13bc78: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13bc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13bc7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13bc80: 0x10400275  beqz        $v0, . + 4 + (0x275 << 2)
    ctx->pc = 0x13BC80u;
    {
        const bool branch_taken_0x13bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC80u;
        // 0x13bc84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc80) {
            ctx->pc = 0x13C658u;
            goto label_13c658;
        }
    }
    ctx->pc = 0x13BC88u;
    // 0x13bc88: 0xa7a000e0  sh          $zero, 0xE0($sp)
    ctx->pc = 0x13bc88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bc8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13bc90: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x13BC90u;
    {
        const bool branch_taken_0x13bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC90u;
        // 0x13bc94: 0x8c510bd0  lw          $s1, 0xBD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc90) {
            ctx->pc = 0x13C630u;
            goto label_13c630;
        }
    }
    ctx->pc = 0x13BC98u;
label_13bc98:
    // 0x13bc98: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bc9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x13bca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BCA0u;
    {
        const bool branch_taken_0x13bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bca0) {
            ctx->pc = 0x13BCB8u;
            goto label_13bcb8;
        }
    }
    ctx->pc = 0x13BCA8u;
    // 0x13bca8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13bcac: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x13bcb0: 0x1040025b  beqz        $v0, . + 4 + (0x25B << 2)
    ctx->pc = 0x13BCB0u;
    {
        const bool branch_taken_0x13bcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcb0) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BCB8u;
label_13bcb8:
    // 0x13bcb8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bcbc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13bcc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bcc4: 0x10400256  beqz        $v0, . + 4 + (0x256 << 2)
    ctx->pc = 0x13BCC4u;
    {
        const bool branch_taken_0x13bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcc4) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BCCCu;
    // 0x13bccc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BCCCu;
    {
        const bool branch_taken_0x13bccc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bccc) {
            ctx->pc = 0x13BCF0u;
            goto label_13bcf0;
        }
    }
    ctx->pc = 0x13BCD4u;
    // 0x13bcd4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x13bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x13bcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bcdc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BCDCu;
    {
        const bool branch_taken_0x13bcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13bcdc) {
            ctx->pc = 0x13BCF8u;
            goto label_13bcf8;
        }
    }
    ctx->pc = 0x13BCE4u;
    // 0x13bce4: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x13BCE4u;
    {
        const bool branch_taken_0x13bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bce4) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BCECu;
    // 0x13bcec: 0x0  nop
    ctx->pc = 0x13bcecu;
    // NOP
label_13bcf0:
    // 0x13bcf0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x13bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x13bcf4: 0x0  nop
    ctx->pc = 0x13bcf4u;
    // NOP
label_13bcf8:
    // 0x13bcf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13bcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13bcfc: 0xc4203034  lwc1        $f0, 0x3034($at)
    ctx->pc = 0x13bcfcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd00: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x13bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bd04: 0x461a0040  add.s       $f1, $f0, $f26
    ctx->pc = 0x13bd04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x13bd08: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13bd08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd0c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13BD0Cu;
    {
        const bool branch_taken_0x13bd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bd0c) {
            ctx->pc = 0x13BD40u;
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BD14u;
    // 0x13bd14: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x13bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd1c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13BD40u;
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x13bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bd28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13BD2Cu;
    {
        const bool branch_taken_0x13bd2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD2Cu;
        // 0x13bd30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd2c) {
            ctx->pc = 0x13BD40u;
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BD34u;
    // 0x13bd34: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x13BD34u;
    {
        const bool branch_taken_0x13bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD34u;
        // 0x13bd38: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd34) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BD3Cu;
    // 0x13bd3c: 0x0  nop
    ctx->pc = 0x13bd3cu;
    // NOP
label_13bd40:
    // 0x13bd40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13bd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13bd44: 0xc4203034  lwc1        $f0, 0x3034($at)
    ctx->pc = 0x13bd44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd48: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x13bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bd4c: 0x461a0041  sub.s       $f1, $f0, $f26
    ctx->pc = 0x13bd4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x13bd50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13bd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd54: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x13BD54u;
    {
        const bool branch_taken_0x13bd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bd54) {
            ctx->pc = 0x13BD88u;
            goto label_13bd88;
        }
    }
    ctx->pc = 0x13BD5Cu;
    // 0x13bd5c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x13bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13BD64u;
    {
        const bool branch_taken_0x13bd64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bd64) {
            ctx->pc = 0x13BD88u;
            goto label_13bd88;
        }
    }
    ctx->pc = 0x13BD6Cu;
    // 0x13bd6c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x13bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bd70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13BD74u;
    {
        const bool branch_taken_0x13bd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD74u;
        // 0x13bd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd74) {
            ctx->pc = 0x13BD88u;
            goto label_13bd88;
        }
    }
    ctx->pc = 0x13BD7Cu;
    // 0x13bd7c: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x13BD7Cu;
    {
        const bool branch_taken_0x13bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD7Cu;
        // 0x13bd80: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd7c) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BD84u;
    // 0x13bd84: 0x0  nop
    ctx->pc = 0x13bd84u;
    // NOP
label_13bd88:
    // 0x13bd88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bd8c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x13bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13bd90: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13bd94: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x13bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13bd98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13bd98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13bd9c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13bd9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bda0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13bda0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13bda4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13bda8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x13bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13bdac: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x13bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13bdb0: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13BDB0u;
    SET_GPR_U32(ctx, 31, 0x13BDB8u);
    ctx->pc = 0x13BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDB0u;
    // 0x13bdb4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13BDB0u, 0x13BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDB8u;
label_13bdb8:
    // 0x13bdb8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x13bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bdbc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x13bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bdc0: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x13bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bdc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13bdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13bdc8: 0x460015c0  add.s       $f23, $f2, $f0
    ctx->pc = 0x13bdc8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13bdcc: 0x4600bd05  abs.s       $f20, $f23
    ctx->pc = 0x13bdccu;
    ctx->f[20] = FPU_ABS_S(ctx->f[23]);
    // 0x13bdd0: 0x461aa034  c.lt.s      $f20, $f26
    ctx->pc = 0x13bdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bdd4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x13BDD4u;
    {
        const bool branch_taken_0x13bdd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bdd4) {
            ctx->pc = 0x13BE40u;
            goto label_13be40;
        }
    }
    ctx->pc = 0x13BDDCu;
    // 0x13bddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bde0: 0x0  nop
    ctx->pc = 0x13bde0u;
    // NOP
    // 0x13bde4: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13bde4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bde8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13BDE8u;
    {
        const bool branch_taken_0x13bde8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bde8) {
            ctx->pc = 0x13BE08u;
            goto label_13be08;
        }
    }
    ctx->pc = 0x13BDF0u;
    // 0x13bdf0: 0x4618a036  c.le.s      $f20, $f24
    ctx->pc = 0x13bdf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bdf4: 0x4501020a  bc1t        . + 4 + (0x20A << 2)
    ctx->pc = 0x13BDF4u;
    {
        const bool branch_taken_0x13bdf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDF4u;
        // 0x13bdf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdf4) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BDFCu;
    // 0x13bdfc: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x13BDFCu;
    {
        const bool branch_taken_0x13bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDFCu;
        // 0x13be00: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdfc) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BE04u;
    // 0x13be04: 0x0  nop
    ctx->pc = 0x13be04u;
    // NOP
label_13be08:
    // 0x13be08: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13be08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13be0c: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13be0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13be10: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x13be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13be14: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x13be14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13be18: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13be18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13be1c: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13BE1Cu;
    SET_GPR_U32(ctx, 31, 0x13BE24u);
    ctx->pc = 0x13BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE1Cu;
    // 0x13be20: 0x34483040  ori         $t0, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13BE1Cu, 0x13BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE24u;
label_13be24:
    // 0x13be24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13be24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13be28: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x13BE28u;
    {
        const bool branch_taken_0x13be28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13be28) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BE30u;
    // 0x13be30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13be34: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x13BE34u;
    {
        const bool branch_taken_0x13be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE34u;
        // 0x13be38: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be34) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BE3Cu;
    // 0x13be3c: 0x0  nop
    ctx->pc = 0x13be3cu;
    // NOP
label_13be40:
    // 0x13be40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13be44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13be44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13be48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13be48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be4c: 0xc4213030  lwc1        $f1, 0x3030($at)
    ctx->pc = 0x13be4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be50: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13be50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13be54: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x13be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13be58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13be58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13be5c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13be5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13be60: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13BE60u;
    {
        const bool branch_taken_0x13be60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13be60) {
            ctx->pc = 0x13BE88u;
            goto label_13be88;
        }
    }
    ctx->pc = 0x13BE68u;
    // 0x13be68: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x13be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13be6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13be70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13BE70u;
    {
        const bool branch_taken_0x13be70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13be70) {
            ctx->pc = 0x13BE88u;
            goto label_13be88;
        }
    }
    ctx->pc = 0x13BE78u;
    // 0x13be78: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x13be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13be7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13be80: 0x450001e7  bc1f        . + 4 + (0x1E7 << 2)
    ctx->pc = 0x13BE80u;
    {
        const bool branch_taken_0x13be80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13be80) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BE88u;
label_13be88:
    // 0x13be88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13be8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13be8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13be90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13be90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be94: 0xc4213030  lwc1        $f1, 0x3030($at)
    ctx->pc = 0x13be94u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be98: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13be98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13be9c: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x13be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bea0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13bea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13bea4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13bea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bea8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BED0u;
            goto label_13bed0;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x13beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13beb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13beb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13beb8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13BEB8u;
    {
        const bool branch_taken_0x13beb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13beb8) {
            ctx->pc = 0x13BED0u;
            goto label_13bed0;
        }
    }
    ctx->pc = 0x13BEC0u;
    // 0x13bec0: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x13bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bec4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bec8: 0x450101d5  bc1t        . + 4 + (0x1D5 << 2)
    ctx->pc = 0x13BEC8u;
    {
        const bool branch_taken_0x13bec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bec8) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BED0u;
label_13bed0:
    // 0x13bed0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13bed4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13bed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13bed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bedc: 0xc4213038  lwc1        $f1, 0x3038($at)
    ctx->pc = 0x13bedcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bee0: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13bee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13bee4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x13bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bee8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13bee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13beec: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13beecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bef0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13BEF0u;
    {
        const bool branch_taken_0x13bef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bef0) {
            ctx->pc = 0x13BF18u;
            goto label_13bf18;
        }
    }
    ctx->pc = 0x13BEF8u;
    // 0x13bef8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x13bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13befc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13befcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13BF00u;
    {
        const bool branch_taken_0x13bf00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf00) {
            ctx->pc = 0x13BF18u;
            goto label_13bf18;
        }
    }
    ctx->pc = 0x13BF08u;
    // 0x13bf08: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x13bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bf0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf10: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
    ctx->pc = 0x13BF10u;
    {
        const bool branch_taken_0x13bf10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf10) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BF18u;
label_13bf18:
    // 0x13bf18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13bf1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13bf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf24: 0xc4213038  lwc1        $f1, 0x3038($at)
    ctx->pc = 0x13bf24u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bf28: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13bf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13bf2c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x13bf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bf30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13bf30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13bf34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13bf34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13BF38u;
    {
        const bool branch_taken_0x13bf38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf38) {
            ctx->pc = 0x13BF60u;
            goto label_13bf60;
        }
    }
    ctx->pc = 0x13BF40u;
    // 0x13bf40: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x13bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bf44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13BF48u;
    {
        const bool branch_taken_0x13bf48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf48) {
            ctx->pc = 0x13BF60u;
            goto label_13bf60;
        }
    }
    ctx->pc = 0x13BF50u;
    // 0x13bf50: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x13bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bf54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf58: 0x450101b1  bc1t        . + 4 + (0x1B1 << 2)
    ctx->pc = 0x13BF58u;
    {
        const bool branch_taken_0x13bf58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf58) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BF60u;
label_13bf60:
    // 0x13bf60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf64: 0x0  nop
    ctx->pc = 0x13bf64u;
    // NOP
    // 0x13bf68: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13bf68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf6c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x13BF6Cu;
    {
        const bool branch_taken_0x13bf6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF6Cu;
        // 0x13bf70: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf6c) {
            ctx->pc = 0x13BFB8u;
            goto label_13bfb8;
        }
    }
    ctx->pc = 0x13BF74u;
    // 0x13bf74: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bf78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13bf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf7c: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13bf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13bf80: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13bf84: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13BF84u;
    SET_GPR_U32(ctx, 31, 0x13BF8Cu);
    ctx->pc = 0x13BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF84u;
    // 0x13bf88: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13BF84u, 0x13BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF8Cu;
label_13bf8c:
    // 0x13bf8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13bf90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bf94: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13bf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13bf98: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13bf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13bf9c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bfa0: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13bfa4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13bfa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13bfa8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13bfa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13bfac: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13bfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13bfb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13BFB0u;
    {
        const bool branch_taken_0x13bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFB0u;
        // 0x13bfb4: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfb0) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BFB8u;
label_13bfb8:
    // 0x13bfb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13bfbc: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13bfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13bfc0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x13bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13bfc4: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x13bfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13bfc8: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13bfc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13bfcc: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13BFCCu;
    SET_GPR_U32(ctx, 31, 0x13BFD4u);
    ctx->pc = 0x13BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFCCu;
    // 0x13bfd0: 0x34483040  ori         $t0, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13BFCCu, 0x13BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFD4u;
label_13bfd4:
    // 0x13bfd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13bfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bfd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFD8u;
    {
        const bool branch_taken_0x13bfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfd8) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BFE0u;
    // 0x13bfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bfe4: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x13BFE4u;
    {
        const bool branch_taken_0x13bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFE4u;
        // 0x13bfe8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfe4) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13BFECu;
    // 0x13bfec: 0x0  nop
    ctx->pc = 0x13bfecu;
    // NOP
label_13bff0:
    // 0x13bff0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13bff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bff4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13BFF4u;
    {
        const bool branch_taken_0x13bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFF4u;
        // 0x13bff8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bff4) {
            ctx->pc = 0x13C0B8u;
            goto label_13c0b8;
        }
    }
    ctx->pc = 0x13BFFCu;
    // 0x13bffc: 0x0  nop
    ctx->pc = 0x13bffcu;
    // NOP
label_13c000:
    // 0x13c000: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13c004: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x13c004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c008: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13c00c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c010: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13c014: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c018: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c01c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c020: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c024: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c028: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13c028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13c02c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c030: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c034: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c038: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13c038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c03c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13c03cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c040: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c044: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13c044u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c048: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x13c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c04c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c050: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c054: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c058: 0x34633070  ori         $v1, $v1, 0x3070
    ctx->pc = 0x13c058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13c05c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c060: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13c064: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13c068: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c06c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c06cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c070: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c070u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c074: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13c078: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13c07c: 0xc041460  jal         func_105180
    ctx->pc = 0x13C07Cu;
    SET_GPR_U32(ctx, 31, 0x13C084u);
    ctx->pc = 0x13C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C07Cu;
    // 0x13c080: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13C07Cu, 0x13C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C084u;
label_13c084:
    // 0x13c084: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13c084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13c088: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13C088u;
    SET_GPR_U32(ctx, 31, 0x13C090u);
    ctx->pc = 0x13C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C088u;
    // 0x13c08c: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13C088u, 0x13C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C090u;
label_13c090:
    // 0x13c090: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13c090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c094: 0x0  nop
    ctx->pc = 0x13c094u;
    // NOP
    // 0x13c098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c09c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13C09Cu;
    {
        const bool branch_taken_0x13c09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c09c) {
            ctx->pc = 0x13C0B0u;
            goto label_13c0b0;
        }
    }
    ctx->pc = 0x13C0A4u;
    // 0x13c0a4: 0x64140003  daddiu      $s4, $zero, 0x3
    ctx->pc = 0x13c0a4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x13c0a8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c0ac: 0x0  nop
    ctx->pc = 0x13c0acu;
    // NOP
label_13c0b0:
    // 0x13c0b0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x13c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13c0b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x13c0b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c0b8:
    // 0x13c0b8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x13c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c0bc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13c0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13c0c0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13C0C0u;
    {
        const bool branch_taken_0x13c0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0c0) {
            ctx->pc = 0x13C000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c000;
        }
    }
    ctx->pc = 0x13C0C8u;
    // 0x13c0c8: 0x16c0001b  bnez        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x13C0C8u;
    {
        const bool branch_taken_0x13c0c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0c8) {
            ctx->pc = 0x13C138u;
            goto label_13c138;
        }
    }
    ctx->pc = 0x13C0D0u;
    // 0x13c0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c0d4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x13c0d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13c0d8: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13c0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0dc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13C0DCu;
    {
        const bool branch_taken_0x13c0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0DCu;
        // 0x13c0e0: 0xa7a200c0  sh          $v0, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0dc) {
            ctx->pc = 0x13C110u;
            goto label_13c110;
        }
    }
    ctx->pc = 0x13C0E4u;
    // 0x13c0e4: 0x4614d041  sub.s       $f1, $f26, $f20
    ctx->pc = 0x13c0e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[20]);
    // 0x13c0e8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13c0ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c0f0: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x13c0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13c0f4: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13c0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13c0f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c0fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C0FCu;
    SET_GPR_U32(ctx, 31, 0x13C104u);
    ctx->pc = 0x13C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0FCu;
    // 0x13c100: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C0FCu, 0x13C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C104u;
label_13c104:
    // 0x13c104: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x13C104u;
    {
        const bool branch_taken_0x13c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c104) {
            ctx->pc = 0x13C5B8u;
            goto label_13c5b8;
        }
    }
    ctx->pc = 0x13C10Cu;
    // 0x13c10c: 0x0  nop
    ctx->pc = 0x13c10cu;
    // NOP
label_13c110:
    // 0x13c110: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13c114: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13c114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13c118: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c11c: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13c11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13c120: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x13c120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13c124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c128: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C128u;
    SET_GPR_U32(ctx, 31, 0x13C130u);
    ctx->pc = 0x13C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C128u;
    // 0x13c12c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C128u, 0x13C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C130u;
label_13c130:
    // 0x13c130: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x13C130u;
    {
        const bool branch_taken_0x13c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c130) {
            ctx->pc = 0x13C5B8u;
            goto label_13c5b8;
        }
    }
    ctx->pc = 0x13C138u;
label_13c138:
    // 0x13c138: 0x3c024f80  lui         $v0, 0x4F80
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20352 << 16));
    // 0x13c13c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13c13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13c140: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13c140u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c144: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x13C144u;
    {
        const bool branch_taken_0x13c144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C144u;
        // 0x13c148: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c144) {
            ctx->pc = 0x13C548u;
            goto label_13c548;
        }
    }
    ctx->pc = 0x13C14Cu;
    // 0x13c14c: 0x0  nop
    ctx->pc = 0x13c14cu;
    // NOP
label_13c150:
    // 0x13c150: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x13c150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c154: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x13c154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x13c158: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13c158u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13c15c: 0x246348e8  addiu       $v1, $v1, 0x48E8
    ctx->pc = 0x13c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18664));
    // 0x13c160: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c168: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13c168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13c16c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c170: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c178: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c17c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c180: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c184: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13c184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13c188: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c18c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c190: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c194: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13c194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c198: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13c198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c19c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c1a0: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13c1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c1a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1a8: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13c1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13c1ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1b0: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13c1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13c1b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1b8: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13C1B8u;
    SET_GPR_U32(ctx, 31, 0x13C1C0u);
    ctx->pc = 0x13C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C1B8u;
    // 0x13c1bc: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13C1B8u, 0x13C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1C0u;
label_13c1c0:
    // 0x13c1c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1c4: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13c1c4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13c1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c1cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1d0: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13c1d0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c1d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1d8: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13c1d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c1dc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13c1dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13c1e0: 0x46020d80  add.s       $f22, $f1, $f2
    ctx->pc = 0x13c1e0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13c1e4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x13c1e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c1e8: 0x450100d3  bc1t        . + 4 + (0xD3 << 2)
    ctx->pc = 0x13C1E8u;
    {
        const bool branch_taken_0x13c1e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1E8u;
        // 0x13c1ec: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1e8) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C1F0u;
    // 0x13c1f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c1f4: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13c1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13c1f8: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c1fc: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c208: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c20c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c210: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c214: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c218: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c21c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c220: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c224: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13c224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13c228: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c22c: 0x34453050  ori         $a1, $v0, 0x3050
    ctx->pc = 0x13c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13c230: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c234: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13C234u;
    SET_GPR_U32(ctx, 31, 0x13C23Cu);
    ctx->pc = 0x13C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C234u;
    // 0x13c238: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13C234u, 0x13C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C23Cu;
label_13c23c:
    // 0x13c23c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c240: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13c240u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13c244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c24c: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13c24cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c250: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c254: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13c254u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c258: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13c258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13c25c: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x13c25cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13c260: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x13c260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c264: 0x450100b4  bc1t        . + 4 + (0xB4 << 2)
    ctx->pc = 0x13C264u;
    {
        const bool branch_taken_0x13c264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c264) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C26Cu;
    // 0x13c26c: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x13c26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c270: 0x450100b1  bc1t        . + 4 + (0xB1 << 2)
    ctx->pc = 0x13C270u;
    {
        const bool branch_taken_0x13c270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c270) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C278u;
    // 0x13c278: 0x0  nop
    ctx->pc = 0x13c278u;
    // NOP
    // 0x13c27c: 0x0  nop
    ctx->pc = 0x13c27cu;
    // NOP
    // 0x13c280: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x13c280u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
    // 0x13c284: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c288: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13c288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13c28c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C28Cu;
    SET_GPR_U32(ctx, 31, 0x13C294u);
    ctx->pc = 0x13C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C28Cu;
    // 0x13c290: 0x34453060  ori         $a1, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C28Cu, 0x13C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C294u;
label_13c294:
    // 0x13c294: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c298: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c29c: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13c29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13c2a0: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13c2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13c2a4: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c2a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c2ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c2b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c2b4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c2b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c2b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c2bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c2bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c2c0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c2c4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c2c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c2cc: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13c2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13c2d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c2d4: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13C2D4u;
    SET_GPR_U32(ctx, 31, 0x13C2DCu);
    ctx->pc = 0x13C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2D4u;
    // 0x13c2d8: 0x34453030  ori         $a1, $v0, 0x3030 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13C2D4u, 0x13C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2DCu;
label_13c2dc:
    // 0x13c2dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13c2dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13c2e0: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13c2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c2e4: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x13C2E4u;
    {
        const bool branch_taken_0x13c2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c2e4) {
            ctx->pc = 0x13C3F8u;
            goto label_13c3f8;
        }
    }
    ctx->pc = 0x13C2ECu;
    // 0x13c2ec: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13c2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c2f0: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x13C2F0u;
    {
        const bool branch_taken_0x13c2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c2f0) {
            ctx->pc = 0x13C3F8u;
            goto label_13c3f8;
        }
    }
    ctx->pc = 0x13C2F8u;
    // 0x13c2f8: 0x46160504  c1          0x160504
    ctx->pc = 0x13c2f8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13c2fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c300: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c304: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c308: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13c308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c30c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c310: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13c314: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13c318: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13c31c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c31cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c320: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c328: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c32c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c330: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13C330u;
    SET_GPR_U32(ctx, 31, 0x13C338u);
    ctx->pc = 0x13C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C330u;
    // 0x13c334: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13C330u, 0x13C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C338u;
label_13c338:
    // 0x13c338: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c33c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c340: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13c340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13c344: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13c344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13c348: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c34c: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13c350: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003040u));
    // 0x13c354: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13c358: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c35c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c360: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c364: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c368: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c36c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x13C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C36Cu;
    // 0x13c370: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13C36Cu, 0x13C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C374u;
label_13c374:
    // 0x13c374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13c374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c378: 0x0  nop
    ctx->pc = 0x13c378u;
    // NOP
    // 0x13c37c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c380: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x13C380u;
    {
        const bool branch_taken_0x13c380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c380) {
            ctx->pc = 0x13C3B8u;
            goto label_13c3b8;
        }
    }
    ctx->pc = 0x13C388u;
    // 0x13c388: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x13c388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c38c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13C38Cu;
    {
        const bool branch_taken_0x13c38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C38Cu;
        // 0x13c390: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c38c) {
            ctx->pc = 0x13C3B0u;
            goto label_13c3b0;
        }
    }
    ctx->pc = 0x13C394u;
    // 0x13c394: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c398: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c39c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13c39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c3a0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C3A0u;
    SET_GPR_U32(ctx, 31, 0x13C3A8u);
    ctx->pc = 0x13C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3A0u;
    // 0x13c3a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C3A0u, 0x13C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3A8u;
label_13c3a8:
    // 0x13c3a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3A8u;
    {
        const bool branch_taken_0x13c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3a8) {
            ctx->pc = 0x13C3C0u;
            goto label_13c3c0;
        }
    }
    ctx->pc = 0x13C3B0u;
label_13c3b0:
    // 0x13c3b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3B0u;
    {
        const bool branch_taken_0x13c3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3B0u;
        // 0x13c3b4: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3b0) {
            ctx->pc = 0x13C3C0u;
            goto label_13c3c0;
        }
    }
    ctx->pc = 0x13C3B8u;
label_13c3b8:
    // 0x13c3b8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13c3b8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13c3bc: 0x0  nop
    ctx->pc = 0x13c3bcu;
    // NOP
label_13c3c0:
    // 0x13c3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c3c4: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x13c3c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c3c8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c3cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c3d0: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13c3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13c3d4: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x13c3d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13c3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3dc: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x13c3dcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x13c3e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c3e4: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c3e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13c3e8u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13c3ec: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13c3ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13c3f0: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13c3f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13c3f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13c3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13c3f8:
    // 0x13c3f8: 0x16c0004f  bnez        $s6, . + 4 + (0x4F << 2)
    ctx->pc = 0x13C3F8u;
    {
        const bool branch_taken_0x13c3f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3F8u;
        // 0x13c3fc: 0x141c3c  dsll32      $v1, $s4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3f8) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C400u;
    // 0x13c400: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13c404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13c408: 0x34443030  ori         $a0, $v0, 0x3030
    ctx->pc = 0x13c408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c40c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c410: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13c414: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13C414u;
    SET_GPR_U32(ctx, 31, 0x13C41Cu);
    ctx->pc = 0x13C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C414u;
    // 0x13c418: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13C414u, 0x13C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C41Cu;
label_13c41c:
    // 0x13c41c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13c41cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13c420: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13c420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c424: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x13C424u;
    {
        const bool branch_taken_0x13c424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c424) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C42Cu;
    // 0x13c42c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13c42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c430: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x13C430u;
    {
        const bool branch_taken_0x13c430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c430) {
            ctx->pc = 0x13C538u;
            goto label_13c538;
        }
    }
    ctx->pc = 0x13C438u;
    // 0x13c438: 0x46160504  c1          0x160504
    ctx->pc = 0x13c438u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13c43c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c440: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c444: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c448: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13c448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c44c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c450: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c450u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c458: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c45c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c460: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c464: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c468: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c46c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c470: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c474: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c478: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c47c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13C47Cu;
    SET_GPR_U32(ctx, 31, 0x13C484u);
    ctx->pc = 0x13C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C47Cu;
    // 0x13c480: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13C47Cu, 0x13C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C484u;
label_13c484:
    // 0x13c484: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c488: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c48c: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13c48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13c490: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13c494: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c498: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c498u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c49c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c4a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c4a4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c4a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c4ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c4acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c4b0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c4b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c4b4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c4b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c4bc: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c4c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c4c4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13C4C4u;
    SET_GPR_U32(ctx, 31, 0x13C4CCu);
    ctx->pc = 0x13C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4C4u;
    // 0x13c4c8: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13C4C4u, 0x13C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4CCu;
label_13c4cc:
    // 0x13c4cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13c4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c4d0: 0x0  nop
    ctx->pc = 0x13c4d0u;
    // NOP
    // 0x13c4d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c4d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13C4D8u;
    {
        const bool branch_taken_0x13c4d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4D8u;
        // 0x13c4dc: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4d8) {
            ctx->pc = 0x13C500u;
            goto label_13c500;
        }
    }
    ctx->pc = 0x13C4E0u;
    // 0x13c4e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c4e4: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c4e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13c4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c4ec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C4ECu;
    SET_GPR_U32(ctx, 31, 0x13C4F4u);
    ctx->pc = 0x13C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4ECu;
    // 0x13c4f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C4ECu, 0x13C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4F4u;
label_13c4f4:
    // 0x13c4f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4F4u;
    {
        const bool branch_taken_0x13c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4f4) {
            ctx->pc = 0x13C508u;
            goto label_13c508;
        }
    }
    ctx->pc = 0x13C4FCu;
    // 0x13c4fc: 0x0  nop
    ctx->pc = 0x13c4fcu;
    // NOP
label_13c500:
    // 0x13c500: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13c500u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13c504: 0x0  nop
    ctx->pc = 0x13c504u;
    // NOP
label_13c508:
    // 0x13c508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c50c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x13c50cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c510: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13c510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13c514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c518: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13c51c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c520: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c524: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13c524u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13c528: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13c528u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13c52c: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13c52cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13c530: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13c530u;
    runtime->Store128(rdram, ctx, 0x700030C0u, GPR_VEC(ctx, 2));
    // 0x13c534: 0x0  nop
    ctx->pc = 0x13c534u;
    // NOP
label_13c538:
    // 0x13c538: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13c53c: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x13c53cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13c540: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x13c540u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x13c544: 0x0  nop
    ctx->pc = 0x13c544u;
    // NOP
label_13c548:
    // 0x13c548: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x13c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x13c54c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c54cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c550: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13c550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13c554: 0x1440fefe  bnez        $v0, . + 4 + (-0x102 << 2)
    ctx->pc = 0x13C554u;
    {
        const bool branch_taken_0x13c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c554) {
            ctx->pc = 0x13C150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c150;
        }
    }
    ctx->pc = 0x13C55Cu;
    // 0x13c55c: 0x12c00030  beqz        $s6, . + 4 + (0x30 << 2)
    ctx->pc = 0x13C55Cu;
    {
        const bool branch_taken_0x13c55c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C55Cu;
        // 0x13c560: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c55c) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13C564u;
    // 0x13c564: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13c564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c568: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c56c: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x13c56cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c570: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13c570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13c574: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13c574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x13c578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c57c: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13c57cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13c580: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c584: 0x34463080  ori         $a2, $v0, 0x3080
    ctx->pc = 0x13c584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c588: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c58c: 0x344330c0  ori         $v1, $v0, 0x30C0
    ctx->pc = 0x13c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12480);
    // 0x13c590: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13c590u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x700030C0u));
    // 0x13c594: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x13c594u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13c598: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c59c: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13c59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13c5a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c5a4: 0x34453080  ori         $a1, $v0, 0x3080
    ctx->pc = 0x13c5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13c5a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c5a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13c5ac: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13C5ACu;
    SET_GPR_U32(ctx, 31, 0x13C5B4u);
    ctx->pc = 0x13C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5ACu;
    // 0x13c5b0: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13C5ACu, 0x13C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5B4u;
label_13c5b4:
    // 0x13c5b4: 0x0  nop
    ctx->pc = 0x13c5b4u;
    // NOP
label_13c5b8:
    // 0x13c5b8: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x13c5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c5bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13C5BCu;
    {
        const bool branch_taken_0x13c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5BCu;
        // 0x13c5c0: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5bc) {
            ctx->pc = 0x13C620u;
            goto label_13c620;
        }
    }
    ctx->pc = 0x13C5C4u;
    // 0x13c5c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c5c8: 0x34643030  ori         $a0, $v1, 0x3030
    ctx->pc = 0x13c5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12336);
    // 0x13c5cc: 0x344330b0  ori         $v1, $v0, 0x30B0
    ctx->pc = 0x13c5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13c5d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c5d4: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13c5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c5d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c5d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x700030B0u));
    // 0x13c5dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c5dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13c5e0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13c5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c5e4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c5e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13c5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c5f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c5f4: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x13c5f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c5f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c5fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c600: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x13c600u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c604: 0xe420303c  swc1        $f0, 0x303C($at)
    ctx->pc = 0x13c604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000303Cu, bits); }
    // 0x13c608: 0x8e630fbc  lw          $v1, 0xFBC($s3)
    ctx->pc = 0x13c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x13c60c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13c610: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c614: 0xae620fbc  sw          $v0, 0xFBC($s3)
    ctx->pc = 0x13c614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4028), GPR_U32(ctx, 2));
    // 0x13c618: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x13c618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13c61c: 0x7e620f50  sq          $v0, 0xF50($s3)
    ctx->pc = 0x13c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 3920), GPR_VEC(ctx, 2));
label_13c620:
    // 0x13c620: 0x87a200e0  lh          $v0, 0xE0($sp)
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c624: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x13c628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c62c: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x13c62cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
label_13c630:
    // 0x13c630: 0x87a200e0  lh          $v0, 0xE0($sp)
    ctx->pc = 0x13c630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13c634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c638: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13c63c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c63cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c640: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13c644: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13c648: 0x944208dc  lhu         $v0, 0x8DC($v0)
    ctx->pc = 0x13c648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x13c64c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13c64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c650: 0x1440fd91  bnez        $v0, . + 4 + (-0x26F << 2)
    ctx->pc = 0x13C650u;
    {
        const bool branch_taken_0x13c650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c650) {
            ctx->pc = 0x13BC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc98;
        }
    }
    ctx->pc = 0x13C658u;
label_13c658:
    // 0x13c658: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c65c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x13c65cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13c660: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x13c660u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x13c664: 0x0  nop
    ctx->pc = 0x13c664u;
    // NOP
label_13c668:
    // 0x13c668: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13c66c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c66cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c670: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x13c670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13c674: 0x1440fd7c  bnez        $v0, . + 4 + (-0x284 << 2)
    ctx->pc = 0x13C674u;
    {
        const bool branch_taken_0x13c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c674) {
            ctx->pc = 0x13BC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc68;
        }
    }
    ctx->pc = 0x13C67Cu;
    // 0x13c67c: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x13c67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C680u;
    {
        const bool branch_taken_0x13c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C680u;
        // 0x13c684: 0x15143c  dsll32      $v0, $s5, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c680) {
            ctx->pc = 0x13C698u;
            goto label_13c698;
        }
    }
    ctx->pc = 0x13C688u;
    // 0x13c688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c68c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x13c68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13c690: 0x1440fd6f  bnez        $v0, . + 4 + (-0x291 << 2)
    ctx->pc = 0x13C690u;
    {
        const bool branch_taken_0x13c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c690) {
            ctx->pc = 0x13BC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc50;
        }
    }
    ctx->pc = 0x13C698u;
label_13c698:
    // 0x13c698: 0x93a200fb  lbu         $v0, 0xFB($sp)
    ctx->pc = 0x13c698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 251)));
    // 0x13c69c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C69Cu;
    {
        const bool branch_taken_0x13c69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c69c) {
            ctx->pc = 0x13C6B0u;
            goto label_13c6b0;
        }
    }
    ctx->pc = 0x13C6A4u;
    // 0x13c6a4: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x13c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c6a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c6ac: 0xe4203034  swc1        $f0, 0x3034($at)
    ctx->pc = 0x13c6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003034u, bits); }
label_13c6b0:
    // 0x13c6b0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x13c6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x13c6b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13C6B4u;
    {
        const bool branch_taken_0x13c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6b4) {
            ctx->pc = 0x13C730u;
            goto label_13c730;
        }
    }
    ctx->pc = 0x13C6BCu;
    // 0x13c6bc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13c6c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13c6c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c6c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13C6C8u;
    {
        const bool branch_taken_0x13c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6c8) {
            ctx->pc = 0x13C730u;
            goto label_13c730;
        }
    }
    ctx->pc = 0x13C6D0u;
    // 0x13c6d0: 0xc66c0fac  lwc1        $f12, 0xFAC($s3)
    ctx->pc = 0x13c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c6d4: 0x8e690fbc  lw          $t1, 0xFBC($s3)
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x13c6d8: 0x8e6a0fc0  lw          $t2, 0xFC0($s3)
    ctx->pc = 0x13c6d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
    // 0x13c6dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c6e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x13c6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6ec: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13c6ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c6f0: 0xc04f4e4  jal         func_13D390
    ctx->pc = 0x13C6F0u;
    SET_GPR_U32(ctx, 31, 0x13C6F8u);
    ctx->pc = 0x13C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6F0u;
    // 0x13c6f4: 0x34483040  ori         $t0, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D390u, 0x13C6F0u, 0x13C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6F8u;
label_13c6f8:
    // 0x13c6f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c6fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C6FCu;
    {
        const bool branch_taken_0x13c6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c6fc) {
            ctx->pc = 0x13C720u;
            goto label_13c720;
        }
    }
    ctx->pc = 0x13C704u;
    // 0x13c704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c708: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c70c: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c710: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13c710u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13c714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C714u;
    {
        const bool branch_taken_0x13c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C714u;
        // 0x13c718: 0x7ee20000  sq          $v0, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c714) {
            ctx->pc = 0x13C748u;
            goto label_13c748;
        }
    }
    ctx->pc = 0x13C71Cu;
    // 0x13c71c: 0x0  nop
    ctx->pc = 0x13c71cu;
    // NOP
label_13c720:
    // 0x13c720: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x13c720u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13c724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C724u;
    {
        const bool branch_taken_0x13c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C724u;
        // 0x13c728: 0xa7a200d0  sh          $v0, 0xD0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c724) {
            ctx->pc = 0x13C748u;
            goto label_13c748;
        }
    }
    ctx->pc = 0x13C72Cu;
    // 0x13c72c: 0x0  nop
    ctx->pc = 0x13c72cu;
    // NOP
label_13c730:
    // 0x13c730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c734: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c738: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c73c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13c73cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13c740: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x13c740u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x13c744: 0x0  nop
    ctx->pc = 0x13c744u;
    // NOP
label_13c748:
    // 0x13c748: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x13c748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c74c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C74Cu;
    {
        const bool branch_taken_0x13c74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C74Cu;
        // 0x13c750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c74c) {
            ctx->pc = 0x13C760u;
            goto label_13c760;
        }
    }
    ctx->pc = 0x13C754u;
    // 0x13c754: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C754u;
    {
        const bool branch_taken_0x13c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c754) {
            ctx->pc = 0x13C768u;
            goto label_13c768;
        }
    }
    ctx->pc = 0x13C75Cu;
    // 0x13c75c: 0x0  nop
    ctx->pc = 0x13c75cu;
    // NOP
label_13c760:
    // 0x13c760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c764: 0x0  nop
    ctx->pc = 0x13c764u;
    // NOP
label_13c768:
    // 0x13c768: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x13c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c76c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x13c76cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13c770: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x13c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x13c774: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x13c774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c778: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x13c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x13c77c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x13c77cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c780: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x13c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x13c784: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13c784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c788: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x13c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13c78c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13c78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c790: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13c794: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x13c794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c798: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13c798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13c79c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13c79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c7a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13c7a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13c7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13c7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7ACu;
        // 0x13c7b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C7B4u;
}
