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

// Function: sub_003B29E0
// Address: 0x3b29e0 - 0x3b2be0
void sub_003B29E0_0x3b29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B29E0_0x3b29e0");
#endif

    switch (ctx->pc) {
        case 0x3b29fcu: goto label_3b29fc;
        case 0x3b2a2cu: goto label_3b2a2c;
        case 0x3b2a48u: goto label_3b2a48;
        case 0x3b2a58u: goto label_3b2a58;
        case 0x3b2a6cu: goto label_3b2a6c;
        case 0x3b2a7cu: goto label_3b2a7c;
        case 0x3b2ac4u: goto label_3b2ac4;
        case 0x3b2aecu: goto label_3b2aec;
        case 0x3b2afcu: goto label_3b2afc;
        case 0x3b2bccu: goto label_3b2bcc;
        default: break;
    }

    ctx->pc = 0x3b29e0u;

    // 0x3b29e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b29e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b29e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b29ec: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B29ECu;
    {
        const bool branch_taken_0x3b29ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29ECu;
        // 0x3b29f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b29ec) {
            ctx->pc = 0x3B2A00u;
            goto label_3b2a00;
        }
    }
    ctx->pc = 0x3B29F4u;
    // 0x3b29f4: 0xc0ec780  jal         func_3B1E00
    ctx->pc = 0x3B29F4u;
    SET_GPR_U32(ctx, 31, 0x3B29FCu);
    ctx->pc = 0x3B29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29F4u;
    // 0x3b29f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1E00u, 0x3B29F4u, 0x3B29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29FCu;
label_3b29fc:
    // 0x3b29fc: 0x0  nop
    ctx->pc = 0x3b29fcu;
    // NOP
label_3b2a00:
    // 0x3b2a00: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3b2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2a04: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x3B2A04u;
    {
        const bool branch_taken_0x3b2a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2a04) {
            ctx->pc = 0x3B2BD0u;
            goto label_3b2bd0;
        }
    }
    ctx->pc = 0x3B2A0Cu;
    // 0x3b2a0c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x3b2a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3b2a10: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x3b2a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x3b2a14: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x3b2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3b2a18: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3b2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2a1c: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x3b2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b2a20: 0xc44d0024  lwc1        $f13, 0x24($v0)
    ctx->pc = 0x3b2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b2a24: 0xc0ec9f4  jal         func_3B27D0
    ctx->pc = 0x3B2A24u;
    SET_GPR_U32(ctx, 31, 0x3B2A2Cu);
    ctx->pc = 0x3B2A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A24u;
    // 0x3b2a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B27D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B27D0u, 0x3B2A24u, 0x3B2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A2Cu;
label_3b2a2c:
    // 0x3b2a2c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x3b2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3b2a30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b2a34: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x3b2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3b2a38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3b2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2a3c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3b2a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x3b2a40: 0xc0ec844  jal         func_3B2110
    ctx->pc = 0x3B2A40u;
    SET_GPR_U32(ctx, 31, 0x3B2A48u);
    ctx->pc = 0x3B2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A40u;
    // 0x3b2a44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2110u, 0x3B2A40u, 0x3B2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A48u;
label_3b2a48:
    // 0x3b2a48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b2a4c: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x3b2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3b2a50: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B2A50u;
    SET_GPR_U32(ctx, 31, 0x3B2A58u);
    ctx->pc = 0x3B2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A50u;
    // 0x3b2a54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B2A50u, 0x3B2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A58u;
label_3b2a58:
    // 0x3b2a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b2a5c: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x3b2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3b2a60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b2a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a64: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x3B2A64u;
    SET_GPR_U32(ctx, 31, 0x3B2A6Cu);
    ctx->pc = 0x3B2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A64u;
    // 0x3b2a68: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x3B2A64u, 0x3B2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A6Cu;
label_3b2a6c:
    // 0x3b2a6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2A6Cu;
    {
        const bool branch_taken_0x3b2a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A6Cu;
        // 0x3b2a70: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a6c) {
            ctx->pc = 0x3B2A88u;
            goto label_3b2a88;
        }
    }
    ctx->pc = 0x3B2A74u;
    // 0x3b2a74: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B2A74u;
    SET_GPR_U32(ctx, 31, 0x3B2A7Cu);
    ctx->pc = 0x3B2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A74u;
    // 0x3b2a78: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B2A74u, 0x3B2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A7Cu;
label_3b2a7c:
    // 0x3b2a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2A7Cu;
    {
        const bool branch_taken_0x3b2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A7Cu;
        // 0x3b2a80: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a7c) {
            ctx->pc = 0x3B2A90u;
            goto label_3b2a90;
        }
    }
    ctx->pc = 0x3B2A84u;
    // 0x3b2a84: 0x0  nop
    ctx->pc = 0x3b2a84u;
    // NOP
label_3b2a88:
    // 0x3b2a88: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x3b2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2a8c: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x3b2a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_3b2a90:
    // 0x3b2a90: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3b2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2a94: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3b2a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3b2a98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2A98u;
    {
        const bool branch_taken_0x3b2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2a98) {
            ctx->pc = 0x3B2AA8u;
            goto label_3b2aa8;
        }
    }
    ctx->pc = 0x3B2AA0u;
    // 0x3b2aa0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x3b2aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2aa4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3b2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_3b2aa8:
    // 0x3b2aa8: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3b2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2aac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3b2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3b2ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b2ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b2ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2AB4u;
    {
        const bool branch_taken_0x3b2ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AB4u;
        // 0x3b2ab8: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ab4) {
            ctx->pc = 0x3B2AC8u;
            goto label_3b2ac8;
        }
    }
    ctx->pc = 0x3B2ABCu;
    // 0x3b2abc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B2ABCu;
    SET_GPR_U32(ctx, 31, 0x3B2AC4u);
    ctx->pc = 0x3B2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2ABCu;
    // 0x3b2ac0: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B2ABCu, 0x3B2AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AC4u;
label_3b2ac4:
    // 0x3b2ac4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3b2ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_3b2ac8:
    // 0x3b2ac8: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2acc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3b2ad0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b2ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b2ad4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B2AD4u;
    {
        const bool branch_taken_0x3b2ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2ad4) {
            ctx->pc = 0x3B2B00u;
            goto label_3b2b00;
        }
    }
    ctx->pc = 0x3B2ADCu;
    // 0x3b2adc: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x3b2adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3b2ae0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b2ae4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B2AE4u;
    SET_GPR_U32(ctx, 31, 0x3B2AECu);
    ctx->pc = 0x3B2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2AE4u;
    // 0x3b2ae8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B2AE4u, 0x3B2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AECu;
label_3b2aec:
    // 0x3b2aec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2AECu;
    {
        const bool branch_taken_0x3b2aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AECu;
        // 0x3b2af0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2aec) {
            ctx->pc = 0x3B2B00u;
            goto label_3b2b00;
        }
    }
    ctx->pc = 0x3B2AF4u;
    // 0x3b2af4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B2AF4u;
    SET_GPR_U32(ctx, 31, 0x3B2AFCu);
    ctx->pc = 0x3B2AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2AF4u;
    // 0x3b2af8: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B2AF4u, 0x3B2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AFCu;
label_3b2afc:
    // 0x3b2afc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3b2afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_3b2b00:
    // 0x3b2b00: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x3b2b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3b2b04: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x3b2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3b2b08: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x3b2b08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x3b2b0c: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x3b2b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3b2b10: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3b2b10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3b2b14: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3b2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3b2b18: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x3b2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x3b2b1c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3b2b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3b2b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2b24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3b2b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b2b28: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x3b2b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x3b2b2c: 0xc60300b8  lwc1        $f3, 0xB8($s0)
    ctx->pc = 0x3b2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b2b30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b2b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b2b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2b38: 0xe60300bc  swc1        $f3, 0xBC($s0)
    ctx->pc = 0x3b2b38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x3b2b3c: 0xe60200c4  swc1        $f2, 0xC4($s0)
    ctx->pc = 0x3b2b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x3b2b40: 0xe60100c8  swc1        $f1, 0xC8($s0)
    ctx->pc = 0x3b2b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x3b2b44: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x3b2b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x3b2b48: 0xa20000d0  sb          $zero, 0xD0($s0)
    ctx->pc = 0x3b2b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2b4c: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x3b2b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2b50: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x3b2b50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2b54: 0xa20000dd  sb          $zero, 0xDD($s0)
    ctx->pc = 0x3b2b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2b58: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3b2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2b5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b2b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3b2b60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B2B60u;
    {
        const bool branch_taken_0x3b2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2b60) {
            ctx->pc = 0x3B2BA8u;
            goto label_3b2ba8;
        }
    }
    ctx->pc = 0x3B2B68u;
    // 0x3b2b68: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x3b2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2b6c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b2b70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b2b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b2b74: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b2b78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b2b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b2b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2b80: 0x0  nop
    ctx->pc = 0x3b2b80u;
    // NOP
    // 0x3b2b84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b2b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b2b88: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b2b88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b2b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b2b90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b2b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b2b94: 0x0  nop
    ctx->pc = 0x3b2b94u;
    // NOP
    // 0x3b2b98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b2b9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b2b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b2ba0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b2ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b2ba4: 0xa782885c  sh          $v0, -0x77A4($gp)
    ctx->pc = 0x3b2ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 2));
label_3b2ba8:
    // 0x3b2ba8: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3b2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2bac: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3b2bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b2bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2bb4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b2bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b2bb8: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b2bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x3b2bbc: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3b2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b2bc4: 0xc0ec6f4  jal         func_3B1BD0
    ctx->pc = 0x3B2BC4u;
    SET_GPR_U32(ctx, 31, 0x3B2BCCu);
    ctx->pc = 0x3B2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2BC4u;
    // 0x3b2bc8: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BD0u, 0x3B2BC4u, 0x3B2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BCCu;
label_3b2bcc:
    // 0x3b2bcc: 0x0  nop
    ctx->pc = 0x3b2bccu;
    // NOP
label_3b2bd0:
    // 0x3b2bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BD8u;
        // 0x3b2bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2BE0u;
}
