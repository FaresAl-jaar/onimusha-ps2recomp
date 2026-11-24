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

// Function: sub_003E2AE0
// Address: 0x3e2ae0 - 0x3e2f0c
void sub_003E2AE0_0x3e2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2AE0_0x3e2ae0");
#endif

    switch (ctx->pc) {
        case 0x3e2b00u: goto label_3e2b00;
        case 0x3e2b18u: goto label_3e2b18;
        case 0x3e2c30u: goto label_3e2c30;
        case 0x3e2c44u: goto label_3e2c44;
        case 0x3e2c78u: goto label_3e2c78;
        case 0x3e2c90u: goto label_3e2c90;
        case 0x3e2cd8u: goto label_3e2cd8;
        case 0x3e2d00u: goto label_3e2d00;
        case 0x3e2d40u: goto label_3e2d40;
        case 0x3e2d7cu: goto label_3e2d7c;
        case 0x3e2da0u: goto label_3e2da0;
        case 0x3e2de4u: goto label_3e2de4;
        case 0x3e2e1cu: goto label_3e2e1c;
        case 0x3e2e64u: goto label_3e2e64;
        case 0x3e2e9cu: goto label_3e2e9c;
        default: break;
    }

    ctx->pc = 0x3e2ae0u;

    // 0x3e2ae0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3e2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3e2ae4: 0x24040430  addiu       $a0, $zero, 0x430
    ctx->pc = 0x3e2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    // 0x3e2ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e2aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e2aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e2af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e2af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e2af8: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3E2AF8u;
    SET_GPR_U32(ctx, 31, 0x3E2B00u);
    ctx->pc = 0x3E2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AF8u;
    // 0x3e2afc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3E2AF8u, 0x3E2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2B00u;
label_3e2b00:
    // 0x3e2b00: 0xaf828cfc  sw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 2));
    // 0x3e2b04: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2b08: 0x108000f9  beqz        $a0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3E2B08u;
    {
        const bool branch_taken_0x3e2b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B08u;
        // 0x3e2b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b08) {
            ctx->pc = 0x3E2EF0u;
            goto label_3e2ef0;
        }
    }
    ctx->pc = 0x3E2B10u;
    // 0x3e2b10: 0xc049590  jal         func_125640
    ctx->pc = 0x3E2B10u;
    SET_GPR_U32(ctx, 31, 0x3E2B18u);
    ctx->pc = 0x3E2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2B10u;
    // 0x3e2b14: 0x24060430  addiu       $a2, $zero, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E2B10u, 0x3E2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2B18u;
label_3e2b18:
    // 0x3e2b18: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3e2b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e2b1c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3e2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3e2b20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3e2b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e2b24: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3e2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3e2b28: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3e2b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3e2b2c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e2b30: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3e2b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3e2b34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e2b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2b3c: 0x0  nop
    ctx->pc = 0x3e2b3cu;
    // NOP
    // 0x3e2b40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e2b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e2b44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e2b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2b48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2B48u;
    {
        const bool branch_taken_0x3e2b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2b48) {
            ctx->pc = 0x3E2B60u;
            goto label_3e2b60;
        }
    }
    ctx->pc = 0x3E2B50u;
    // 0x3e2b50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2b54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e2b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e2b58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2B58u;
    {
        const bool branch_taken_0x3e2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B58u;
        // 0x3e2b5c: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b58) {
            ctx->pc = 0x3E2B7Cu;
            goto label_3e2b7c;
        }
    }
    ctx->pc = 0x3E2B60u;
label_3e2b60:
    // 0x3e2b60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e2b60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e2b64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e2b68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2b6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e2b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e2b70: 0x0  nop
    ctx->pc = 0x3e2b70u;
    // NOP
    // 0x3e2b74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e2b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e2b78: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x3e2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_3e2b7c:
    // 0x3e2b7c: 0xa7a300d0  sh          $v1, 0xD0($sp)
    ctx->pc = 0x3e2b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e2b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2b84: 0x0  nop
    ctx->pc = 0x3e2b84u;
    // NOP
    // 0x3e2b88: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3e2b88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3e2b8c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3e2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3e2b90: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3e2b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3e2b94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e2b98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e2b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2ba0: 0x0  nop
    ctx->pc = 0x3e2ba0u;
    // NOP
    // 0x3e2ba4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e2ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e2ba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e2ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2bac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2BACu;
    {
        const bool branch_taken_0x3e2bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2bac) {
            ctx->pc = 0x3E2BC4u;
            goto label_3e2bc4;
        }
    }
    ctx->pc = 0x3E2BB4u;
    // 0x3e2bb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2bb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e2bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e2bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2BBCu;
    {
        const bool branch_taken_0x3e2bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BBCu;
        // 0x3e2bc0: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bbc) {
            ctx->pc = 0x3E2BE0u;
            goto label_3e2be0;
        }
    }
    ctx->pc = 0x3E2BC4u;
label_3e2bc4:
    // 0x3e2bc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e2bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e2bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e2bcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2bd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e2bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e2bd4: 0x0  nop
    ctx->pc = 0x3e2bd4u;
    // NOP
    // 0x3e2bd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e2bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e2bdc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3e2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3e2be0:
    // 0x3e2be0: 0xa7a300d2  sh          $v1, 0xD2($sp)
    ctx->pc = 0x3e2be0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e2be4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3e2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x3e2be8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e2bec: 0x3c023cfb  lui         $v0, 0x3CFB
    ctx->pc = 0x3e2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15611 << 16));
    // 0x3e2bf0: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x3e2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x3e2bf4: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3e2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3e2bf8: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x3e2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x3e2bfc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3e2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3e2c00: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3e2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3e2c04: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3e2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3e2c08: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x3e2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x3e2c0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3e2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3e2c10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e2c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c14: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3e2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3e2c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e2c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c1c: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3e2c20: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3e2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3e2c24: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3e2c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3e2c28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3e2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3e2c2c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x3e2c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_3e2c30:
    // 0x3e2c30: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2c34: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3e2c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3e2c38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3e2c3c: 0xc0f0570  jal         func_3C15C0
    ctx->pc = 0x3E2C3Cu;
    SET_GPR_U32(ctx, 31, 0x3E2C44u);
    ctx->pc = 0x3E2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C3Cu;
    // 0x3e2c40: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C15C0u, 0x3E2C3Cu, 0x3E2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C44u;
label_3e2c44:
    // 0x3e2c44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e2c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e2c48: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x3e2c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2c4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E2C4Cu;
    {
        const bool branch_taken_0x3e2c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C4Cu;
        // 0x3e2c50: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c4c) {
            ctx->pc = 0x3E2C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2c30;
        }
    }
    ctx->pc = 0x3E2C54u;
    // 0x3e2c54: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3e2c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3e2c58: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2c5c: 0x8c23b870  lw          $v1, -0x4790($at)
    ctx->pc = 0x3e2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80B870u));
    // 0x3e2c60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e2c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e2c64: 0xac430264  sw          $v1, 0x264($v0)
    ctx->pc = 0x3e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 3));
    // 0x3e2c68: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2c6c: 0x8c440264  lw          $a0, 0x264($v0)
    ctx->pc = 0x3e2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x3e2c70: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3E2C70u;
    SET_GPR_U32(ctx, 31, 0x3E2C78u);
    ctx->pc = 0x3E2C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C70u;
    // 0x3e2c74: 0x24450270  addiu       $a1, $v0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3E2C70u, 0x3E2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C78u;
label_3e2c78:
    // 0x3e2c78: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2c7c: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3e2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3e2c80: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x3e2c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3e2c84: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3e2c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e2c88: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E2C88u;
    {
        const bool branch_taken_0x3e2c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C88u;
        // 0x3e2c8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c88) {
            ctx->pc = 0x3E2CF8u;
            goto label_3e2cf8;
        }
    }
    ctx->pc = 0x3E2C90u;
label_3e2c90:
    // 0x3e2c90: 0x26037fff  addiu       $v1, $s0, 0x7FFF
    ctx->pc = 0x3e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x3e2c94: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3e2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e2c98: 0x34038019  ori         $v1, $zero, 0x8019
    ctx->pc = 0x3e2c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32793);
    // 0x3e2c9c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2C9Cu;
    {
        const bool branch_taken_0x3e2c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C9Cu;
        // 0x3e2ca0: 0x34038018  ori         $v1, $zero, 0x8018 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32792);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c9c) {
            ctx->pc = 0x3E2CC0u;
            goto label_3e2cc0;
        }
    }
    ctx->pc = 0x3E2CA4u;
    // 0x3e2ca4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2CA4u;
    {
        const bool branch_taken_0x3e2ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e2ca4) {
            ctx->pc = 0x3E2CB8u;
            goto label_3e2cb8;
        }
    }
    ctx->pc = 0x3E2CACu;
    // 0x3e2cac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3E2CACu;
    {
        const bool branch_taken_0x3e2cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2cac) {
            ctx->pc = 0x3E2CD8u;
            goto label_3e2cd8;
        }
    }
    ctx->pc = 0x3E2CB4u;
    // 0x3e2cb4: 0x0  nop
    ctx->pc = 0x3e2cb4u;
    // NOP
label_3e2cb8:
    // 0x3e2cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2CB8u;
    {
        const bool branch_taken_0x3e2cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CB8u;
        // 0x3e2cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2cb8) {
            ctx->pc = 0x3E2CC8u;
            goto label_3e2cc8;
        }
    }
    ctx->pc = 0x3E2CC0u;
label_3e2cc0:
    // 0x3e2cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2cc4: 0x0  nop
    ctx->pc = 0x3e2cc4u;
    // NOP
label_3e2cc8:
    // 0x3e2cc8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3e2cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e2ccc: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3e2cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3e2cd0: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3E2CD0u;
    SET_GPR_U32(ctx, 31, 0x3E2CD8u);
    ctx->pc = 0x3E2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CD0u;
    // 0x3e2cd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3E2CD0u, 0x3E2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CD8u;
label_3e2cd8:
    // 0x3e2cd8: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2cdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e2cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e2ce0: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x3e2ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x3e2ce4: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x3e2ce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3e2ce8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e2ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e2cec: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3E2CECu;
    {
        const bool branch_taken_0x3e2cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2cec) {
            ctx->pc = 0x3E2C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2c90;
        }
    }
    ctx->pc = 0x3E2CF4u;
    // 0x3e2cf4: 0x0  nop
    ctx->pc = 0x3e2cf4u;
    // NOP
label_3e2cf8:
    // 0x3e2cf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e2cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e2cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2d00:
    // 0x3e2d00: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x3e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2d04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3e2d08: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E2D08u;
    {
        const bool branch_taken_0x3e2d08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D08u;
        // 0x3e2d0c: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d08) {
            ctx->pc = 0x3E2D40u;
            goto label_3e2d40;
        }
    }
    ctx->pc = 0x3E2D10u;
    // 0x3e2d10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2d14: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3e2d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3e2d18: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x3e2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x3e2d1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3e2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3e2d20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e2d20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E740u));
    // 0x3e2d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2d2c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3e2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3e2d30: 0x2442e730  addiu       $v0, $v0, -0x18D0
    ctx->pc = 0x3e2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
    // 0x3e2d34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e2d34u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E730u));
    // 0x3e2d38: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3E2D38u;
    SET_GPR_U32(ctx, 31, 0x3E2D40u);
    ctx->pc = 0x3E2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D38u;
    // 0x3e2d3c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3E2D38u, 0x3E2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D40u;
label_3e2d40:
    // 0x3e2d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2d44: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2D44u;
    {
        const bool branch_taken_0x3e2d44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2d44) {
            ctx->pc = 0x3E2D80u;
            goto label_3e2d80;
        }
    }
    ctx->pc = 0x3E2D4Cu;
    // 0x3e2d4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2d50: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3e2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e2d54: 0x2442e760  addiu       $v0, $v0, -0x18A0
    ctx->pc = 0x3e2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960992));
    // 0x3e2d58: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3e2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e2d5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e2d5cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E760u));
    // 0x3e2d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2d68: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3e2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3e2d6c: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x3e2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x3e2d70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e2d70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E750u));
    // 0x3e2d74: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3E2D74u;
    SET_GPR_U32(ctx, 31, 0x3E2D7Cu);
    ctx->pc = 0x3E2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D74u;
    // 0x3e2d78: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3E2D74u, 0x3E2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D7Cu;
label_3e2d7c:
    // 0x3e2d7c: 0x0  nop
    ctx->pc = 0x3e2d7cu;
    // NOP
label_3e2d80:
    // 0x3e2d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e2d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e2d84: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x3e2d84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2d88: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3E2D88u;
    {
        const bool branch_taken_0x3e2d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D88u;
        // 0x3e2d8c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d88) {
            ctx->pc = 0x3E2D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2d00;
        }
    }
    ctx->pc = 0x3E2D90u;
    // 0x3e2d90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e2d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e2d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e2d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d9c: 0x0  nop
    ctx->pc = 0x3e2d9cu;
    // NOP
label_3e2da0:
    // 0x3e2da0: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2da4: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3e2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3e2da8: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E2DA8u;
    {
        const bool branch_taken_0x3e2da8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DA8u;
        // 0x3e2dac: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2da8) {
            ctx->pc = 0x3E2E20u;
            goto label_3e2e20;
        }
    }
    ctx->pc = 0x3E2DB0u;
    // 0x3e2db0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e2db4: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x3e2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e2db8: 0x2463e770  addiu       $v1, $v1, -0x1890
    ctx->pc = 0x3e2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961008));
    // 0x3e2dbc: 0x24470210  addiu       $a3, $v0, 0x210
    ctx->pc = 0x3e2dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x3e2dc0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3e2dc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E770u));
    // 0x3e2dc4: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3e2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3e2dc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2dcc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3e2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e2dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e2dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e2dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ddc: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3E2DDCu;
    SET_GPR_U32(ctx, 31, 0x3E2DE4u);
    ctx->pc = 0x3E2DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2DDCu;
    // 0x3e2de0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3E2DDCu, 0x3E2DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2DE4u;
label_3e2de4:
    // 0x3e2de4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2de8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e2dec: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x3e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x3e2df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2df4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e2df4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E780u));
    // 0x3e2df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e2df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2dfc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3e2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3e2e00: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3e2e04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e2e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e2e08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2e0c: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2e10: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e2e14: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3E2E14u;
    SET_GPR_U32(ctx, 31, 0x3E2E1Cu);
    ctx->pc = 0x3E2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E14u;
    // 0x3e2e18: 0x24470224  addiu       $a3, $v0, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3E2E14u, 0x3E2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E1Cu;
label_3e2e1c:
    // 0x3e2e1c: 0x0  nop
    ctx->pc = 0x3e2e1cu;
    // NOP
label_3e2e20:
    // 0x3e2e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2e24: 0x1663001e  bne         $s3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E2E24u;
    {
        const bool branch_taken_0x3e2e24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2e24) {
            ctx->pc = 0x3E2EA0u;
            goto label_3e2ea0;
        }
    }
    ctx->pc = 0x3E2E2Cu;
    // 0x3e2e2c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2e30: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3e2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e2e34: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x3e2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x3e2e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e2e3cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E790u));
    // 0x3e2e40: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3e2e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e2e44: 0x3c023c16  lui         $v0, 0x3C16
    ctx->pc = 0x3e2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15382 << 16));
    // 0x3e2e48: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3e2e4c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x3e2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x3e2e50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e2e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2e54: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2e58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e2e5c: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3E2E5Cu;
    SET_GPR_U32(ctx, 31, 0x3E2E64u);
    ctx->pc = 0x3E2E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E5Cu;
    // 0x3e2e60: 0x24470210  addiu       $a3, $v0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3E2E5Cu, 0x3E2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E64u;
label_3e2e64:
    // 0x3e2e64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2e68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e2e6c: 0x2442e7a0  addiu       $v0, $v0, -0x1860
    ctx->pc = 0x3e2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x3e2e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e2e74u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E7A0u));
    // 0x3e2e78: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3e2e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e2e7c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3e2e80: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e2e80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3e2e84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e2e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e2e88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e2e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2e8c: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x3e2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2e90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e2e94: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3E2E94u;
    SET_GPR_U32(ctx, 31, 0x3E2E9Cu);
    ctx->pc = 0x3E2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E94u;
    // 0x3e2e98: 0x24470224  addiu       $a3, $v0, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3E2E94u, 0x3E2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E9Cu;
label_3e2e9c:
    // 0x3e2e9c: 0x0  nop
    ctx->pc = 0x3e2e9cu;
    // NOP
label_3e2ea0:
    // 0x3e2ea0: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2ea4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e2ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3e2ea8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3e2ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e2eac: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3e2eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3e2eb0: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x3e2eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2eb4: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x3e2eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3e2eb8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3e2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e2ebc: 0xa0800211  sb          $zero, 0x211($a0)
    ctx->pc = 0x3e2ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e2ec0: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2ec4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3e2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e2ec8: 0xa0860225  sb          $a2, 0x225($a0)
    ctx->pc = 0x3e2ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 549), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e2ecc: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2ed0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3e2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e2ed4: 0xa4850214  sh          $a1, 0x214($a0)
    ctx->pc = 0x3e2ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 532), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e2ed8: 0x8f848cfc  lw          $a0, -0x7304($gp)
    ctx->pc = 0x3e2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x3e2edc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3e2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e2ee0: 0xa4850228  sh          $a1, 0x228($a0)
    ctx->pc = 0x3e2ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 552), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e2ee4: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3E2EE4u;
    {
        const bool branch_taken_0x3e2ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EE4u;
        // 0x3e2ee8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ee4) {
            ctx->pc = 0x3E2DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2da0;
        }
    }
    ctx->pc = 0x3E2EECu;
    // 0x3e2eec: 0x0  nop
    ctx->pc = 0x3e2eecu;
    // NOP
label_3e2ef0:
    // 0x3e2ef0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e2ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e2ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e2ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e2efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e2f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2f04: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F04u;
        // 0x3e2f08: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2F0Cu;
}
