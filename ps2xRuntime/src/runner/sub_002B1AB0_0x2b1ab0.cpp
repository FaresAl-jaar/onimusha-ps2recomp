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

// Function: sub_002B1AB0
// Address: 0x2b1ab0 - 0x2b1e28
void sub_002B1AB0_0x2b1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1AB0_0x2b1ab0");
#endif

    switch (ctx->pc) {
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1cccu: goto label_2b1ccc;
        default: break;
    }

    ctx->pc = 0x2b1ab0u;

    // 0x2b1ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b1ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b1ab8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b1abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b1abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b1ac0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2b1ac0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b1ac4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b1ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b1ac8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b1ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b1acc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2b1accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b1ad0: 0x120000cd  beqz        $s0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2B1AD0u;
    {
        const bool branch_taken_0x2b1ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AD0u;
        // 0x2b1ad4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ad0) {
            ctx->pc = 0x2B1E08u;
            goto label_2b1e08;
        }
    }
    ctx->pc = 0x2B1AD8u;
    // 0x2b1ad8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2b1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b1adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b1ae0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2b1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1ae4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1AE4u;
    {
        const bool branch_taken_0x2b1ae4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AE4u;
        // 0x2b1ae8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ae4) {
            ctx->pc = 0x2B1AF8u;
            goto label_2b1af8;
        }
    }
    ctx->pc = 0x2B1AECu;
    // 0x2b1aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1af0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1AF0u;
    {
        const bool branch_taken_0x2b1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AF0u;
        // 0x2b1af4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1af0) {
            ctx->pc = 0x2B1B10u;
            goto label_2b1b10;
        }
    }
    ctx->pc = 0x2B1AF8u;
label_2b1af8:
    // 0x2b1af8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1afc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b1b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b04: 0x0  nop
    ctx->pc = 0x2b1b04u;
    // NOP
    // 0x2b1b08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b1b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b1b0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b1b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b1b10:
    // 0x2b1b10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b1b14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1B14u;
    {
        const bool branch_taken_0x2b1b14 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B14u;
        // 0x2b1b18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b14) {
            ctx->pc = 0x2B1B28u;
            goto label_2b1b28;
        }
    }
    ctx->pc = 0x2B1B1Cu;
    // 0x2b1b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1B20u;
    {
        const bool branch_taken_0x2b1b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B20u;
        // 0x2b1b24: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b20) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1B28u;
label_2b1b28:
    // 0x2b1b28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1b2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b1b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b1b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b34: 0x0  nop
    ctx->pc = 0x2b1b34u;
    // NOP
    // 0x2b1b38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1b3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b1b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1b40:
    // 0x2b1b40: 0x0  nop
    ctx->pc = 0x2b1b40u;
    // NOP
    // 0x2b1b44: 0x0  nop
    ctx->pc = 0x2b1b44u;
    // NOP
    // 0x2b1b48: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2b1b48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b1b4c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b1b50: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2b1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b1b54: 0xc0ac140  jal         func_2B0500
    ctx->pc = 0x2B1B54u;
    SET_GPR_U32(ctx, 31, 0x2B1B5Cu);
    ctx->pc = 0x2B1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B54u;
    // 0x2b1b58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0500u, 0x2B1B54u, 0x2B1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B5Cu;
label_2b1b5c:
    // 0x2b1b5c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b1b60: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b1b64: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x2b1b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b1b68: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2b1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2b1b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b1b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1b70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b1b74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1b78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b1b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b80: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b1b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b1b84: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2b1b84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b1b88: 0x0  nop
    ctx->pc = 0x2b1b88u;
    // NOP
    // 0x2b1b8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b1b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b1b90: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2B1B90u;
    SET_GPR_U32(ctx, 31, 0x2B1B98u);
    ctx->pc = 0x2B1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B90u;
    // 0x2b1b94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2B1B90u, 0x2B1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B98u;
label_2b1b98:
    // 0x2b1b98: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2b1b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2b1b9c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2b1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2b1ba0: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x2b1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b1ba4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b1ba8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b1ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1bac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b1bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b1bb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1bb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b1bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1bbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b1bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b1bc0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2b1bc0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b1bc4: 0x0  nop
    ctx->pc = 0x2b1bc4u;
    // NOP
    // 0x2b1bc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b1bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b1bcc: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2B1BCCu;
    SET_GPR_U32(ctx, 31, 0x2B1BD4u);
    ctx->pc = 0x2B1BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BCCu;
    // 0x2b1bd0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2B1BCCu, 0x2B1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BD4u;
label_2b1bd4:
    // 0x2b1bd4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2b1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2b1bd8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2b1bdc: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x2b1bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b1be0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b1be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1be4: 0xc6250020  lwc1        $f5, 0x20($s1)
    ctx->pc = 0x2b1be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b1be8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b1bec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b1bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b1bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1bf4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b1bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b1bf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b1bfc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2b1bfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b1c00: 0xc6240028  lwc1        $f4, 0x28($s1)
    ctx->pc = 0x2b1c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b1c04: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x2b1c04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2b1c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c0c: 0x4604211c  madd.s      $f4, $f4, $f4
    ctx->pc = 0x2b1c0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2b1c10: 0x46040504  c1          0x40504
    ctx->pc = 0x2b1c10u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[4]);
    // 0x2b1c14: 0x0  nop
    ctx->pc = 0x2b1c14u;
    // NOP
    // 0x2b1c18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b1c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b1c1c: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x2B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C24u);
    ctx->pc = 0x2B1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C1Cu;
    // 0x2b1c20: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x2B1C1Cu, 0x2B1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C24u;
label_2b1c24:
    // 0x2b1c24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b1c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b1c28: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2b1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2b1c2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c30: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2B1C30u;
    SET_GPR_U32(ctx, 31, 0x2B1C38u);
    ctx->pc = 0x2B1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C30u;
    // 0x2b1c34: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2B1C30u, 0x2B1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C38u;
label_2b1c38:
    // 0x2b1c38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2b1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2b1c3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1c40: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x2b1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x2b1c44: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2b1c48: 0xc041442  jal         func_105108
    ctx->pc = 0x2B1C48u;
    SET_GPR_U32(ctx, 31, 0x2B1C50u);
    ctx->pc = 0x2B1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C48u;
    // 0x2b1c4c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2B1C48u, 0x2B1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C50u;
label_2b1c50:
    // 0x2b1c50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1c54: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2B1C54u;
    SET_GPR_U32(ctx, 31, 0x2B1C5Cu);
    ctx->pc = 0x2B1C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C54u;
    // 0x2b1c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2B1C54u, 0x2B1C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C5Cu;
label_2b1c5c:
    // 0x2b1c5c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b1c60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b1c64: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x2b1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x2b1c68: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2b1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1c6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2b1c6cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4EE0u));
    // 0x2b1c70: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2B1C70u;
    SET_GPR_U32(ctx, 31, 0x2B1C78u);
    ctx->pc = 0x2B1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C70u;
    // 0x2b1c74: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2B1C70u, 0x2B1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C78u;
label_2b1c78:
    // 0x2b1c78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b1c78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b1c7c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2b1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b1c80: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1c84: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2b1c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b1c90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b1c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b1c94: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2b1c94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2b1c98: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2B1C98u;
    SET_GPR_U32(ctx, 31, 0x2B1CA0u);
    ctx->pc = 0x2B1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C98u;
    // 0x2b1c9c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2B1C98u, 0x2B1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CA0u;
label_2b1ca0:
    // 0x2b1ca0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2b1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1ca4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b1ca8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2b1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1cac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2b1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b1cb0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2b1cb0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2b1cb4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x2b1cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2b1cb8: 0x46000584  c1          0x584
    ctx->pc = 0x2b1cb8u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b1cbc: 0x0  nop
    ctx->pc = 0x2b1cbcu;
    // NOP
    // 0x2b1cc0: 0x0  nop
    ctx->pc = 0x2b1cc0u;
    // NOP
    // 0x2b1cc4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2B1CC4u;
    SET_GPR_U32(ctx, 31, 0x2B1CCCu);
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2B1CC4u, 0x2B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CCCu;
label_2b1ccc:
    // 0x2b1ccc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2b1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2b1cd0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1CD0u;
    {
        const bool branch_taken_0x2b1cd0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD0u;
        // 0x2b1cd4: 0x46160182  mul.s       $f6, $f0, $f22 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cd0) {
            ctx->pc = 0x2B1CE4u;
            goto label_2b1ce4;
        }
    }
    ctx->pc = 0x2B1CD8u;
    // 0x2b1cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1CDCu;
    {
        const bool branch_taken_0x2b1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CDCu;
        // 0x2b1ce0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cdc) {
            ctx->pc = 0x2B1D00u;
            goto label_2b1d00;
        }
    }
    ctx->pc = 0x2B1CE4u;
label_2b1ce4:
    // 0x2b1ce4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2b1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2b1ce8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1cec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1cf0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1cf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1cf4: 0x0  nop
    ctx->pc = 0x2b1cf4u;
    // NOP
    // 0x2b1cf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b1cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b1cfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b1cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b1d00:
    // 0x2b1d00: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2b1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2b1d04: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D04u;
    {
        const bool branch_taken_0x2b1d04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D04u;
        // 0x2b1d08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d04) {
            ctx->pc = 0x2B1D18u;
            goto label_2b1d18;
        }
    }
    ctx->pc = 0x2B1D0Cu;
    // 0x2b1d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1D10u;
    {
        const bool branch_taken_0x2b1d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D10u;
        // 0x2b1d14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d10) {
            ctx->pc = 0x2B1D30u;
            goto label_2b1d30;
        }
    }
    ctx->pc = 0x2B1D18u;
label_2b1d18:
    // 0x2b1d18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1d1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1d20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1d20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d24: 0x0  nop
    ctx->pc = 0x2b1d24u;
    // NOP
    // 0x2b1d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1d2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b1d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1d30:
    // 0x2b1d30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b1d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b1d34: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2b1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2b1d38: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2b1d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b1d3c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D3Cu;
    {
        const bool branch_taken_0x2b1d3c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D3Cu;
        // 0x2b1d40: 0x46000940  add.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d3c) {
            ctx->pc = 0x2B1D50u;
            goto label_2b1d50;
        }
    }
    ctx->pc = 0x2B1D44u;
    // 0x2b1d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1D48u;
    {
        const bool branch_taken_0x2b1d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D48u;
        // 0x2b1d4c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d48) {
            ctx->pc = 0x2B1D6Cu;
            goto label_2b1d6c;
        }
    }
    ctx->pc = 0x2B1D50u;
label_2b1d50:
    // 0x2b1d50: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2b1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2b1d54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1d58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1d5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d60: 0x0  nop
    ctx->pc = 0x2b1d60u;
    // NOP
    // 0x2b1d64: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2b1d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b1d68: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b1d68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b1d6c:
    // 0x2b1d6c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2b1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2b1d70: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D70u;
    {
        const bool branch_taken_0x2b1d70 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D70u;
        // 0x2b1d74: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d70) {
            ctx->pc = 0x2B1D84u;
            goto label_2b1d84;
        }
    }
    ctx->pc = 0x2B1D78u;
    // 0x2b1d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1D7Cu;
    {
        const bool branch_taken_0x2b1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D7Cu;
        // 0x2b1d80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d7c) {
            ctx->pc = 0x2B1D9Cu;
            goto label_2b1d9c;
        }
    }
    ctx->pc = 0x2B1D84u;
label_2b1d84:
    // 0x2b1d84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1d88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1d8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1d8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d90: 0x0  nop
    ctx->pc = 0x2b1d90u;
    // NOP
    // 0x2b1d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1d98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b1d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1d9c:
    // 0x2b1d9c: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x2b1d9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b1da0: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2b1da0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2b1da4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2b1da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1da8: 0x46021900  add.s       $f4, $f3, $f2
    ctx->pc = 0x2b1da8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b1dac: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b1dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1db0: 0x460508c2  mul.s       $f3, $f1, $f5
    ctx->pc = 0x2b1db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2b1db4: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x2b1db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b1db8: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x2b1db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2b1dbc: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x2b1dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b1dc0: 0x46001900  add.s       $f4, $f3, $f0
    ctx->pc = 0x2b1dc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b1dc4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2b1dc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b1dc8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b1dcc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b1dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b1dd0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b1dd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2b1dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b1dd8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2b1dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b1ddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b1de0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b1de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b1de4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b1de4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b1de8: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x2b1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x2b1dec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b1df0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b1df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b1df4: 0x0  nop
    ctx->pc = 0x2b1df4u;
    // NOP
    // 0x2b1df8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x2b1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x2b1dfc: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2b1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x2b1e00: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2b1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2b1e04: 0x0  nop
    ctx->pc = 0x2b1e04u;
    // NOP
label_2b1e08:
    // 0x2b1e08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b1e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1e0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b1e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1e10: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2b1e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b1e14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b1e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1e18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1e1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E20u;
        // 0x2b1e24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1E28u;
}
