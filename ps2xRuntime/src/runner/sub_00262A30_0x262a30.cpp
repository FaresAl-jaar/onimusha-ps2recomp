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

// Function: sub_00262A30
// Address: 0x262a30 - 0x262c28
void sub_00262A30_0x262a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A30_0x262a30");
#endif

    switch (ctx->pc) {
        case 0x262a84u: goto label_262a84;
        case 0x262ab0u: goto label_262ab0;
        case 0x262b00u: goto label_262b00;
        case 0x262b30u: goto label_262b30;
        case 0x262b54u: goto label_262b54;
        case 0x262b70u: goto label_262b70;
        case 0x262b98u: goto label_262b98;
        case 0x262bc8u: goto label_262bc8;
        case 0x262be8u: goto label_262be8;
        case 0x262c0cu: goto label_262c0c;
        default: break;
    }

    ctx->pc = 0x262a30u;

    // 0x262a30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x262a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262a40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262a48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x262a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a4c: 0x8f8386e4  lw          $v1, -0x791C($gp)
    ctx->pc = 0x262a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x262a50: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x262A50u;
    {
        const bool branch_taken_0x262a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A50u;
        // 0x262a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a50) {
            ctx->pc = 0x262C10u;
            goto label_262c10;
        }
    }
    ctx->pc = 0x262A58u;
    // 0x262a58: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x262a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x262a5c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x262a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x262a60: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x262a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x262a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262a68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x262A68u;
    {
        const bool branch_taken_0x262a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A68u;
        // 0x262a6c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a68) {
            ctx->pc = 0x262A98u;
            goto label_262a98;
        }
    }
    ctx->pc = 0x262A70u;
    // 0x262a70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262a74: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x262a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x262a78: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x262a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x262a7c: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x262A7Cu;
    SET_GPR_U32(ctx, 31, 0x262A84u);
    ctx->pc = 0x262A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A7Cu;
    // 0x262a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x262A7Cu, 0x262A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A84u;
label_262a84:
    // 0x262a84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262A84u;
    {
        const bool branch_taken_0x262a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a84) {
            ctx->pc = 0x262A98u;
            goto label_262a98;
        }
    }
    ctx->pc = 0x262A8Cu;
    // 0x262a8c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x262a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262a90: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x262a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x262a94: 0x0  nop
    ctx->pc = 0x262a94u;
    // NOP
label_262a98:
    // 0x262a98: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x262a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x262a9c: 0x2484fde0  addiu       $a0, $a0, -0x220
    ctx->pc = 0x262a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966752));
    // 0x262aa0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x262aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262aa4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x262aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262aa8: 0xc064450  jal         func_191140
    ctx->pc = 0x262AA8u;
    SET_GPR_U32(ctx, 31, 0x262AB0u);
    ctx->pc = 0x262AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262AA8u;
    // 0x262aac: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191140u, 0x262AA8u, 0x262AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AB0u;
label_262ab0:
    // 0x262ab0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x262AB0u;
    {
        const bool branch_taken_0x262ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ab0) {
            ctx->pc = 0x262BE8u;
            goto label_262be8;
        }
    }
    ctx->pc = 0x262AB8u;
    // 0x262ab8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x262abc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x262ABCu;
    {
        const bool branch_taken_0x262abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262abc) {
            ctx->pc = 0x262AE8u;
            goto label_262ae8;
        }
    }
    ctx->pc = 0x262AC4u;
    // 0x262ac4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x262ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x262ac8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x262acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262ad0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x262ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x262ad4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x262ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x262ad8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x262ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262adc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262ae0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x262AE0u;
    {
        const bool branch_taken_0x262ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AE0u;
        // 0x262ae4: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ae0) {
            ctx->pc = 0x262B20u;
            goto label_262b20;
        }
    }
    ctx->pc = 0x262AE8u;
label_262ae8:
    // 0x262ae8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x262ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x262aec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262af0: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262af8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x262AF8u;
    SET_GPR_U32(ctx, 31, 0x262B00u);
    ctx->pc = 0x262AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262AF8u;
    // 0x262afc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x262AF8u, 0x262B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B00u;
label_262b00:
    // 0x262b00: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x262b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262b04: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x262b08: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x262b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x262b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262b10: 0x0  nop
    ctx->pc = 0x262b10u;
    // NOP
    // 0x262b14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262b18: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x262b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x262b1c: 0x0  nop
    ctx->pc = 0x262b1cu;
    // NOP
label_262b20:
    // 0x262b20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x262b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x262b24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262b28: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x262B28u;
    SET_GPR_U32(ctx, 31, 0x262B30u);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x262B28u, 0x262B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B30u;
label_262b30:
    // 0x262b30: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x262b34: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x262b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x262b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262b3c: 0x0  nop
    ctx->pc = 0x262b3cu;
    // NOP
    // 0x262b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262b44: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x262b48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262b4c: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x262B4Cu;
    SET_GPR_U32(ctx, 31, 0x262B54u);
    ctx->pc = 0x262B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B4Cu;
    // 0x262b50: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x262B4Cu, 0x262B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B54u;
label_262b54:
    // 0x262b54: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x262b58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x262b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262b60: 0x0  nop
    ctx->pc = 0x262b60u;
    // NOP
    // 0x262b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262b68: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x262B68u;
    SET_GPR_U32(ctx, 31, 0x262B70u);
    ctx->pc = 0x262B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B68u;
    // 0x262b6c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x262B68u, 0x262B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B70u;
label_262b70:
    // 0x262b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262B70u;
    {
        const bool branch_taken_0x262b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b70) {
            ctx->pc = 0x262B90u;
            goto label_262b90;
        }
    }
    ctx->pc = 0x262B78u;
    // 0x262b78: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x262b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b7c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x262b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x262b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262b84: 0x0  nop
    ctx->pc = 0x262b84u;
    // NOP
    // 0x262b88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262b8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x262b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_262b90:
    // 0x262b90: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x262B90u;
    SET_GPR_U32(ctx, 31, 0x262B98u);
    ctx->pc = 0x262B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B90u;
    // 0x262b94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x262B90u, 0x262B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B98u;
label_262b98:
    // 0x262b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262B98u;
    {
        const bool branch_taken_0x262b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b98) {
            ctx->pc = 0x262BB8u;
            goto label_262bb8;
        }
    }
    ctx->pc = 0x262BA0u;
    // 0x262ba0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x262ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262ba4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x262ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262bac: 0x0  nop
    ctx->pc = 0x262bacu;
    // NOP
    // 0x262bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262bb4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x262bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_262bb8:
    // 0x262bb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x262bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x262bbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262bc0: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x262BC0u;
    SET_GPR_U32(ctx, 31, 0x262BC8u);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x262BC0u, 0x262BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BC8u;
label_262bc8:
    // 0x262bc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x262bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x262bcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x262bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262bd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262bd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bd8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x262bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262bdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x262bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x262be0: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x262BE0u;
    SET_GPR_U32(ctx, 31, 0x262BE8u);
    ctx->pc = 0x262BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BE0u;
    // 0x262be4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x262BE0u, 0x262BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BE8u;
label_262be8:
    // 0x262be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262bec: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x262becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x262bf0: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x262bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x262bf4: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x262bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x262bf8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x262bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262bfc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x262bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262c00: 0xa3b1007d  sb          $s1, 0x7D($sp)
    ctx->pc = 0x262c00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 17));
    // 0x262c04: 0xc063f08  jal         func_18FC20
    ctx->pc = 0x262C04u;
    SET_GPR_U32(ctx, 31, 0x262C0Cu);
    ctx->pc = 0x262C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C04u;
    // 0x262c08: 0xa3a0007e  sb          $zero, 0x7E($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC20u, 0x262C04u, 0x262C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C0Cu;
label_262c0c:
    // 0x262c0c: 0x0  nop
    ctx->pc = 0x262c0cu;
    // NOP
label_262c10:
    // 0x262c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x262c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262c20: 0x3e00008  jr          $ra
    ctx->pc = 0x262C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C20u;
        // 0x262c24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262C28u;
}
