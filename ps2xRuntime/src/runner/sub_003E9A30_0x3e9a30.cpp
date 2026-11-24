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

// Function: sub_003E9A30
// Address: 0x3e9a30 - 0x3e9b90
void sub_003E9A30_0x3e9a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9A30_0x3e9a30");
#endif

    switch (ctx->pc) {
        case 0x3e9ad8u: goto label_3e9ad8;
        case 0x3e9ae8u: goto label_3e9ae8;
        case 0x3e9afcu: goto label_3e9afc;
        case 0x3e9b04u: goto label_3e9b04;
        case 0x3e9b14u: goto label_3e9b14;
        case 0x3e9b58u: goto label_3e9b58;
        case 0x3e9b68u: goto label_3e9b68;
        default: break;
    }

    ctx->pc = 0x3e9a30u;

    // 0x3e9a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e9a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e9a34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e9a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e9a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e9a40: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e9a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3e9a44: 0x10670040  beq         $v1, $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x3E9A44u;
    {
        const bool branch_taken_0x3e9a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A44u;
        // 0x3e9a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a44) {
            ctx->pc = 0x3E9B48u;
            goto label_3e9b48;
        }
    }
    ctx->pc = 0x3E9A4Cu;
    // 0x3e9a4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E9A4Cu;
    {
        const bool branch_taken_0x3e9a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9a4c) {
            ctx->pc = 0x3E9A60u;
            goto label_3e9a60;
        }
    }
    ctx->pc = 0x3E9A54u;
    // 0x3e9a54: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3E9A54u;
    {
        const bool branch_taken_0x3e9a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9a54) {
            ctx->pc = 0x3E9B80u;
            goto label_3e9b80;
        }
    }
    ctx->pc = 0x3E9A5Cu;
    // 0x3e9a5c: 0x0  nop
    ctx->pc = 0x3e9a5cu;
    // NOP
label_3e9a60:
    // 0x3e9a60: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3e9a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9a64: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3e9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9a68: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3e9a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9a6c: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x3e9a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3e9a70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9a74: 0xa20607f5  sb          $a2, 0x7F5($s0)
    ctx->pc = 0x3e9a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9a78: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e9a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e9a7c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3e9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3e9a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e9a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9a84: 0xa2070821  sb          $a3, 0x821($s0)
    ctx->pc = 0x3e9a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e9a88: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3e9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x3e9a8c: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x3e9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e9a90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3e9a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e9a94: 0x0  nop
    ctx->pc = 0x3e9a94u;
    // NOP
    // 0x3e9a98: 0x46016341  sub.s       $f13, $f12, $f1
    ctx->pc = 0x3e9a98u;
    ctx->f[13] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3e9a9c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x3e9a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9aa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9AA0u;
    {
        const bool branch_taken_0x3e9aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9aa0) {
            ctx->pc = 0x3E9AB0u;
            goto label_3e9ab0;
        }
    }
    ctx->pc = 0x3E9AA8u;
    // 0x3e9aa8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3E9AA8u;
    {
        const bool branch_taken_0x3e9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AA8u;
        // 0x3e9aac: 0xa2070780  sb          $a3, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9aa8) {
            ctx->pc = 0x3E9B80u;
            goto label_3e9b80;
        }
    }
    ctx->pc = 0x3E9AB0u;
label_3e9ab0:
    // 0x3e9ab0: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3E9AB0u;
    {
        const bool branch_taken_0x3e9ab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3e9ab0) {
            ctx->pc = 0x3E9AE0u;
            goto label_3e9ae0;
        }
    }
    ctx->pc = 0x3E9AB8u;
    // 0x3e9ab8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9AB8u;
    {
        const bool branch_taken_0x3e9ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ab8) {
            ctx->pc = 0x3E9AC8u;
            goto label_3e9ac8;
        }
    }
    ctx->pc = 0x3E9AC0u;
    // 0x3e9ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E9AC0u;
    {
        const bool branch_taken_0x3e9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ac0) {
            ctx->pc = 0x3E9AE8u;
            goto label_3e9ae8;
        }
    }
    ctx->pc = 0x3E9AC8u;
label_3e9ac8:
    // 0x3e9ac8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3e9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3e9acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e9accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e9ad0: 0xc0fa3fc  jal         func_3E8FF0
    ctx->pc = 0x3E9AD0u;
    SET_GPR_U32(ctx, 31, 0x3E9AD8u);
    ctx->pc = 0x3E8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FF0u, 0x3E9AD0u, 0x3E9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9AD8u;
label_3e9ad8:
    // 0x3e9ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9AD8u;
    {
        const bool branch_taken_0x3e9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ad8) {
            ctx->pc = 0x3E9AE8u;
            goto label_3e9ae8;
        }
    }
    ctx->pc = 0x3E9AE0u;
label_3e9ae0:
    // 0x3e9ae0: 0xc0fa3fc  jal         func_3E8FF0
    ctx->pc = 0x3E9AE0u;
    SET_GPR_U32(ctx, 31, 0x3E9AE8u);
    ctx->pc = 0x3E8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FF0u, 0x3E9AE0u, 0x3E9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9AE8u;
label_3e9ae8:
    // 0x3e9ae8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3e9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3e9aec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e9af0: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3e9af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3e9af4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E9AF4u;
    SET_GPR_U32(ctx, 31, 0x3E9AFCu);
    ctx->pc = 0x3E9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9AF4u;
    // 0x3e9af8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E9AF4u, 0x3E9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9AFCu;
label_3e9afc:
    // 0x3e9afc: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3E9AFCu;
    SET_GPR_U32(ctx, 31, 0x3E9B04u);
    ctx->pc = 0x3E9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9AFCu;
    // 0x3e9b00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3E9AFCu, 0x3E9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B04u;
label_3e9b04:
    // 0x3e9b04: 0xa6022b4e  sh          $v0, 0x2B4E($s0)
    ctx->pc = 0x3e9b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e9b08: 0x86052b4e  lh          $a1, 0x2B4E($s0)
    ctx->pc = 0x3e9b08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x3e9b0c: 0xc0974b8  jal         func_25D2E0
    ctx->pc = 0x3E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x3E9B14u);
    ctx->pc = 0x3E9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9B0Cu;
    // 0x3e9b10: 0x860400c2  lh          $a0, 0xC2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D2E0u, 0x3E9B0Cu, 0x3E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B14u;
label_3e9b14:
    // 0x3e9b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e9b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9b18: 0xc6012b48  lwc1        $f1, 0x2B48($s0)
    ctx->pc = 0x3e9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e9b1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3e9b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e9b20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e9b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e9b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9b28: 0x0  nop
    ctx->pc = 0x3e9b28u;
    // NOP
    // 0x3e9b2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3e9b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9b30: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3e9b30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3e9b34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e9b38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3e9b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e9b3c: 0x0  nop
    ctx->pc = 0x3e9b3cu;
    // NOP
    // 0x3e9b40: 0xae022b50  sw          $v0, 0x2B50($s0)
    ctx->pc = 0x3e9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11088), GPR_U32(ctx, 2));
    // 0x3e9b44: 0x0  nop
    ctx->pc = 0x3e9b44u;
    // NOP
label_3e9b48:
    // 0x3e9b48: 0x86052b4e  lh          $a1, 0x2B4E($s0)
    ctx->pc = 0x3e9b48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x3e9b4c: 0x8e062b50  lw          $a2, 0x2B50($s0)
    ctx->pc = 0x3e9b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3e9b50: 0xc097498  jal         func_25D260
    ctx->pc = 0x3E9B50u;
    SET_GPR_U32(ctx, 31, 0x3E9B58u);
    ctx->pc = 0x3E9B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9B50u;
    // 0x3e9b54: 0x860400c2  lh          $a0, 0xC2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3E9B50u, 0x3E9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B58u;
label_3e9b58:
    // 0x3e9b58: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3e9b58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e9b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9b60: 0xc0fa410  jal         func_3E9040
    ctx->pc = 0x3E9B60u;
    SET_GPR_U32(ctx, 31, 0x3E9B68u);
    ctx->pc = 0x3E9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9B60u;
    // 0x3e9b64: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9040u, 0x3E9B60u, 0x3E9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B68u;
label_3e9b68:
    // 0x3e9b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9B68u;
    {
        const bool branch_taken_0x3e9b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B68u;
        // 0x3e9b6c: 0x3c044529  lui         $a0, 0x4529 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17705 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b68) {
            ctx->pc = 0x3E9B80u;
            goto label_3e9b80;
        }
    }
    ctx->pc = 0x3E9B70u;
    // 0x3e9b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9b74: 0x348414f6  ori         $a0, $a0, 0x14F6
    ctx->pc = 0x3e9b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5366);
    // 0x3e9b78: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x3e9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x3e9b7c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3e9b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3e9b80:
    // 0x3e9b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9b88: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B88u;
        // 0x3e9b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9B90u;
}
