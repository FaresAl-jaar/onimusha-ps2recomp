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

// Function: sub_00320B80
// Address: 0x320b80 - 0x320cf8
void sub_00320B80_0x320b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B80_0x320b80");
#endif

    switch (ctx->pc) {
        case 0x320becu: goto label_320bec;
        case 0x320c0cu: goto label_320c0c;
        case 0x320c48u: goto label_320c48;
        case 0x320c64u: goto label_320c64;
        case 0x320c80u: goto label_320c80;
        case 0x320ca0u: goto label_320ca0;
        default: break;
    }

    ctx->pc = 0x320b80u;

    // 0x320b80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x320b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x320b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x320b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x320b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x320b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x320b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b98: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x320b98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x320b9c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x320B9Cu;
    {
        const bool branch_taken_0x320b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x320BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B9Cu;
        // 0x320ba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b9c) {
            ctx->pc = 0x320BD0u;
            goto label_320bd0;
        }
    }
    ctx->pc = 0x320BA4u;
    // 0x320ba4: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x320ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320ba8: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x320ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320bac: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x320bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320bb0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x320bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320bb4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x320bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320bb8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x320bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x320bbc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x320bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320bc0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x320bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320bc4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x320BC4u;
    {
        const bool branch_taken_0x320bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BC4u;
        // 0x320bc8: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bc4) {
            ctx->pc = 0x320CC0u;
            goto label_320cc0;
        }
    }
    ctx->pc = 0x320BCCu;
    // 0x320bcc: 0x0  nop
    ctx->pc = 0x320bccu;
    // NOP
label_320bd0:
    // 0x320bd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320bd4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320C30u;
            goto label_320c30;
        }
    }
    ctx->pc = 0x320BDCu;
    // 0x320bdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x320be0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x320be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x320be4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x320BE4u;
    SET_GPR_U32(ctx, 31, 0x320BECu);
    ctx->pc = 0x320BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BE4u;
    // 0x320be8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x320BE4u, 0x320BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BECu;
label_320bec:
    // 0x320bec: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x320bf0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x320bf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x320bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320bf8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x320bfc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x320bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x320c00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x320c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320c04: 0xc0414dc  jal         func_105370
    ctx->pc = 0x320C04u;
    SET_GPR_U32(ctx, 31, 0x320C0Cu);
    ctx->pc = 0x320C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C04u;
    // 0x320c08: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x320C04u, 0x320C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C0Cu;
label_320c0c:
    // 0x320c0c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x320c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x320c10: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x320c14: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x320c14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320c18: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320c1c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x320c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x320c20: 0x70601e28  paddub      $v1, $v1, $zero
    ctx->pc = 0x320c20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x320c24: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x320C24u;
    {
        const bool branch_taken_0x320c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C24u;
        // 0x320c28: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c24) {
            ctx->pc = 0x320CC0u;
            goto label_320cc0;
        }
    }
    ctx->pc = 0x320C2Cu;
    // 0x320c2c: 0x0  nop
    ctx->pc = 0x320c2cu;
    // NOP
label_320c30:
    // 0x320c30: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x320C30u;
    {
        const bool branch_taken_0x320c30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x320c30) {
            ctx->pc = 0x320CC0u;
            goto label_320cc0;
        }
    }
    ctx->pc = 0x320C38u;
    // 0x320c38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x320c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320c3c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x320c40: 0xc0414ca  jal         func_105328
    ctx->pc = 0x320C40u;
    SET_GPR_U32(ctx, 31, 0x320C48u);
    ctx->pc = 0x320C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C40u;
    // 0x320c44: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x320C40u, 0x320C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C48u;
label_320c48:
    // 0x320c48: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320c4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x320c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x320c50: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x320c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320c54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c58: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x320c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x320c5c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x320C5Cu;
    SET_GPR_U32(ctx, 31, 0x320C64u);
    ctx->pc = 0x320C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C5Cu;
    // 0x320c60: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x320C5Cu, 0x320C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C64u;
label_320c64:
    // 0x320c64: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x320c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x320c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x320c6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x320c6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320c70: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x320c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x320c74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x320c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320c78: 0xc0414ca  jal         func_105328
    ctx->pc = 0x320C78u;
    SET_GPR_U32(ctx, 31, 0x320C80u);
    ctx->pc = 0x320C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C78u;
    // 0x320c7c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x320C78u, 0x320C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C80u;
label_320c80:
    // 0x320c80: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320c84: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x320c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x320c88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x320c88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320c8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x320c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x320c90: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x320c94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x320c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320c98: 0xc0414dc  jal         func_105370
    ctx->pc = 0x320C98u;
    SET_GPR_U32(ctx, 31, 0x320CA0u);
    ctx->pc = 0x320C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C98u;
    // 0x320c9c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x320C98u, 0x320CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CA0u;
label_320ca0:
    // 0x320ca0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x320ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x320ca4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x320ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x320ca8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x320ca8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320cac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320cb0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x320cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x320cb4: 0x70601e28  paddub      $v1, $v1, $zero
    ctx->pc = 0x320cb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x320cb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x320cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x320cbc: 0x0  nop
    ctx->pc = 0x320cbcu;
    // NOP
label_320cc0:
    // 0x320cc0: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320cc4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x320cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320cc8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x320cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320ccc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x320cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320cd0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x320cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320cd4: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x320cd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x320cd8: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x320cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x320cdc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x320cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x320ce0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x320ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x320ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x320ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x320CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CF0u;
        // 0x320cf4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320CF8u;
}
