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

// Function: sub_003F1C50
// Address: 0x3f1c50 - 0x3f1fdc
void sub_003F1C50_0x3f1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1C50_0x3f1c50");
#endif

    switch (ctx->pc) {
        case 0x3f1cd8u: goto label_3f1cd8;
        case 0x3f1d54u: goto label_3f1d54;
        case 0x3f1d98u: goto label_3f1d98;
        case 0x3f1dacu: goto label_3f1dac;
        case 0x3f1dc8u: goto label_3f1dc8;
        case 0x3f1ddcu: goto label_3f1ddc;
        case 0x3f1e70u: goto label_3f1e70;
        case 0x3f1eecu: goto label_3f1eec;
        case 0x3f1f30u: goto label_3f1f30;
        case 0x3f1f44u: goto label_3f1f44;
        case 0x3f1f60u: goto label_3f1f60;
        case 0x3f1f74u: goto label_3f1f74;
        default: break;
    }

    ctx->pc = 0x3f1c50u;

    // 0x3f1c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f1c54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f1c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f1c5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f1c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f1c60: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f1c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3f1c64: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3f1c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3f1c68: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3F1C68u;
    {
        const bool branch_taken_0x3f1c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C68u;
        // 0x3f1c6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c68) {
            ctx->pc = 0x3F1E28u;
            goto label_3f1e28;
        }
    }
    ctx->pc = 0x3F1C70u;
    // 0x3f1c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1c74: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1C74u;
    {
        const bool branch_taken_0x3f1c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f1c74) {
            ctx->pc = 0x3F1C90u;
            goto label_3f1c90;
        }
    }
    ctx->pc = 0x3F1C7Cu;
    // 0x3f1c7c: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x3F1C7Cu;
    {
        const bool branch_taken_0x3f1c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1c7c) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1C84u;
    // 0x3f1c84: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x3F1C84u;
    {
        const bool branch_taken_0x3f1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1c84) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1C8Cu;
    // 0x3f1c8c: 0x0  nop
    ctx->pc = 0x3f1c8cu;
    // NOP
label_3f1c90:
    // 0x3f1c90: 0x82030044  lb          $v1, 0x44($s0)
    ctx->pc = 0x3f1c90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1c98: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3F1C98u;
    {
        const bool branch_taken_0x3f1c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f1c98) {
            ctx->pc = 0x3F1E18u;
            goto label_3f1e18;
        }
    }
    ctx->pc = 0x3F1CA0u;
    // 0x3f1ca0: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F1CA0u;
    {
        const bool branch_taken_0x3f1ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f1ca0) {
            ctx->pc = 0x3F1CE8u;
            goto label_3f1ce8;
        }
    }
    ctx->pc = 0x3F1CA8u;
    // 0x3f1ca8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1CA8u;
    {
        const bool branch_taken_0x3f1ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1ca8) {
            ctx->pc = 0x3F1CB8u;
            goto label_3f1cb8;
        }
    }
    ctx->pc = 0x3F1CB0u;
    // 0x3f1cb0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x3F1CB0u;
    {
        const bool branch_taken_0x3f1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cb0) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1CB8u;
label_3f1cb8:
    // 0x3f1cb8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3f1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3f1cbc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1CBCu;
    {
        const bool branch_taken_0x3f1cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CBCu;
        // 0x3f1cc0: 0x3c040090  lui         $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cbc) {
            ctx->pc = 0x3F1CD8u;
            goto label_3f1cd8;
        }
    }
    ctx->pc = 0x3F1CC4u;
    // 0x3f1cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f1cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1cc8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3f1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3f1ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f1cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1cd0: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3F1CD0u;
    SET_GPR_U32(ctx, 31, 0x3F1CD8u);
    ctx->pc = 0x3F1CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1CD0u;
    // 0x3f1cd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3F1CD0u, 0x3F1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1CD8u;
label_3f1cd8:
    // 0x3f1cd8: 0x82020044  lb          $v0, 0x44($s0)
    ctx->pc = 0x3f1cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1cdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1ce0: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x3f1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f1ce4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3f1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_3f1ce8:
    // 0x3f1ce8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3f1cec: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3f1cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f1cf0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1CF0u;
    {
        const bool branch_taken_0x3f1cf0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CF0u;
        // 0x3f1cf4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cf0) {
            ctx->pc = 0x3F1D04u;
            goto label_3f1d04;
        }
    }
    ctx->pc = 0x3F1CF8u;
    // 0x3f1cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f1cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1CFCu;
    {
        const bool branch_taken_0x3f1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CFCu;
        // 0x3f1d00: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cfc) {
            ctx->pc = 0x3F1D20u;
            goto label_3f1d20;
        }
    }
    ctx->pc = 0x3F1D04u;
label_3f1d04:
    // 0x3f1d04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3f1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f1d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f1d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f1d0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f1d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f1d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1d14: 0x0  nop
    ctx->pc = 0x3f1d14u;
    // NOP
    // 0x3f1d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f1d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3f1d1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f1d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f1d20:
    // 0x3f1d20: 0x0  nop
    ctx->pc = 0x3f1d20u;
    // NOP
    // 0x3f1d24: 0x0  nop
    ctx->pc = 0x3f1d24u;
    // NOP
    // 0x3f1d28: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3f1d28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3f1d2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3f1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3f1d30: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3f1d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3f1d34: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3f1d38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f1d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3f1d3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f1d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f1d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f1d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1d44: 0x0  nop
    ctx->pc = 0x3f1d44u;
    // NOP
    // 0x3f1d48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f1d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f1d4c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3F1D4Cu;
    SET_GPR_U32(ctx, 31, 0x3F1D54u);
    ctx->pc = 0x3F1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1D4Cu;
    // 0x3f1d50: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3F1D4Cu, 0x3F1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1D54u;
label_3f1d54:
    // 0x3f1d54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3f1d58: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3f1d5c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f1d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f1d60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f1d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f1d64: 0x0  nop
    ctx->pc = 0x3f1d64u;
    // NOP
    // 0x3f1d68: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3f1d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3f1d6c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f1d70: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3f1d70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3f1d74: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3f1d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f1d78: 0x0  nop
    ctx->pc = 0x3f1d78u;
    // NOP
    // 0x3f1d7c: 0x0  nop
    ctx->pc = 0x3f1d7cu;
    // NOP
    // 0x3f1d80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F1D80u;
    {
        const bool branch_taken_0x3f1d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D80u;
        // 0x3f1d84: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d80) {
            ctx->pc = 0x3F1DB0u;
            goto label_3f1db0;
        }
    }
    ctx->pc = 0x3F1D88u;
    // 0x3f1d88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1d8c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3f1d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3f1d90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3F1D90u;
    SET_GPR_U32(ctx, 31, 0x3F1D98u);
    ctx->pc = 0x3F1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1D90u;
    // 0x3f1d94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F1D90u, 0x3F1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1D98u;
label_3f1d98:
    // 0x3f1d98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f1d9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f1d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1da0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3f1da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f1da4: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3F1DA4u;
    SET_GPR_U32(ctx, 31, 0x3F1DACu);
    ctx->pc = 0x3F1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1DA4u;
    // 0x3f1da8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3F1DA4u, 0x3F1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1DACu;
label_3f1dac:
    // 0x3f1dac: 0x0  nop
    ctx->pc = 0x3f1dacu;
    // NOP
label_3f1db0:
    // 0x3f1db0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f1db4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F1DB4u;
    {
        const bool branch_taken_0x3f1db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1DB4u;
        // 0x3f1db8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1db4) {
            ctx->pc = 0x3F1DE0u;
            goto label_3f1de0;
        }
    }
    ctx->pc = 0x3F1DBCu;
    // 0x3f1dbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1dc0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3F1DC0u;
    SET_GPR_U32(ctx, 31, 0x3F1DC8u);
    ctx->pc = 0x3F1DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1DC0u;
    // 0x3f1dc4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F1DC0u, 0x3F1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1DC8u;
label_3f1dc8:
    // 0x3f1dc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3f1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f1dcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f1dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1dd0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3f1dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f1dd4: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3F1DD4u;
    SET_GPR_U32(ctx, 31, 0x3F1DDCu);
    ctx->pc = 0x3F1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1DD4u;
    // 0x3f1dd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3F1DD4u, 0x3F1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1DDCu;
label_3f1ddc:
    // 0x3f1ddc: 0x0  nop
    ctx->pc = 0x3f1ddcu;
    // NOP
label_3f1de0:
    // 0x3f1de0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3f1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3f1de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1de8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3f1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x3f1dec: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3f1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3f1df0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3f1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1df4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3f1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x3f1df8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3f1dfc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f1dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f1e00: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x3F1E00u;
    {
        const bool branch_taken_0x3f1e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1e00) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1E08u;
    // 0x3f1e08: 0x82020044  lb          $v0, 0x44($s0)
    ctx->pc = 0x3f1e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1e10: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3F1E10u;
    {
        const bool branch_taken_0x3f1e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E10u;
        // 0x3f1e14: 0xa2020044  sb          $v0, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e10) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1E18u;
label_3f1e18:
    // 0x3f1e18: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x3f1e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1e1c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3F1E1Cu;
    {
        const bool branch_taken_0x3f1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E1Cu;
        // 0x3f1e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e1c) {
            ctx->pc = 0x3F1FC8u;
            goto label_3f1fc8;
        }
    }
    ctx->pc = 0x3F1E24u;
    // 0x3f1e24: 0x0  nop
    ctx->pc = 0x3f1e24u;
    // NOP
label_3f1e28:
    // 0x3f1e28: 0x82030044  lb          $v1, 0x44($s0)
    ctx->pc = 0x3f1e28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1e30: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3F1E30u;
    {
        const bool branch_taken_0x3f1e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E30u;
        // 0x3f1e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e30) {
            ctx->pc = 0x3F1FB0u;
            goto label_3f1fb0;
        }
    }
    ctx->pc = 0x3F1E38u;
    // 0x3f1e38: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F1E38u;
    {
        const bool branch_taken_0x3f1e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f1e38) {
            ctx->pc = 0x3F1E80u;
            goto label_3f1e80;
        }
    }
    ctx->pc = 0x3F1E40u;
    // 0x3f1e40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1E40u;
    {
        const bool branch_taken_0x3f1e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1e40) {
            ctx->pc = 0x3F1E50u;
            goto label_3f1e50;
        }
    }
    ctx->pc = 0x3F1E48u;
    // 0x3f1e48: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3F1E48u;
    {
        const bool branch_taken_0x3f1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1e48) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1E50u;
label_3f1e50:
    // 0x3f1e50: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3f1e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3f1e54: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1E54u;
    {
        const bool branch_taken_0x3f1e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E54u;
        // 0x3f1e58: 0x3c040090  lui         $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e54) {
            ctx->pc = 0x3F1E70u;
            goto label_3f1e70;
        }
    }
    ctx->pc = 0x3F1E5Cu;
    // 0x3f1e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f1e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e60: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3f1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3f1e64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f1e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e68: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3F1E68u;
    SET_GPR_U32(ctx, 31, 0x3F1E70u);
    ctx->pc = 0x3F1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E68u;
    // 0x3f1e6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3F1E68u, 0x3F1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E70u;
label_3f1e70:
    // 0x3f1e70: 0x82020044  lb          $v0, 0x44($s0)
    ctx->pc = 0x3f1e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1e78: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x3f1e78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f1e7c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3f1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_3f1e80:
    // 0x3f1e80: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3f1e84: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3f1e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f1e88: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1E88u;
    {
        const bool branch_taken_0x3f1e88 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E88u;
        // 0x3f1e8c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e88) {
            ctx->pc = 0x3F1E9Cu;
            goto label_3f1e9c;
        }
    }
    ctx->pc = 0x3F1E90u;
    // 0x3f1e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f1e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1E94u;
    {
        const bool branch_taken_0x3f1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E94u;
        // 0x3f1e98: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e94) {
            ctx->pc = 0x3F1EB8u;
            goto label_3f1eb8;
        }
    }
    ctx->pc = 0x3F1E9Cu;
label_3f1e9c:
    // 0x3f1e9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3f1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f1ea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f1ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f1ea4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f1ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f1ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f1ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1eac: 0x0  nop
    ctx->pc = 0x3f1eacu;
    // NOP
    // 0x3f1eb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f1eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3f1eb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f1eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f1eb8:
    // 0x3f1eb8: 0x0  nop
    ctx->pc = 0x3f1eb8u;
    // NOP
    // 0x3f1ebc: 0x0  nop
    ctx->pc = 0x3f1ebcu;
    // NOP
    // 0x3f1ec0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3f1ec0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3f1ec4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3f1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3f1ec8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3f1ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3f1ecc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3f1ed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f1ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3f1ed4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f1ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f1ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f1ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1edc: 0x0  nop
    ctx->pc = 0x3f1edcu;
    // NOP
    // 0x3f1ee0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f1ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f1ee4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3F1EE4u;
    SET_GPR_U32(ctx, 31, 0x3F1EECu);
    ctx->pc = 0x3F1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1EE4u;
    // 0x3f1ee8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3F1EE4u, 0x3F1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1EECu;
label_3f1eec:
    // 0x3f1eec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3f1ef0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3f1ef4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3f1ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f1ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f1ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f1efc: 0x0  nop
    ctx->pc = 0x3f1efcu;
    // NOP
    // 0x3f1f00: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3f1f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3f1f04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f1f08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3f1f08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3f1f0c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x3f1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f1f10: 0x0  nop
    ctx->pc = 0x3f1f10u;
    // NOP
    // 0x3f1f14: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3f1f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3f1f18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F1F18u;
    {
        const bool branch_taken_0x3f1f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F18u;
        // 0x3f1f1c: 0x46001d01  sub.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f18) {
            ctx->pc = 0x3F1F48u;
            goto label_3f1f48;
        }
    }
    ctx->pc = 0x3F1F20u;
    // 0x3f1f20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1f24: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3f1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3f1f28: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3F1F28u;
    SET_GPR_U32(ctx, 31, 0x3F1F30u);
    ctx->pc = 0x3F1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F28u;
    // 0x3f1f2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F1F28u, 0x3F1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F30u;
label_3f1f30:
    // 0x3f1f30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f1f34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f1f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1f38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3f1f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f1f3c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x3F1F44u);
    ctx->pc = 0x3F1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F3Cu;
    // 0x3f1f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3F1F3Cu, 0x3F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F44u;
label_3f1f44:
    // 0x3f1f44: 0x0  nop
    ctx->pc = 0x3f1f44u;
    // NOP
label_3f1f48:
    // 0x3f1f48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3f1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f1f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F1F4Cu;
    {
        const bool branch_taken_0x3f1f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F4Cu;
        // 0x3f1f50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f4c) {
            ctx->pc = 0x3F1F78u;
            goto label_3f1f78;
        }
    }
    ctx->pc = 0x3F1F54u;
    // 0x3f1f54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1f58: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3F1F58u;
    SET_GPR_U32(ctx, 31, 0x3F1F60u);
    ctx->pc = 0x3F1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F58u;
    // 0x3f1f5c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F1F58u, 0x3F1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F60u;
label_3f1f60:
    // 0x3f1f60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3f1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f1f64: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f1f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1f68: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3f1f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f1f6c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3F1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3F1F74u);
    ctx->pc = 0x3F1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F6Cu;
    // 0x3f1f70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3F1F6Cu, 0x3F1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F74u;
label_3f1f74:
    // 0x3f1f74: 0x0  nop
    ctx->pc = 0x3f1f74u;
    // NOP
label_3f1f78:
    // 0x3f1f78: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3f1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3f1f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1f80: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3f1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x3f1f84: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3f1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3f1f88: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3f1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1f8c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3f1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x3f1f90: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3f1f94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f1f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f1f98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F1F98u;
    {
        const bool branch_taken_0x3f1f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1f98) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1FA0u;
    // 0x3f1fa0: 0x82020044  lb          $v0, 0x44($s0)
    ctx->pc = 0x3f1fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3f1fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f1fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1FA8u;
    {
        const bool branch_taken_0x3f1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FA8u;
        // 0x3f1fac: 0xa2020044  sb          $v0, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1fa8) {
            ctx->pc = 0x3F1FC0u;
            goto label_3f1fc0;
        }
    }
    ctx->pc = 0x3F1FB0u;
label_3f1fb0:
    // 0x3f1fb0: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x3f1fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1FB4u;
    {
        const bool branch_taken_0x3f1fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FB4u;
        // 0x3f1fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1fb4) {
            ctx->pc = 0x3F1FC8u;
            goto label_3f1fc8;
        }
    }
    ctx->pc = 0x3F1FBCu;
    // 0x3f1fbc: 0x0  nop
    ctx->pc = 0x3f1fbcu;
    // NOP
label_3f1fc0:
    // 0x3f1fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1fc4: 0x0  nop
    ctx->pc = 0x3f1fc4u;
    // NOP
label_3f1fc8:
    // 0x3f1fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f1fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f1fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1fd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f1fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FD4u;
        // 0x3f1fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1FDCu;
}
