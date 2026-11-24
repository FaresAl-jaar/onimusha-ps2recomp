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

// Function: sub_00380B60
// Address: 0x380b60 - 0x381028
void sub_00380B60_0x380b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380B60_0x380b60");
#endif

    switch (ctx->pc) {
        case 0x380b98u: goto label_380b98;
        case 0x380bb4u: goto label_380bb4;
        case 0x380c8cu: goto label_380c8c;
        case 0x380c9cu: goto label_380c9c;
        case 0x380d1cu: goto label_380d1c;
        case 0x380dc0u: goto label_380dc0;
        case 0x380dd0u: goto label_380dd0;
        case 0x380df8u: goto label_380df8;
        case 0x380f14u: goto label_380f14;
        case 0x380f8cu: goto label_380f8c;
        case 0x380fccu: goto label_380fcc;
        case 0x380fd0u: goto label_380fd0;
        case 0x380fd8u: goto label_380fd8;
        default: break;
    }

    ctx->pc = 0x380b60u;

    // 0x380b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x380b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x380b64: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x380b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x380b68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x380b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x380b6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x380b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x380b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x380b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x380b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380b78: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x380b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x380b7c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x380B7Cu;
    {
        const bool branch_taken_0x380b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x380B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B7Cu;
        // 0x380b80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b7c) {
            ctx->pc = 0x380BA0u;
            goto label_380ba0;
        }
    }
    ctx->pc = 0x380B84u;
    // 0x380b84: 0x8e452bb0  lw          $a1, 0x2BB0($s2)
    ctx->pc = 0x380b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11184)));
    // 0x380b88: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x380b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x380b8c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x380b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x380b90: 0xc0c9630  jal         func_3258C0
    ctx->pc = 0x380B90u;
    SET_GPR_U32(ctx, 31, 0x380B98u);
    ctx->pc = 0x380B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B90u;
    // 0x380b94: 0x26462ba0  addiu       $a2, $s2, 0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258C0u, 0x380B90u, 0x380B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B98u;
label_380b98:
    // 0x380b98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x380B98u;
    {
        const bool branch_taken_0x380b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380b98) {
            ctx->pc = 0x380BB8u;
            goto label_380bb8;
        }
    }
    ctx->pc = 0x380BA0u;
label_380ba0:
    // 0x380ba0: 0x8e452bb0  lw          $a1, 0x2BB0($s2)
    ctx->pc = 0x380ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11184)));
    // 0x380ba4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x380ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x380ba8: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x380ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x380bac: 0xc0c9630  jal         func_3258C0
    ctx->pc = 0x380BACu;
    SET_GPR_U32(ctx, 31, 0x380BB4u);
    ctx->pc = 0x380BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BACu;
    // 0x380bb0: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258C0u, 0x380BACu, 0x380BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BB4u;
label_380bb4:
    // 0x380bb4: 0x0  nop
    ctx->pc = 0x380bb4u;
    // NOP
label_380bb8:
    // 0x380bb8: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x380bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x380bbc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x380bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380bc0: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x380BC0u;
    {
        const bool branch_taken_0x380bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x380bc0) {
            ctx->pc = 0x380DE0u;
            goto label_380de0;
        }
    }
    ctx->pc = 0x380BC8u;
    // 0x380bc8: 0x92442bb4  lbu         $a0, 0x2BB4($s2)
    ctx->pc = 0x380bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11188)));
    // 0x380bcc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x380bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x380bd0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x380BD0u;
    {
        const bool branch_taken_0x380bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x380BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BD0u;
        // 0x380bd4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380bd0) {
            ctx->pc = 0x380CC0u;
            goto label_380cc0;
        }
    }
    ctx->pc = 0x380BD8u;
    // 0x380bd8: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x380BD8u;
    {
        const bool branch_taken_0x380bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x380bd8) {
            ctx->pc = 0x380CB0u;
            goto label_380cb0;
        }
    }
    ctx->pc = 0x380BE0u;
    // 0x380be0: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x380be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x380be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x380be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x380be8: 0xa2432bb4  sb          $v1, 0x2BB4($s2)
    ctx->pc = 0x380be8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11188), (uint8_t)GPR_U32(ctx, 3));
    // 0x380bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x380becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380bf0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x380bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x380bf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x380bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380bfc: 0x0  nop
    ctx->pc = 0x380bfcu;
    // NOP
    // 0x380c00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x380c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x380c04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380c08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380C08u;
    {
        const bool branch_taken_0x380c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380c08) {
            ctx->pc = 0x380C20u;
            goto label_380c20;
        }
    }
    ctx->pc = 0x380C10u;
    // 0x380c10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380c14: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x380c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x380c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380C18u;
    {
        const bool branch_taken_0x380c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C18u;
        // 0x380c1c: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c18) {
            ctx->pc = 0x380C3Cu;
            goto label_380c3c;
        }
    }
    ctx->pc = 0x380C20u;
label_380c20:
    // 0x380c20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380c20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380c24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x380c28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380c2c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x380c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x380c30: 0x0  nop
    ctx->pc = 0x380c30u;
    // NOP
    // 0x380c34: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x380c34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x380c38: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x380c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_380c3c:
    // 0x380c3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x380c40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x380c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380c48: 0x0  nop
    ctx->pc = 0x380c48u;
    // NOP
    // 0x380c4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x380c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x380c50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380c54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380C54u;
    {
        const bool branch_taken_0x380c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380c54) {
            ctx->pc = 0x380C6Cu;
            goto label_380c6c;
        }
    }
    ctx->pc = 0x380C5Cu;
    // 0x380c5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380c60: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x380c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x380c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x380C64u;
    {
        const bool branch_taken_0x380c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380c64) {
            ctx->pc = 0x380C84u;
            goto label_380c84;
        }
    }
    ctx->pc = 0x380C6Cu;
label_380c6c:
    // 0x380c6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380c6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380c70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x380c74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380c78: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x380c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x380c7c: 0x0  nop
    ctx->pc = 0x380c7cu;
    // NOP
    // 0x380c80: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x380c80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_380c84:
    // 0x380c84: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380C84u;
    SET_GPR_U32(ctx, 31, 0x380C8Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380C84u, 0x380C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C8Cu;
label_380c8c:
    // 0x380c8c: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x380c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x380c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c94: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x380C94u;
    SET_GPR_U32(ctx, 31, 0x380C9Cu);
    ctx->pc = 0x380C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C94u;
    // 0x380c98: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x380C94u, 0x380C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C9Cu;
label_380c9c:
    // 0x380c9c: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x380c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x380ca0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x380ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x380ca4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x380ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x380ca8: 0xa6432bb6  sh          $v1, 0x2BB6($s2)
    ctx->pc = 0x380ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11190), (uint16_t)GPR_U32(ctx, 3));
    // 0x380cac: 0x0  nop
    ctx->pc = 0x380cacu;
    // NOP
label_380cb0:
    // 0x380cb0: 0x92432bb4  lbu         $v1, 0x2BB4($s2)
    ctx->pc = 0x380cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11188)));
    // 0x380cb4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x380cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x380cb8: 0xa2432bb4  sb          $v1, 0x2BB4($s2)
    ctx->pc = 0x380cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11188), (uint8_t)GPR_U32(ctx, 3));
    // 0x380cbc: 0x0  nop
    ctx->pc = 0x380cbcu;
    // NOP
label_380cc0:
    // 0x380cc0: 0x92432bb4  lbu         $v1, 0x2BB4($s2)
    ctx->pc = 0x380cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11188)));
    // 0x380cc4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x380cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x380cc8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x380CC8u;
    {
        const bool branch_taken_0x380cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x380cc8) {
            ctx->pc = 0x380DE0u;
            goto label_380de0;
        }
    }
    ctx->pc = 0x380CD0u;
    // 0x380cd0: 0x96432bb6  lhu         $v1, 0x2BB6($s2)
    ctx->pc = 0x380cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11190)));
    // 0x380cd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x380CD4u;
    {
        const bool branch_taken_0x380cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x380cd4) {
            ctx->pc = 0x380CE8u;
            goto label_380ce8;
        }
    }
    ctx->pc = 0x380CDCu;
    // 0x380cdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x380cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x380ce0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x380CE0u;
    {
        const bool branch_taken_0x380ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380CE0u;
        // 0x380ce4: 0xa6432bb6  sh          $v1, 0x2BB6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11190), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ce0) {
            ctx->pc = 0x380DE0u;
            goto label_380de0;
        }
    }
    ctx->pc = 0x380CE8u;
label_380ce8:
    // 0x380ce8: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x380ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x380cec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x380cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x380cf0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x380cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x380cf4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x380cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x380cf8: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x380cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x380cfc: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x380cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x380d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380d04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x380d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380d08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x380d08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380d0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x380d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x380d10: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x380d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x380d14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x380D14u;
    SET_GPR_U32(ctx, 31, 0x380D1Cu);
    ctx->pc = 0x380D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380D14u;
    // 0x380d18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x380D14u, 0x380D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380D1Cu;
label_380d1c:
    // 0x380d1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x380d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x380d20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x380d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x380d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x380d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380d28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x380d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380d30: 0x0  nop
    ctx->pc = 0x380d30u;
    // NOP
    // 0x380d34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x380d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x380d38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380d3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380D3Cu;
    {
        const bool branch_taken_0x380d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380d3c) {
            ctx->pc = 0x380D54u;
            goto label_380d54;
        }
    }
    ctx->pc = 0x380D44u;
    // 0x380d44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380d48: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x380d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x380d4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380D4Cu;
    {
        const bool branch_taken_0x380d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D4Cu;
        // 0x380d50: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d4c) {
            ctx->pc = 0x380D70u;
            goto label_380d70;
        }
    }
    ctx->pc = 0x380D54u;
label_380d54:
    // 0x380d54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380d54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380d58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x380d5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380d60: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x380d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x380d64: 0x0  nop
    ctx->pc = 0x380d64u;
    // NOP
    // 0x380d68: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x380d68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x380d6c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x380d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_380d70:
    // 0x380d70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x380d74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x380d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380d7c: 0x0  nop
    ctx->pc = 0x380d7cu;
    // NOP
    // 0x380d80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x380d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x380d84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380d88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380D88u;
    {
        const bool branch_taken_0x380d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380d88) {
            ctx->pc = 0x380DA0u;
            goto label_380da0;
        }
    }
    ctx->pc = 0x380D90u;
    // 0x380d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380d94: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x380d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x380d98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x380D98u;
    {
        const bool branch_taken_0x380d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380d98) {
            ctx->pc = 0x380DB8u;
            goto label_380db8;
        }
    }
    ctx->pc = 0x380DA0u;
label_380da0:
    // 0x380da0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380da4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x380da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380dac: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x380dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x380db0: 0x0  nop
    ctx->pc = 0x380db0u;
    // NOP
    // 0x380db4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x380db4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_380db8:
    // 0x380db8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380DB8u;
    SET_GPR_U32(ctx, 31, 0x380DC0u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380DB8u, 0x380DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DC0u;
label_380dc0:
    // 0x380dc0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x380dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x380dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380dc8: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x380DC8u;
    SET_GPR_U32(ctx, 31, 0x380DD0u);
    ctx->pc = 0x380DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DC8u;
    // 0x380dcc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x380DC8u, 0x380DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DD0u;
label_380dd0:
    // 0x380dd0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x380dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x380dd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x380dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x380dd8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x380dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x380ddc: 0xa6432bb6  sh          $v1, 0x2BB6($s2)
    ctx->pc = 0x380ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11190), (uint16_t)GPR_U32(ctx, 3));
label_380de0:
    // 0x380de0: 0x92432bb4  lbu         $v1, 0x2BB4($s2)
    ctx->pc = 0x380de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11188)));
    // 0x380de4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x380de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x380de8: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x380DE8u;
    {
        const bool branch_taken_0x380de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x380DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DE8u;
        // 0x380dec: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380de8) {
            ctx->pc = 0x380F38u;
            goto label_380f38;
        }
    }
    ctx->pc = 0x380DF0u;
    // 0x380df0: 0x24100200  addiu       $s0, $zero, 0x200
    ctx->pc = 0x380df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x380df4: 0x0  nop
    ctx->pc = 0x380df4u;
    // NOP
label_380df8:
    // 0x380df8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x380df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x380dfc: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x380dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x380e00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x380e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x380e04: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x380e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x380e08: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x380e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x380e0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x380e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x380e10: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x380e10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x380e14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x380e14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380e1c: 0x0  nop
    ctx->pc = 0x380e1cu;
    // NOP
    // 0x380e20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x380e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x380e24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380e28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380E28u;
    {
        const bool branch_taken_0x380e28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x380E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E28u;
        // 0x380e2c: 0x2625fff8  addiu       $a1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e28) {
            ctx->pc = 0x380E40u;
            goto label_380e40;
        }
    }
    ctx->pc = 0x380E30u;
    // 0x380e30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380e34: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380e38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380E38u;
    {
        const bool branch_taken_0x380e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E38u;
        // 0x380e3c: 0xa43018  mult        $a2, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e38) {
            ctx->pc = 0x380E5Cu;
            goto label_380e5c;
        }
    }
    ctx->pc = 0x380E40u;
label_380e40:
    // 0x380e40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380e44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x380e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x380e48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380e4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380e50: 0x0  nop
    ctx->pc = 0x380e50u;
    // NOP
    // 0x380e54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x380e58: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x380e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_380e5c:
    // 0x380e5c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x380e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x380e60: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x380e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x380e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380e68: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x380e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x380e6c: 0x96452bb8  lhu         $a1, 0x2BB8($s2)
    ctx->pc = 0x380e6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11192)));
    // 0x380e70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x380e70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380e74: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x380e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x380e78: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x380e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x380e7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x380e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x380e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380e84: 0x0  nop
    ctx->pc = 0x380e84u;
    // NOP
    // 0x380e88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380e8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x380E8Cu;
    {
        const bool branch_taken_0x380e8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x380E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E8Cu;
        // 0x380e90: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e8c) {
            ctx->pc = 0x380EA4u;
            goto label_380ea4;
        }
    }
    ctx->pc = 0x380E94u;
    // 0x380e94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380e98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380E9Cu;
    {
        const bool branch_taken_0x380e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E9Cu;
        // 0x380ea0: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e9c) {
            ctx->pc = 0x380EC0u;
            goto label_380ec0;
        }
    }
    ctx->pc = 0x380EA4u;
label_380ea4:
    // 0x380ea4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380ea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380ea8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x380ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x380eac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380eb0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380eb4: 0x0  nop
    ctx->pc = 0x380eb4u;
    // NOP
    // 0x380eb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x380ebc: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x380ebcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_380ec0:
    // 0x380ec0: 0x0  nop
    ctx->pc = 0x380ec0u;
    // NOP
    // 0x380ec4: 0x0  nop
    ctx->pc = 0x380ec4u;
    // NOP
    // 0x380ec8: 0x1810  mfhi        $v1
    ctx->pc = 0x380ec8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x380ecc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x380ECCu;
    {
        const bool branch_taken_0x380ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x380ecc) {
            ctx->pc = 0x380F18u;
            goto label_380f18;
        }
    }
    ctx->pc = 0x380ED4u;
    // 0x380ed4: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x380ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x380ed8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x380ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x380edc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x380edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x380ee0: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x380ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x380ee4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x380ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x380ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380eec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x380eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ef0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x380ef0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ef4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x380ef4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ef8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x380ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x380efc: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x380efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x380f00: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x380f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x380f04: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x380f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x380f08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x380f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x380f0c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x380F0Cu;
    SET_GPR_U32(ctx, 31, 0x380F14u);
    ctx->pc = 0x380F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F0Cu;
    // 0x380f10: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x380F0Cu, 0x380F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F14u;
label_380f14:
    // 0x380f14: 0x0  nop
    ctx->pc = 0x380f14u;
    // NOP
label_380f18:
    // 0x380f18: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x380f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x380f1c: 0x2e230030  sltiu       $v1, $s1, 0x30
    ctx->pc = 0x380f1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x380f20: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x380F20u;
    {
        const bool branch_taken_0x380f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x380F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F20u;
        // 0x380f24: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f20) {
            ctx->pc = 0x380DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380df8;
        }
    }
    ctx->pc = 0x380F28u;
    // 0x380f28: 0x96432bb8  lhu         $v1, 0x2BB8($s2)
    ctx->pc = 0x380f28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11192)));
    // 0x380f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x380f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x380f30: 0xa6432bb8  sh          $v1, 0x2BB8($s2)
    ctx->pc = 0x380f30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11192), (uint16_t)GPR_U32(ctx, 3));
    // 0x380f34: 0x0  nop
    ctx->pc = 0x380f34u;
    // NOP
label_380f38:
    // 0x380f38: 0x8e4429c0  lw          $a0, 0x29C0($s2)
    ctx->pc = 0x380f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x380f3c: 0x86432bba  lh          $v1, 0x2BBA($s2)
    ctx->pc = 0x380f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11194)));
    // 0x380f40: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x380f40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x380f44: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x380f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x380f48: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x380F48u;
    {
        const bool branch_taken_0x380f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x380f48) {
            ctx->pc = 0x381010u;
            goto label_381010;
        }
    }
    ctx->pc = 0x380F50u;
    // 0x380f50: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x380F50u;
    {
        const bool branch_taken_0x380f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x380f50) {
            ctx->pc = 0x380F98u;
            goto label_380f98;
        }
    }
    ctx->pc = 0x380F58u;
    // 0x380f58: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x380f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x380f5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x380f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x380f60: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x380f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x380f64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x380f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x380f68: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x380f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x380f6c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x380f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x380f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x380f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x380f78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f7c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x380f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x380f80: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x380f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x380f84: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x380F84u;
    SET_GPR_U32(ctx, 31, 0x380F8Cu);
    ctx->pc = 0x380F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F84u;
    // 0x380f88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x380F84u, 0x380F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F8Cu;
label_380f8c:
    // 0x380f8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x380F8Cu;
    {
        const bool branch_taken_0x380f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380f8c) {
            ctx->pc = 0x380FD0u;
            goto label_380fd0;
        }
    }
    ctx->pc = 0x380F94u;
    // 0x380f94: 0x0  nop
    ctx->pc = 0x380f94u;
    // NOP
label_380f98:
    // 0x380f98: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x380f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x380f9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x380f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x380fa0: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x380fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
    // 0x380fa4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x380fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x380fa8: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x380fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x380fac: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x380facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x380fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x380fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x380fb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fbc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x380fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x380fc0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x380fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x380fc4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x380FC4u;
    SET_GPR_U32(ctx, 31, 0x380FCCu);
    ctx->pc = 0x380FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380FC4u;
    // 0x380fc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x380FC4u, 0x380FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380FCCu;
label_380fcc:
    // 0x380fcc: 0x0  nop
    ctx->pc = 0x380fccu;
    // NOP
label_380fd0:
    // 0x380fd0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x380FD0u;
    SET_GPR_U32(ctx, 31, 0x380FD8u);
    ctx->pc = 0x380FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380FD0u;
    // 0x380fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x380FD0u, 0x380FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380FD8u;
label_380fd8:
    // 0x380fd8: 0x86432bba  lh          $v1, 0x2BBA($s2)
    ctx->pc = 0x380fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11194)));
    // 0x380fdc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x380fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x380fe0: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x380fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x380fe4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x380fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x380fe8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x380fe8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x380fec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x380fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380ff0: 0xa6432bba  sh          $v1, 0x2BBA($s2)
    ctx->pc = 0x380ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11194), (uint16_t)GPR_U32(ctx, 3));
    // 0x380ff4: 0x8e4429c0  lw          $a0, 0x29C0($s2)
    ctx->pc = 0x380ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x380ff8: 0x86432bba  lh          $v1, 0x2BBA($s2)
    ctx->pc = 0x380ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11194)));
    // 0x380ffc: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x380ffcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381000: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x381000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x381004: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x381004u;
    {
        const bool branch_taken_0x381004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x381004) {
            ctx->pc = 0x380FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380fd0;
        }
    }
    ctx->pc = 0x38100Cu;
    // 0x38100c: 0x0  nop
    ctx->pc = 0x38100cu;
    // NOP
label_381010:
    // 0x381010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x381010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381014: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x381014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381018: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x381018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38101c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38101cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381020: 0x3e00008  jr          $ra
    ctx->pc = 0x381020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381020u;
        // 0x381024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381028u;
}
