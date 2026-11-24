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

// Function: sub_003C6A50
// Address: 0x3c6a50 - 0x3c6b58
void sub_003C6A50_0x3c6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6A50_0x3c6a50");
#endif

    switch (ctx->pc) {
        case 0x3c6a98u: goto label_3c6a98;
        default: break;
    }

    ctx->pc = 0x3c6a50u;

    // 0x3c6a50: 0x9082057c  lbu         $v0, 0x57C($a0)
    ctx->pc = 0x3c6a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6a54: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c6a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3c6a58: 0xa082057c  sb          $v0, 0x57C($a0)
    ctx->pc = 0x3c6a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c6a5c: 0x9082057c  lbu         $v0, 0x57C($a0)
    ctx->pc = 0x3c6a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6a60: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x3c6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x3c6a64: 0xa082057c  sb          $v0, 0x57C($a0)
    ctx->pc = 0x3c6a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c6a68: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6a6c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x3c6a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c6a70: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x3C6A70u;
    {
        const bool branch_taken_0x3c6a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A70u;
        // 0x3c6a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a70) {
            ctx->pc = 0x3C6B50u;
            goto label_3c6b50;
        }
    }
    ctx->pc = 0x3C6A78u;
    // 0x3c6a78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c6a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c6a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a80: 0x3c06442f  lui         $a2, 0x442F
    ctx->pc = 0x3c6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17455 << 16));
    // 0x3c6a84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3c6a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6a88: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3c6a88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6a8c: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x3c6a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x3c6a90: 0x34c9d70a  ori         $t1, $a2, 0xD70A
    ctx->pc = 0x3c6a90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x3c6a94: 0x0  nop
    ctx->pc = 0x3c6a94u;
    // NOP
label_3c6a98:
    // 0x3c6a98: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x3c6a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3c6a9c: 0x8c860574  lw          $a2, 0x574($a0)
    ctx->pc = 0x3c6a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6aa0: 0x8ce70074  lw          $a3, 0x74($a3)
    ctx->pc = 0x3c6aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x3c6aa4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3c6aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3c6aa8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3c6aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c6aac: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3c6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ab0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6AB0u;
    {
        const bool branch_taken_0x3c6ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AB0u;
        // 0x3c6ab4: 0xe4c00034  swc1        $f0, 0x34($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ab0) {
            ctx->pc = 0x3C6AC8u;
            goto label_3c6ac8;
        }
    }
    ctx->pc = 0x3C6AB8u;
    // 0x3c6ab8: 0x8c860574  lw          $a2, 0x574($a0)
    ctx->pc = 0x3c6ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6abc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3c6abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3c6ac0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3C6AC0u;
    {
        const bool branch_taken_0x3c6ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AC0u;
        // 0x3c6ac4: 0xacc90034  sw          $t1, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ac0) {
            ctx->pc = 0x3C6B38u;
            goto label_3c6b38;
        }
    }
    ctx->pc = 0x3C6AC8u;
label_3c6ac8:
    // 0x3c6ac8: 0x14a80009  bne         $a1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C6AC8u;
    {
        const bool branch_taken_0x3c6ac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x3c6ac8) {
            ctx->pc = 0x3C6AF0u;
            goto label_3c6af0;
        }
    }
    ctx->pc = 0x3C6AD0u;
    // 0x3c6ad0: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x3c6ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3c6ad4: 0x8c860574  lw          $a2, 0x574($a0)
    ctx->pc = 0x3c6ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6ad8: 0x8ce70074  lw          $a3, 0x74($a3)
    ctx->pc = 0x3c6ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x3c6adc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3c6adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3c6ae0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3c6ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c6ae4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3c6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ae8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C6AE8u;
    {
        const bool branch_taken_0x3c6ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AE8u;
        // 0x3c6aec: 0xe4c00034  swc1        $f0, 0x34($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ae8) {
            ctx->pc = 0x3C6B38u;
            goto label_3c6b38;
        }
    }
    ctx->pc = 0x3C6AF0u;
label_3c6af0:
    // 0x3c6af0: 0x8c860568  lw          $a2, 0x568($a0)
    ctx->pc = 0x3c6af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6af4: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6AF4u;
    {
        const bool branch_taken_0x3c6af4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3C6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AF4u;
        // 0x3c6af8: 0x63842  srl         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6af4) {
            ctx->pc = 0x3C6B08u;
            goto label_3c6b08;
        }
    }
    ctx->pc = 0x3C6AFCu;
    // 0x3c6afc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c6afcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c6b00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C6B00u;
    {
        const bool branch_taken_0x3c6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B00u;
        // 0x3c6b04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b00) {
            ctx->pc = 0x3C6B20u;
            goto label_3c6b20;
        }
    }
    ctx->pc = 0x3C6B08u;
label_3c6b08:
    // 0x3c6b08: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x3c6b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3c6b0c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x3c6b0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3c6b10: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3c6b10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c6b14: 0x0  nop
    ctx->pc = 0x3c6b14u;
    // NOP
    // 0x3c6b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c6b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c6b1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c6b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c6b20:
    // 0x3c6b20: 0x0  nop
    ctx->pc = 0x3c6b20u;
    // NOP
    // 0x3c6b24: 0x0  nop
    ctx->pc = 0x3c6b24u;
    // NOP
    // 0x3c6b28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3c6b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c6b2c: 0x8c860574  lw          $a2, 0x574($a0)
    ctx->pc = 0x3c6b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6b30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3c6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3c6b34: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x3c6b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_3c6b38:
    // 0x3c6b38: 0x8c860568  lw          $a2, 0x568($a0)
    ctx->pc = 0x3c6b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6b3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c6b40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c6b44: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x3c6b44u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c6b48: 0x14c0ffd3  bnez        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3C6B48u;
    {
        const bool branch_taken_0x3c6b48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B48u;
        // 0x3c6b4c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b48) {
            ctx->pc = 0x3C6A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6a98;
        }
    }
    ctx->pc = 0x3C6B50u;
label_3c6b50:
    // 0x3c6b50: 0x80f1b18  j           func_3C6C60
    ctx->pc = 0x3C6B50u;
    ctx->pc = 0x3C6C60u;
    sub_003C6C60_0x3c6c60(rdram, ctx, runtime); return;
    ctx->pc = 0x3C6B58u;
}
