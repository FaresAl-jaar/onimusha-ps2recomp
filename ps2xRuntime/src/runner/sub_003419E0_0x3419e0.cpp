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

// Function: sub_003419E0
// Address: 0x3419e0 - 0x341b70
void sub_003419E0_0x3419e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003419E0_0x3419e0");
#endif

    switch (ctx->pc) {
        case 0x341a30u: goto label_341a30;
        case 0x341ad4u: goto label_341ad4;
        case 0x341af0u: goto label_341af0;
        case 0x341b14u: goto label_341b14;
        case 0x341b30u: goto label_341b30;
        default: break;
    }

    ctx->pc = 0x3419e0u;

    // 0x3419e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3419e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3419e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3419e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3419e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3419e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3419ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3419ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3419f0: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x3419f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x3419f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3419f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3419f8: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x3419f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x3419fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3419fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x341a00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x341a00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x341a08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x341a08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x341a10: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x341a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341a18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x341a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341a20: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x341a20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x341a24: 0x26317920  addiu       $s1, $s1, 0x7920
    ctx->pc = 0x341a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31008));
    // 0x341a28: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x341a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x341a2c: 0x0  nop
    ctx->pc = 0x341a2cu;
    // NOP
label_341a30:
    // 0x341a30: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x341a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x341a34: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x341a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x341a38: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x341a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x341a3c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x341A3Cu;
    {
        const bool branch_taken_0x341a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341a3c) {
            ctx->pc = 0x341B30u;
            goto label_341b30;
        }
    }
    ctx->pc = 0x341A44u;
    // 0x341a44: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x341a44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x341a48: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x341a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x341a4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A4Cu;
    {
        const bool branch_taken_0x341a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341a4c) {
            ctx->pc = 0x341A60u;
            goto label_341a60;
        }
    }
    ctx->pc = 0x341A54u;
    // 0x341a54: 0x16830036  bne         $s4, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x341A54u;
    {
        const bool branch_taken_0x341a54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x341a54) {
            ctx->pc = 0x341B30u;
            goto label_341b30;
        }
    }
    ctx->pc = 0x341A5Cu;
    // 0x341a5c: 0x0  nop
    ctx->pc = 0x341a5cu;
    // NOP
label_341a60:
    // 0x341a60: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x341a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x341a64: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A64u;
    {
        const bool branch_taken_0x341a64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x341A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A64u;
        // 0x341a68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a64) {
            ctx->pc = 0x341A78u;
            goto label_341a78;
        }
    }
    ctx->pc = 0x341A6Cu;
    // 0x341a6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x341A6Cu;
    {
        const bool branch_taken_0x341a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A6Cu;
        // 0x341a70: 0x92230005  lbu         $v1, 0x5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a6c) {
            ctx->pc = 0x341AA0u;
            goto label_341aa0;
        }
    }
    ctx->pc = 0x341A74u;
    // 0x341a74: 0x0  nop
    ctx->pc = 0x341a74u;
    // NOP
label_341a78:
    // 0x341a78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x341A78u;
    {
        const bool branch_taken_0x341a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341a78) {
            ctx->pc = 0x341AA0u;
            goto label_341aa0;
        }
    }
    ctx->pc = 0x341A80u;
    // 0x341a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341a84: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A84u;
    {
        const bool branch_taken_0x341a84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x341A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A84u;
        // 0x341a88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a84) {
            ctx->pc = 0x341A98u;
            goto label_341a98;
        }
    }
    ctx->pc = 0x341A8Cu;
    // 0x341a8c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A8Cu;
    {
        const bool branch_taken_0x341a8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x341a8c) {
            ctx->pc = 0x341AA0u;
            goto label_341aa0;
        }
    }
    ctx->pc = 0x341A94u;
    // 0x341a94: 0x0  nop
    ctx->pc = 0x341a94u;
    // NOP
label_341a98:
    // 0x341a98: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x341a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x341a9c: 0x0  nop
    ctx->pc = 0x341a9cu;
    // NOP
label_341aa0:
    // 0x341aa0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x341aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341aa4: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x341aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x341aa8: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x341AA8u;
    {
        const bool branch_taken_0x341aa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x341aa8) {
            ctx->pc = 0x341AF8u;
            goto label_341af8;
        }
    }
    ctx->pc = 0x341AB0u;
    // 0x341ab0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x341ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x341ab4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x341ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x341ab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x341ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x341abc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x341abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x341ac0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x341ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x341ac4: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x341ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x341ac8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x341ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341acc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x341ACCu;
    SET_GPR_U32(ctx, 31, 0x341AD4u);
    ctx->pc = 0x341AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341ACCu;
    // 0x341ad0: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x341ACCu, 0x341AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341AD4u;
label_341ad4:
    // 0x341ad4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x341ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x341ad8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x341ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341adc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x341adcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x341ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341ae8: 0xc0d056c  jal         func_3415B0
    ctx->pc = 0x341AE8u;
    SET_GPR_U32(ctx, 31, 0x341AF0u);
    ctx->pc = 0x341AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341AE8u;
    // 0x341aec: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3415B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3415B0u, 0x341AE8u, 0x341AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341AF0u;
label_341af0:
    // 0x341af0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x341AF0u;
    {
        const bool branch_taken_0x341af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341af0) {
            ctx->pc = 0x341B30u;
            goto label_341b30;
        }
    }
    ctx->pc = 0x341AF8u;
label_341af8:
    // 0x341af8: 0x28a100e1  slti        $at, $a1, 0xE1
    ctx->pc = 0x341af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x341afc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x341AFCu;
    {
        const bool branch_taken_0x341afc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x341afc) {
            ctx->pc = 0x341B20u;
            goto label_341b20;
        }
    }
    ctx->pc = 0x341B04u;
    // 0x341b04: 0x24a5ff20  addiu       $a1, $a1, -0xE0
    ctx->pc = 0x341b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x341b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x341b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b0c: 0xc0d056c  jal         func_3415B0
    ctx->pc = 0x341B0Cu;
    SET_GPR_U32(ctx, 31, 0x341B14u);
    ctx->pc = 0x341B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B0Cu;
    // 0x341b10: 0x26a60020  addiu       $a2, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3415B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3415B0u, 0x341B0Cu, 0x341B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B14u;
label_341b14:
    // 0x341b14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x341B14u;
    {
        const bool branch_taken_0x341b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b14) {
            ctx->pc = 0x341B30u;
            goto label_341b30;
        }
    }
    ctx->pc = 0x341B1Cu;
    // 0x341b1c: 0x0  nop
    ctx->pc = 0x341b1cu;
    // NOP
label_341b20:
    // 0x341b20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341B20u;
    {
        const bool branch_taken_0x341b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B20u;
        // 0x341b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b20) {
            ctx->pc = 0x341B30u;
            goto label_341b30;
        }
    }
    ctx->pc = 0x341B28u;
    // 0x341b28: 0xc0d0590  jal         func_341640
    ctx->pc = 0x341B28u;
    SET_GPR_U32(ctx, 31, 0x341B30u);
    ctx->pc = 0x341B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B28u;
    // 0x341b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x341B28u, 0x341B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B30u;
label_341b30:
    // 0x341b30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x341b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x341b34: 0x2a420023  slti        $v0, $s2, 0x23
    ctx->pc = 0x341b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x341b38: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x341B38u;
    {
        const bool branch_taken_0x341b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B38u;
        // 0x341b3c: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b38) {
            ctx->pc = 0x341A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341a30;
        }
    }
    ctx->pc = 0x341B40u;
    // 0x341b40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x341b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x341b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x341b48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x341b4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x341b4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341b50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x341b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x341b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341b58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x341b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341b68: 0x3e00008  jr          $ra
    ctx->pc = 0x341B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B68u;
        // 0x341b6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B70u;
}
