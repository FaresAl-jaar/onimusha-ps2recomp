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

// Function: sub_003D6A60
// Address: 0x3d6a60 - 0x3d6c98
void sub_003D6A60_0x3d6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6A60_0x3d6a60");
#endif

    switch (ctx->pc) {
        case 0x3d6bacu: goto label_3d6bac;
        case 0x3d6bc0u: goto label_3d6bc0;
        case 0x3d6bc8u: goto label_3d6bc8;
        case 0x3d6bdcu: goto label_3d6bdc;
        case 0x3d6c24u: goto label_3d6c24;
        default: break;
    }

    ctx->pc = 0x3d6a60u;

    // 0x3d6a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d6a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d6a6c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d6a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d6a70: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3d6a70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d6a74: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x3D6A74u;
    {
        const bool branch_taken_0x3d6a74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A74u;
        // 0x3d6a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a74) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6A7Cu;
    // 0x3d6a7c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3d6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3d6a80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d6a84: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x3d6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    // 0x3d6a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d6a8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6a90: 0x600008  jr          $v1
    ctx->pc = 0x3D6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D6A98u: goto label_3d6a98;
            case 0x3D6AC8u: goto label_3d6ac8;
            case 0x3D6B10u: goto label_3d6b10;
            case 0x3D6BE0u: goto label_3d6be0;
            case 0x3D6C70u: goto label_3d6c70;
            case 0x3D6C78u: goto label_3d6c78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D6A98u;
label_3d6a98:
    // 0x3d6a98: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6a9c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6aa0: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3d6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3d6aa4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d6aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6aa8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6aac: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3d6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6ab0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6ab4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3d6ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6abc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3d6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3d6ac0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6ac4: 0x0  nop
    ctx->pc = 0x3d6ac4u;
    // NOP
label_3d6ac8:
    // 0x3d6ac8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d6ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d6acc: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3D6ACCu;
    {
        const bool branch_taken_0x3d6acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6acc) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6AD4u;
    // 0x3d6ad4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6ad8: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x3d6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3d6adc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6ae0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6ae4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d6ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6ae8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6aec: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d6aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d6af0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6af4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d6af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d6afc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6b00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d6b04: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3D6B04u;
    {
        const bool branch_taken_0x3d6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B04u;
        // 0x3d6b08: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b04) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6B0Cu;
    // 0x3d6b0c: 0x0  nop
    ctx->pc = 0x3d6b0cu;
    // NOP
label_3d6b10:
    // 0x3d6b10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6b14: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d6b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d6b18: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3d6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3d6b1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d6b20: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3d6b24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d6b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d6b28: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3d6b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3d6b2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d6b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d6b30: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d6b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d6b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d6b38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d6b38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d6b3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d6b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d6b40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d6b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d6b44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6B44u;
    {
        const bool branch_taken_0x3d6b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d6b44) {
            ctx->pc = 0x3D6B5Cu;
            goto label_3d6b5c;
        }
    }
    ctx->pc = 0x3D6B4Cu;
    // 0x3d6b4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6b50: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d6b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d6b54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6B54u;
    {
        const bool branch_taken_0x3d6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B54u;
        // 0x3d6b58: 0xa6032b28  sh          $v1, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b54) {
            ctx->pc = 0x3D6B78u;
            goto label_3d6b78;
        }
    }
    ctx->pc = 0x3D6B5Cu;
label_3d6b5c:
    // 0x3d6b5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d6b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d6b60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6b64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6b64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6b68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d6b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d6b6c: 0x0  nop
    ctx->pc = 0x3d6b6cu;
    // NOP
    // 0x3d6b70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d6b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d6b74: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
label_3d6b78:
    // 0x3d6b78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d6b7c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d6b80: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3d6b84: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d6b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d6b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d6b8c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3d6b90: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d6b94: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3d6b98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d6b9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D6B9Cu;
    {
        const bool branch_taken_0x3d6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B9Cu;
        // 0x3d6ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b9c) {
            ctx->pc = 0x3D6BB8u;
            goto label_3d6bb8;
        }
    }
    ctx->pc = 0x3D6BA4u;
    // 0x3d6ba4: 0xc0f57a0  jal         func_3D5E80
    ctx->pc = 0x3D6BA4u;
    SET_GPR_U32(ctx, 31, 0x3D6BACu);
    ctx->pc = 0x3D5E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5E80u, 0x3D6BA4u, 0x3D6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BACu;
label_3d6bac:
    // 0x3d6bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6BACu;
    {
        const bool branch_taken_0x3d6bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6bac) {
            ctx->pc = 0x3D6BC0u;
            goto label_3d6bc0;
        }
    }
    ctx->pc = 0x3D6BB4u;
    // 0x3d6bb4: 0x0  nop
    ctx->pc = 0x3d6bb4u;
    // NOP
label_3d6bb8:
    // 0x3d6bb8: 0xc0f57ac  jal         func_3D5EB0
    ctx->pc = 0x3D6BB8u;
    SET_GPR_U32(ctx, 31, 0x3D6BC0u);
    ctx->pc = 0x3D6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BB8u;
    // 0x3d6bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5EB0u, 0x3D6BB8u, 0x3D6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BC0u;
label_3d6bc0:
    // 0x3d6bc0: 0xc0f57cc  jal         func_3D5F30
    ctx->pc = 0x3D6BC0u;
    SET_GPR_U32(ctx, 31, 0x3D6BC8u);
    ctx->pc = 0x3D6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BC0u;
    // 0x3d6bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F30u, 0x3D6BC0u, 0x3D6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BC8u;
label_3d6bc8:
    // 0x3d6bc8: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3d6bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3d6bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d6bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bd0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x3d6bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3d6bd4: 0xc0bc7b0  jal         func_2F1EC0
    ctx->pc = 0x3D6BD4u;
    SET_GPR_U32(ctx, 31, 0x3D6BDCu);
    ctx->pc = 0x3D6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BD4u;
    // 0x3d6bd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC0u, 0x3D6BD4u, 0x3D6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BDCu;
label_3d6bdc:
    // 0x3d6bdc: 0x0  nop
    ctx->pc = 0x3d6bdcu;
    // NOP
label_3d6be0:
    // 0x3d6be0: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6be4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6BE4u;
    {
        const bool branch_taken_0x3d6be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6be4) {
            ctx->pc = 0x3D6BF8u;
            goto label_3d6bf8;
        }
    }
    ctx->pc = 0x3D6BECu;
    // 0x3d6bec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6bf0: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6bf4: 0x0  nop
    ctx->pc = 0x3d6bf4u;
    // NOP
label_3d6bf8:
    // 0x3d6bf8: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6bfc: 0x1c600022  bgtz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D6BFCu;
    {
        const bool branch_taken_0x3d6bfc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d6bfc) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6C04u;
    // 0x3d6c04: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3d6c04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3d6c08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6c0c: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3d6c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6c10: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3d6c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3d6c14: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D6C14u;
    {
        const bool branch_taken_0x3d6c14 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3D6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C14u;
        // 0x3d6c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c14) {
            ctx->pc = 0x3D6C30u;
            goto label_3d6c30;
        }
    }
    ctx->pc = 0x3D6C1Cu;
    // 0x3d6c1c: 0xc0f5830  jal         func_3D60C0
    ctx->pc = 0x3D6C1Cu;
    SET_GPR_U32(ctx, 31, 0x3D6C24u);
    ctx->pc = 0x3D60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D60C0u, 0x3D6C1Cu, 0x3D6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C24u;
label_3d6c24:
    // 0x3d6c24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D6C24u;
    {
        const bool branch_taken_0x3d6c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6c24) {
            ctx->pc = 0x3D6C60u;
            goto label_3d6c60;
        }
    }
    ctx->pc = 0x3D6C2Cu;
    // 0x3d6c2c: 0x0  nop
    ctx->pc = 0x3d6c2cu;
    // NOP
label_3d6c30:
    // 0x3d6c30: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6c34: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6c38: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x3d6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3d6c3c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d6c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6c40: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6c44: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3d6c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6c48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6c4c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3d6c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6c50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d6c54: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3d6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3d6c58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D6C58u;
    {
        const bool branch_taken_0x3d6c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C58u;
        // 0x3d6c5c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c58) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6C60u;
label_3d6c60:
    // 0x3d6c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d6c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6C64u;
    {
        const bool branch_taken_0x3d6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C64u;
        // 0x3d6c68: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c64) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6C6Cu;
    // 0x3d6c6c: 0x0  nop
    ctx->pc = 0x3d6c6cu;
    // NOP
label_3d6c70:
    // 0x3d6c70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d6c74: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3d6c78:
    // 0x3d6c78: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d6c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d6c7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D6C7Cu;
    {
        const bool branch_taken_0x3d6c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C7Cu;
        // 0x3d6c80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c7c) {
            ctx->pc = 0x3D6C88u;
            goto label_3d6c88;
        }
    }
    ctx->pc = 0x3D6C84u;
    // 0x3d6c84: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d6c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d6c88:
    // 0x3d6c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6c90: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C90u;
        // 0x3d6c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6C98u;
}
