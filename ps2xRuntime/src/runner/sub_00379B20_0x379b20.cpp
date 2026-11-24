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

// Function: sub_00379B20
// Address: 0x379b20 - 0x379f80
void sub_00379B20_0x379b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379B20_0x379b20");
#endif

    switch (ctx->pc) {
        case 0x379becu: goto label_379bec;
        case 0x379bf4u: goto label_379bf4;
        case 0x379c08u: goto label_379c08;
        case 0x379e8cu: goto label_379e8c;
        case 0x379e9cu: goto label_379e9c;
        default: break;
    }

    ctx->pc = 0x379b20u;

    // 0x379b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x379b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x379b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x379b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x379b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x379b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379b30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x379b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379b38: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x379b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x379b3c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x379b3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x379b40: 0x10200109  beqz        $at, . + 4 + (0x109 << 2)
    ctx->pc = 0x379B40u;
    {
        const bool branch_taken_0x379b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B40u;
        // 0x379b44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b40) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379B48u;
    // 0x379b48: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x379b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x379b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x379b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x379b50: 0x24841cb0  addiu       $a0, $a0, 0x1CB0
    ctx->pc = 0x379b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    // 0x379b54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x379b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x379b58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x379b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x379b5c: 0x600008  jr          $v1
    ctx->pc = 0x379B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379B68u: goto label_379b68;
            case 0x379B70u: goto label_379b70;
            case 0x379BA0u: goto label_379ba0;
            case 0x379BE0u: goto label_379be0;
            case 0x379E70u: goto label_379e70;
            case 0x379F10u: goto label_379f10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x379B64u;
    // 0x379b64: 0x0  nop
    ctx->pc = 0x379b64u;
    // NOP
label_379b68:
    // 0x379b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379b6c: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x379b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379b70:
    // 0x379b70: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x379b70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379b74: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x379b74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379b78: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x379b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x379b7c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x379b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379b80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379b84: 0xa24307f5  sb          $v1, 0x7F5($s2)
    ctx->pc = 0x379b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379b88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379b8c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x379b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379b90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379b94: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x379b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    // 0x379b98: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x379B98u;
    {
        const bool branch_taken_0x379b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B98u;
        // 0x379b9c: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b98) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379BA0u;
label_379ba0:
    // 0x379ba0: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x379ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x379ba4: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x379BA4u;
    {
        const bool branch_taken_0x379ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379ba4) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379BACu;
    // 0x379bac: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x379bacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379bb0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x379bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x379bb4: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x379bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379bb8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x379bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379bbc: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x379bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379bc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379bc4: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x379bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x379bc8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x379bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379bcc: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x379bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x379bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379bd4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x379BD4u;
    {
        const bool branch_taken_0x379bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BD4u;
        // 0x379bd8: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379bd4) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379BDCu;
    // 0x379bdc: 0x0  nop
    ctx->pc = 0x379bdcu;
    // NOP
label_379be0:
    // 0x379be0: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x379be0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x379be4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x379BE4u;
    SET_GPR_U32(ctx, 31, 0x379BECu);
    ctx->pc = 0x379BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BE4u;
    // 0x379be8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x379BE4u, 0x379BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379BECu;
label_379bec:
    // 0x379bec: 0xc0de308  jal         func_378C20
    ctx->pc = 0x379BECu;
    SET_GPR_U32(ctx, 31, 0x379BF4u);
    ctx->pc = 0x379BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BECu;
    // 0x379bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x379BECu, 0x379BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379BF4u;
label_379bf4:
    // 0x379bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x379bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379bf8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x379bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x379bfc: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x379bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x379c00: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x379C00u;
    SET_GPR_U32(ctx, 31, 0x379C08u);
    ctx->pc = 0x379C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C00u;
    // 0x379c04: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x379C00u, 0x379C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C08u;
label_379c08:
    // 0x379c08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379C08u;
    {
        const bool branch_taken_0x379c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379c08) {
            ctx->pc = 0x379C18u;
            goto label_379c18;
        }
    }
    ctx->pc = 0x379C10u;
    // 0x379c10: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x379c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x379c14: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x379c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_379c18:
    // 0x379c18: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x379c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x379c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379c20: 0x0  nop
    ctx->pc = 0x379c20u;
    // NOP
    // 0x379c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x379c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379c28: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x379C28u;
    {
        const bool branch_taken_0x379c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C28u;
        // 0x379c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c28) {
            ctx->pc = 0x379CA8u;
            goto label_379ca8;
        }
    }
    ctx->pc = 0x379C30u;
    // 0x379c30: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x379C30u;
    {
        const bool branch_taken_0x379c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379c30) {
            ctx->pc = 0x379C78u;
            goto label_379c78;
        }
    }
    ctx->pc = 0x379C38u;
    // 0x379c38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379C38u;
    {
        const bool branch_taken_0x379c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x379c38) {
            ctx->pc = 0x379C48u;
            goto label_379c48;
        }
    }
    ctx->pc = 0x379C40u;
    // 0x379c40: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x379C40u;
    {
        const bool branch_taken_0x379c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379c40) {
            ctx->pc = 0x379D20u;
            goto label_379d20;
        }
    }
    ctx->pc = 0x379C48u;
label_379c48:
    // 0x379c48: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379c4c: 0x78241bf0  lq          $a0, 0x1BF0($at)
    ctx->pc = 0x379c4cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x681BF0u));
    // 0x379c50: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x379c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x379c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379c58: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x379c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x379c5c: 0x7e442b20  sq          $a0, 0x2B20($s2)
    ctx->pc = 0x379c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 11040), GPR_VEC(ctx, 4));
    // 0x379c60: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x379c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379c64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x379c64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379c68: 0xe6402b38  swc1        $f0, 0x2B38($s2)
    ctx->pc = 0x379c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11064), bits); }
    // 0x379c6c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x379C6Cu;
    {
        const bool branch_taken_0x379c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C6Cu;
        // 0x379c70: 0xae422b48  sw          $v0, 0x2B48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c6c) {
            ctx->pc = 0x379D20u;
            goto label_379d20;
        }
    }
    ctx->pc = 0x379C74u;
    // 0x379c74: 0x0  nop
    ctx->pc = 0x379c74u;
    // NOP
label_379c78:
    // 0x379c78: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379c7c: 0x78241c00  lq          $a0, 0x1C00($at)
    ctx->pc = 0x379c7cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x681C00u));
    // 0x379c80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x379c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379c88: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x379c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x379c8c: 0x7e442b20  sq          $a0, 0x2B20($s2)
    ctx->pc = 0x379c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 11040), GPR_VEC(ctx, 4));
    // 0x379c90: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x379c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x379c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x379c98: 0xe6402b38  swc1        $f0, 0x2B38($s2)
    ctx->pc = 0x379c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11064), bits); }
    // 0x379c9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x379C9Cu;
    {
        const bool branch_taken_0x379c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C9Cu;
        // 0x379ca0: 0xae422b48  sw          $v0, 0x2B48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c9c) {
            ctx->pc = 0x379D20u;
            goto label_379d20;
        }
    }
    ctx->pc = 0x379CA4u;
    // 0x379ca4: 0x0  nop
    ctx->pc = 0x379ca4u;
    // NOP
label_379ca8:
    // 0x379ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379cac: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x379CACu;
    {
        const bool branch_taken_0x379cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379cac) {
            ctx->pc = 0x379CF8u;
            goto label_379cf8;
        }
    }
    ctx->pc = 0x379CB4u;
    // 0x379cb4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379CB4u;
    {
        const bool branch_taken_0x379cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x379cb4) {
            ctx->pc = 0x379CC8u;
            goto label_379cc8;
        }
    }
    ctx->pc = 0x379CBCu;
    // 0x379cbc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x379CBCu;
    {
        const bool branch_taken_0x379cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379cbc) {
            ctx->pc = 0x379D20u;
            goto label_379d20;
        }
    }
    ctx->pc = 0x379CC4u;
    // 0x379cc4: 0x0  nop
    ctx->pc = 0x379cc4u;
    // NOP
label_379cc8:
    // 0x379cc8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379ccc: 0x78241c00  lq          $a0, 0x1C00($at)
    ctx->pc = 0x379cccu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x681C00u));
    // 0x379cd0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x379cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x379cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379cd8: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x379cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x379cdc: 0x7e442b20  sq          $a0, 0x2B20($s2)
    ctx->pc = 0x379cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 11040), GPR_VEC(ctx, 4));
    // 0x379ce0: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x379ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379ce4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x379ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x379ce8: 0xe6402b38  swc1        $f0, 0x2B38($s2)
    ctx->pc = 0x379ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11064), bits); }
    // 0x379cec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x379CECu;
    {
        const bool branch_taken_0x379cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CECu;
        // 0x379cf0: 0xae422b48  sw          $v0, 0x2B48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cec) {
            ctx->pc = 0x379D20u;
            goto label_379d20;
        }
    }
    ctx->pc = 0x379CF4u;
    // 0x379cf4: 0x0  nop
    ctx->pc = 0x379cf4u;
    // NOP
label_379cf8:
    // 0x379cf8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379cfc: 0x78241bf0  lq          $a0, 0x1BF0($at)
    ctx->pc = 0x379cfcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x681BF0u));
    // 0x379d00: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x379d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x379d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379d08: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x379d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x379d0c: 0x7e442b20  sq          $a0, 0x2B20($s2)
    ctx->pc = 0x379d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 11040), GPR_VEC(ctx, 4));
    // 0x379d10: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x379d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379d14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x379d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379d18: 0xe6402b38  swc1        $f0, 0x2B38($s2)
    ctx->pc = 0x379d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11064), bits); }
    // 0x379d1c: 0xae422b48  sw          $v0, 0x2B48($s2)
    ctx->pc = 0x379d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11080), GPR_U32(ctx, 2));
label_379d20:
    // 0x379d20: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x379d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x379d24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x379d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x379d28: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x379d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x379d2c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x379d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x379d30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379d34: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x379d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x379d38: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x379d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x379d3c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x379d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x379d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x379d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x379d44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x379D44u;
    {
        const bool branch_taken_0x379d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D44u;
        // 0x379d48: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d44) {
            ctx->pc = 0x379D78u;
            goto label_379d78;
        }
    }
    ctx->pc = 0x379D4Cu;
    // 0x379d4c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x379d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x379d50: 0xc4221bf0  lwc1        $f2, 0x1BF0($at)
    ctx->pc = 0x379d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x379d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379d58: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379d5c: 0xc4211c00  lwc1        $f1, 0x1C00($at)
    ctx->pc = 0x379d5cu;
    { uint32_t bits = FAST_READ32(0x681C00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379d60: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x379d60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x379d64: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x379d64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x379d68: 0x0  nop
    ctx->pc = 0x379d68u;
    // NOP
    // 0x379d6c: 0x0  nop
    ctx->pc = 0x379d6cu;
    // NOP
    // 0x379d70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x379D70u;
    {
        const bool branch_taken_0x379d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D70u;
        // 0x379d74: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d70) {
            ctx->pc = 0x379DA8u;
            goto label_379da8;
        }
    }
    ctx->pc = 0x379D78u;
label_379d78:
    // 0x379d78: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379d7c: 0xc4231bf0  lwc1        $f3, 0x1BF0($at)
    ctx->pc = 0x379d7cu;
    { uint32_t bits = FAST_READ32(0x681BF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x379d80: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x379d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x379d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x379d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379d88: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x379d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x379d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x379d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379d90: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379d94: 0xc4221c00  lwc1        $f2, 0x1C00($at)
    ctx->pc = 0x379d94u;
    { uint32_t bits = FAST_READ32(0x681C00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379d98: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x379d98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x379d9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x379d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x379da0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x379da0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x379da4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x379da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_379da8:
    // 0x379da8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x379da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x379dac: 0xe6402b30  swc1        $f0, 0x2B30($s2)
    ctx->pc = 0x379dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11056), bits); }
    // 0x379db0: 0xe6402b20  swc1        $f0, 0x2B20($s2)
    ctx->pc = 0x379db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11040), bits); }
    // 0x379db4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x379db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379db8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x379db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x379dbc: 0xe6402b34  swc1        $f0, 0x2B34($s2)
    ctx->pc = 0x379dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11060), bits); }
    // 0x379dc0: 0xe6402b24  swc1        $f0, 0x2B24($s2)
    ctx->pc = 0x379dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11044), bits); }
    // 0x379dc4: 0xae422b3c  sw          $v0, 0x2B3C($s2)
    ctx->pc = 0x379dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11068), GPR_U32(ctx, 2));
    // 0x379dc8: 0xae422b2c  sw          $v0, 0x2B2C($s2)
    ctx->pc = 0x379dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11052), GPR_U32(ctx, 2));
    // 0x379dcc: 0xae402b40  sw          $zero, 0x2B40($s2)
    ctx->pc = 0x379dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11072), GPR_U32(ctx, 0));
    // 0x379dd0: 0xae402b44  sw          $zero, 0x2B44($s2)
    ctx->pc = 0x379dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11076), GPR_U32(ctx, 0));
    // 0x379dd4: 0xae402b4c  sw          $zero, 0x2B4C($s2)
    ctx->pc = 0x379dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11084), GPR_U32(ctx, 0));
    // 0x379dd8: 0x7a422b20  lq          $v0, 0x2B20($s2)
    ctx->pc = 0x379dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x379ddc: 0x7e422b50  sq          $v0, 0x2B50($s2)
    ctx->pc = 0x379ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 11088), GPR_VEC(ctx, 2));
    // 0x379de0: 0xc6412b38  lwc1        $f1, 0x2B38($s2)
    ctx->pc = 0x379de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379de4: 0xc6402b28  lwc1        $f0, 0x2B28($s2)
    ctx->pc = 0x379de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379de8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x379de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379dec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x379decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379df0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x379DF0u;
    {
        const bool branch_taken_0x379df0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x379df0) {
            ctx->pc = 0x379DFCu;
            goto label_379dfc;
        }
    }
    ctx->pc = 0x379DF8u;
    // 0x379df8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x379df8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_379dfc:
    // 0x379dfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x379e00: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x379e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x379e04: 0x3444851f  ori         $a0, $v0, 0x851F
    ctx->pc = 0x379e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x379e08: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x379e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x379e0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x379e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379e10: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x379e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x379e14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379e18: 0x24a3018f  addiu       $v1, $a1, 0x18F
    ctx->pc = 0x379e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 399));
    // 0x379e1c: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x379e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x379e20: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x379e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x379e24: 0x0  nop
    ctx->pc = 0x379e24u;
    // NOP
    // 0x379e28: 0x1810  mfhi        $v1
    ctx->pc = 0x379e28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x379e2c: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x379e2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x379e30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x379e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x379e34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x379e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x379e38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x379e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x379e3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x379e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x379e40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x379e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x379e48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x379e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379e4c: 0x0  nop
    ctx->pc = 0x379e4cu;
    // NOP
    // 0x379e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x379e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x379e54: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x379e54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x379e58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x379e5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x379e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x379e60: 0x0  nop
    ctx->pc = 0x379e60u;
    // NOP
    // 0x379e64: 0xa2432b68  sb          $v1, 0x2B68($s2)
    ctx->pc = 0x379e64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11112), (uint8_t)GPR_U32(ctx, 3));
    // 0x379e68: 0xa2420821  sb          $v0, 0x821($s2)
    ctx->pc = 0x379e68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x379e6c: 0x0  nop
    ctx->pc = 0x379e6cu;
    // NOP
label_379e70:
    // 0x379e70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x379e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x379e74: 0xa2420821  sb          $v0, 0x821($s2)
    ctx->pc = 0x379e74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x379e78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x379e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e7c: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x379e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x379e80: 0x26462b50  addiu       $a2, $s2, 0x2B50
    ctx->pc = 0x379e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11088));
    // 0x379e84: 0xc0bc6f0  jal         func_2F1BC0
    ctx->pc = 0x379E84u;
    SET_GPR_U32(ctx, 31, 0x379E8Cu);
    ctx->pc = 0x379E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E84u;
    // 0x379e88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BC0u, 0x379E84u, 0x379E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E8Cu;
label_379e8c:
    // 0x379e8c: 0x26442b50  addiu       $a0, $s2, 0x2B50
    ctx->pc = 0x379e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11088));
    // 0x379e90: 0x26462b40  addiu       $a2, $s2, 0x2B40
    ctx->pc = 0x379e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11072));
    // 0x379e94: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x379E94u;
    SET_GPR_U32(ctx, 31, 0x379E9Cu);
    ctx->pc = 0x379E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E94u;
    // 0x379e98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x379E94u, 0x379E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E9Cu;
label_379e9c:
    // 0x379e9c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379ea0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x379ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x379ea4: 0xc4231bf0  lwc1        $f3, 0x1BF0($at)
    ctx->pc = 0x379ea4u;
    { uint32_t bits = FAST_READ32(0x681BF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x379ea8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x379ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x379eac: 0xc6412b50  lwc1        $f1, 0x2B50($s2)
    ctx->pc = 0x379eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379eb0: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379eb4: 0xc4201c00  lwc1        $f0, 0x1C00($at)
    ctx->pc = 0x379eb4u;
    { uint32_t bits = FAST_READ32(0x681C00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379eb8: 0x46030101  sub.s       $f4, $f0, $f3
    ctx->pc = 0x379eb8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x379ebc: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x379ebcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x379ec0: 0x0  nop
    ctx->pc = 0x379ec0u;
    // NOP
    // 0x379ec4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x379ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x379ec8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x379ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379ecc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x379ECCu;
    {
        const bool branch_taken_0x379ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ECCu;
        // 0x379ed0: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ecc) {
            ctx->pc = 0x379EF8u;
            goto label_379ef8;
        }
    }
    ctx->pc = 0x379ED4u;
    // 0x379ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379ed8: 0x0  nop
    ctx->pc = 0x379ed8u;
    // NOP
    // 0x379edc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x379edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x379ee0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x379ee0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x379ee4: 0x0  nop
    ctx->pc = 0x379ee4u;
    // NOP
    // 0x379ee8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x379ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x379eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x379EECu;
    {
        const bool branch_taken_0x379eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EECu;
        // 0x379ef0: 0xe6402b50  swc1        $f0, 0x2B50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379eec) {
            ctx->pc = 0x379F00u;
            goto label_379f00;
        }
    }
    ctx->pc = 0x379EF4u;
    // 0x379ef4: 0x0  nop
    ctx->pc = 0x379ef4u;
    // NOP
label_379ef8:
    // 0x379ef8: 0xe6402b50  swc1        $f0, 0x2B50($s2)
    ctx->pc = 0x379ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11088), bits); }
    // 0x379efc: 0x0  nop
    ctx->pc = 0x379efcu;
    // NOP
label_379f00:
    // 0x379f00: 0x82432b68  lb          $v1, 0x2B68($s2)
    ctx->pc = 0x379f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 11112)));
    // 0x379f04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379f08: 0xa2432b68  sb          $v1, 0x2B68($s2)
    ctx->pc = 0x379f08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11112), (uint8_t)GPR_U32(ctx, 3));
    // 0x379f0c: 0x0  nop
    ctx->pc = 0x379f0cu;
    // NOP
label_379f10:
    // 0x379f10: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x379f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x379f14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x379F14u;
    {
        const bool branch_taken_0x379f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379f14) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379F1Cu;
    // 0x379f1c: 0x82432b68  lb          $v1, 0x2B68($s2)
    ctx->pc = 0x379f1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 11112)));
    // 0x379f20: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x379F20u;
    {
        const bool branch_taken_0x379f20 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379f20) {
            ctx->pc = 0x379F38u;
            goto label_379f38;
        }
    }
    ctx->pc = 0x379F28u;
    // 0x379f28: 0xa6512b86  sh          $s1, 0x2B86($s2)
    ctx->pc = 0x379f28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11142), (uint16_t)GPR_U32(ctx, 17));
    // 0x379f2c: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x379f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x379f30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x379F30u;
    {
        const bool branch_taken_0x379f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F30u;
        // 0x379f34: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f30) {
            ctx->pc = 0x379F68u;
            goto label_379f68;
        }
    }
    ctx->pc = 0x379F38u;
label_379f38:
    // 0x379f38: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x379f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379f3c: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x379f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379f40: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x379f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x379f44: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x379f44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379f48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379f4c: 0xa24307f5  sb          $v1, 0x7F5($s2)
    ctx->pc = 0x379f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379f50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379f54: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x379f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379f58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x379f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379f5c: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x379f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    // 0x379f60: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x379f60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x379f64: 0x0  nop
    ctx->pc = 0x379f64u;
    // NOP
label_379f68:
    // 0x379f68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x379f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379f78: 0x3e00008  jr          $ra
    ctx->pc = 0x379F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F78u;
        // 0x379f7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379F80u;
}
